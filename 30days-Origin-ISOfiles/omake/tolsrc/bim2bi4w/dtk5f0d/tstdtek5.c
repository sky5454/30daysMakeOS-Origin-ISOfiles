/* dtk系のサンプル */

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char UCHAR;

int tek_checkformat(int siz, UCHAR *p); /* 展開後のサイズを返す */
	/* -1:非osacmp */
	/* -2:osacmpだが対応できない */
int tek_decode(int siz, UCHAR *p, UCHAR *q); /* 成功したら0 */
	/* 正の値はフォーマットの異常・未対応、負の値はメモリ不足 */
	/* メモリ不足は補助バッファ利用時以外は発生しない */

int main(int argc, UCHAR **argv)
/* 出力ファイルをnulにすると、展開速度測定モードになる（いわゆるテスト） */
{
	FILE *fp;
	int tsiz, dsiz, st;
	UCHAR *tbuf, *dbuf = NULL, flag_nul = 0;
	if (argc != 3) {
		puts("usage>tstdtek5 input-file output-file");
		return 1;
	}
	tbuf = argv[2];
	if (tbuf[0] == 'n' && tbuf[1] == 'u' && tbuf[2] == 'l' && tbuf[3] == '\0')
		flag_nul = 1;
	fp = fopen(argv[1], "rb");
	if (fp == NULL) {
		puts("can't open input-file");
		return 1;
	}
	tsiz = 8 * 1024 * 1024 + 1024;
	if (flag_nul == 0) {
		fseek(fp, 0, SEEK_END);
		tsiz = ftell(fp);
		fseek(fp, 0, SEEK_SET);
	}
	tbuf = malloc(tsiz);
	if (tbuf == NULL) {
		puts("malloc error");
		return 1;
	}
	tsiz = fread(tbuf, 1, tsiz, fp);
	fclose(fp);
	dsiz = tek_checkformat(tsiz, tbuf);
	if (dsiz == -2) {
		puts("unsupported format");
		return 1;
	}
	if (dsiz == -1) {
		/* 無圧縮ファイル */
		dsiz = tsiz;
		dbuf = tbuf;
		tbuf = NULL;
	} else if (dsiz >= 0) {
		dbuf = malloc(dsiz);
		if (dbuf == NULL) {
			free(tbuf);
			puts("malloc error");
			return 1;
		}
		st = tek_decode(tsiz, tbuf, dbuf);
		if (st > 0) {
			free(tbuf);
			puts("unsupported format");
			return 1;
		}
		if (st < 0) {
			free(tbuf);
			puts("malloc error");
			return 1;
		}
	}
	if (flag_nul == 0) {
		fp = fopen(argv[2], "wb");
		if (fp == NULL) {
			puts("can't open output-file");
			return 1;
		}
		if (dsiz)
			fwrite(dbuf, 1, dsiz, fp);
		fclose(fp);
	}
	if (tbuf)
		free(tbuf);
	free(dbuf);
	return 0;
}
