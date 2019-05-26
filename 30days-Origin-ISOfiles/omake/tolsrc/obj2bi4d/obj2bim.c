/* "obj2bim4" */
//	Copyright(C) 2004 H.Kawai
//	usage(1) : obj2bim -fixobj (.obj file) [text_align:#] [data_align:#] [bss_align:#]
//	usage(2) : obj2bim @(rule file) out:(file) [map:(file)] [stack:#] [(.obj/.lib file) ...]

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* FILEBUFは、1ファイルあたりの制限サイズ */
/* OBJBUFSIZは、全ファイル合計の制限サイズ */

#define	FILEBUFSIZ		(8 * 1024 * 1024)	/*  8MB */
#define	OBJBUFSIZ		(16 * 1024 * 1024)	/* 16MB */
#define	LABELSTRSIZ		(256 * 1024)
#define	OBJFILESTRSIZ	(64 * 1024)
#define	LINKSTRSIZ		(LABELSTRSIZ * 8)
#define	MAXSECTION		64	/* 1つの.objファイルあたりの最大セクション数 */

#define NO_WARN			1	/* 警告消し用の無駄コードの有効化 */

typedef unsigned char UCHAR;

int get32b(const UCHAR *p)
{
	return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
}

int get32l(const UCHAR *p)
{
	return p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
}

struct LABELSTR {
	UCHAR type, sec, flags, align;
	/* type  0xff:未使用 */
	/* type  0x01:global/local label */
	/* type  0x02:constant */
	/* flags bit0 : used */
	/* flags bit1 : linked */
	unsigned int name[128 / 4 - 4];
	struct OBJFILESTR *name_obj; /* ローカル.objへのポインタ。publicならNULL */
	struct OBJFILESTR *def_obj; /* 所属オブジェクトファイル */
	unsigned int offset;
};

struct OBJFILESTR {
	struct {
		UCHAR *ptr;
		int links, sh_paddr, sectype;
		unsigned int size, addr;
		struct LINKSTR *linkptr;
		signed char align;
		UCHAR flags; /* bit0 : pure-COFF(0)/MS-COFF(1) */
	} section[MAXSECTION];
	unsigned int flags;
	/* flags  0xff : terminator */
	/* flags  bit0 : link */
};

struct LINKSTR {
	UCHAR type, dummy[3];
	int offset;
	struct LABELSTR *label;
	/* type  0x06:absolute */
	/* type  0x14:relative */
};

UCHAR *skipspace(unsigned char *p);
int loadlib(unsigned char *p, UCHAR redef);
int loadobj(unsigned char *p, UCHAR redef);
int getnum(unsigned char **pp);
struct LABELSTR *symbolconv0(unsigned char *s, struct OBJFILESTR *obj);
struct LABELSTR *symbolconv(unsigned char *p, unsigned char *s, struct OBJFILESTR *obj);
int link0(const int sectype, int *secparam, unsigned char *image);
extern int autodecomp(int siz0, UCHAR *p0, int siz);
void autodecomp_tek0(int bsiz, UCHAR *b, int csiz);

static struct LABELSTR *label0 = NULL;
static struct OBJFILESTR *objstr0;
static unsigned char *objbuf0;

static int alignconv(int align)
{
	/* アラインが2のべきになっているかどうかは、面倒なので確認していない */
	int i; 
	if ((i = align) >= 1) {
		align = 1;
		while (i >>= 1);
			align++;
	}
	return align;
}

int main(int argc, UCHAR **argv)
{
	FILE *fp;
	UCHAR *filebuf, *p, *filename, *mapname;
	UCHAR *s, *ps, *t, redef = 1, werr = 1;
	struct LABELSTR *labelbuf[16];
	int filesize, i, j, labelbufptr = 0, warns = 0;
	int section_param[12]; /* 最初の4つがコード、次の4つはデーター */
	struct LABELSTR *label;
	struct OBJFILESTR *obj;
	struct LINKSTR *ls;

	#if (defined(NO_WARN))
		filesize = 0;
	#endif

	if (argc <= 2) {
		fprintf(stdout,
			"\"obj2bim\" flexible linker for COFF   copyright (C) 2004 H.Kawai\n"
			"usage (2 cases) : \n"
			">obj2bim -fixobj (.obj file) [text_align:#] [data_align:#] [bss_align:#]\n"
			">obj2bim @(rule file) out:(file) [map:(file)] [stack:#] [(.obj/.lib file) ...]\n"
		);
		return 1;
	}

	/* オブジェクトファイル加工(アライン指定) */

	if (strcmp(argv[1], "-fixobj") == 0) {
		/* 一度に複数のファイルを指定しないこと */
		/* 複数ファイルの加工には対応していない */
		int text_align = -1, data_align = -1, bss_align = -1;
		filebuf = (unsigned char *) malloc(FILEBUFSIZ);
		filename = NULL;
		for (i = 2; i < argc; i++) {
			p = argv[i] + 11;
			if (strncmp(argv[i], "text_align:", 11) == 0) {
			//	p = argv[i] + 11;
				text_align = alignconv(getnum(&p));
			} else if (strncmp(argv[i], "data_align:", 11) == 0) {
			//	p = argv[i] + 11;
				data_align = alignconv(getnum(&p));
			} else if (strncmp(argv[i], "bss_align:", 10) == 0) {
			//	p = argv[i] + 10;
				p--;
				bss_align = alignconv(getnum(&p));
			} else if (filename == NULL && (fp = fopen(filename = argv[i], "rb")) != NULL) {
				filesize = fread(filebuf, 1, FILEBUFSIZ, fp);
				fclose(fp);
			} else {
				fprintf(stderr, "Command line error : %s\n", argv[i]);
				free(filebuf);
				return 1;
			}
		}

		if ((filebuf[0x00] ^ 0x4c) | (filebuf[0x01] ^ 0x01) | filebuf[0x03] | filebuf[0x10] | filebuf[0x11]) {
			free(filebuf);
			fprintf(stderr, "Unknown .obj file format\n");
			return 2;
		}
		for (i = 0; i < filebuf[0x02]; i++) {
			p = &filebuf[0x14 + i * 0x28];
			j = -1;
			if (p[0x24] == 0x20) {
				/* text section */
				j = text_align;
			} else if (p[0x24] == 0x40) {
				/* data section */
				j = data_align;
			} else if (p[0x24] == 0x80) {
				/* bss section */
				j = bss_align;
			}
			if (j >= 0) {
				p[0x26] &= 0x0f;
				p[0x26] |= j << 4;
			}
		}

		fp = fopen(filename, "wb");
		fwrite(filebuf, 1, filesize, fp);
		fclose(fp);
		free(filebuf);
		return 0;
	}

	/* 汎用リンカー */

	s = (unsigned char *) malloc(1024);

	if (argv[1][0] != '@') {
		fprintf(stderr, "The argv[1] must be a rule file : %s\n", argv[1]);
		return 1;
	}

	if ((fp = fopen(argv[1] + 1, "r")) == NULL) {
		fprintf(stderr, "Can't open rule file\n");
		return 2;
	}

	p = filebuf = (unsigned char *) malloc(FILEBUFSIZ);
	filesize = fread(filebuf, 1, FILEBUFSIZ, fp);
	fclose(fp);
	filebuf[filesize] = '\0'; /* EOF mark */

	/* (format section) */

	p = skipspace(p);
	if (strncmp(p, "format", 6)) {
err_rule_format0:
		fprintf(stderr, "Rule file error : can't find format section\n");
		free(filebuf);
		return 2;
	}
	p = skipspace(p + 6);
	if (*p != ':')
		goto err_rule_format0;
	p = skipspace(p + 1);

//	section_param[0 /* align */ + 0 /* code */] = -1;
//	section_param[1 /* logic */ + 0 /* code */] = -1;
//	section_param[2 /* file */  + 0 /* code */] = -1;
//	section_param[0 /* align */ + 4 /* data */] = -1;
//	section_param[1 /* logic */ + 4 /* data */] = -1;
//	section_param[2 /* file */  + 4 /* data */] = -1;
	for (i = 0; i < 12; i++)
		section_param[i] = -1;

	for (;;) {
		if (*p == '\0' || strncmp(p, "file", 4) == 0 || strncmp(p, "label", 5) == 0)
			break;
		i = -1;
		if (strncmp(p, "code", 4) == 0)
			i = 0;
		if (strncmp(p, "data", 4) == 0)
			i = 4;
		if (i >= 0) {
			p = skipspace(p + 4);
			if (*p != '(')
				goto err_rule_format1;
			p++;
			for (;;) {
				if (strncmp(p, "align", 5) == 0) {
					p += 5;
					j = 0;
				} else if (strncmp(p, "logic", 5) == 0) {
					p += 5;
					j = 1;
				} else if (strncmp(p, "file", 4) == 0) {
					p += 4;
					j = 2;
				} else if (*p == ')')
					break;
				else
					goto err_rule_format1;
				p = skipspace(p);
				if (*p != ':')
					goto err_rule_format1;
				p = skipspace(p + 1);
				if ('0' <= *p && *p <= '9')
					section_param[i + j] = getnum(&p);
				else if (strncmp(p, "code_end", 8) == 0) {
					section_param[i + j] = -2;
					p += 8;
				} else if (strncmp(p, "data_end", 8) == 0) {
					section_param[i + j] = -3;
					p += 8;
				} else if (strncmp(p, "stack_end", 9) == 0) {
					section_param[i + j] = -4;
					p += 9;
				} else
					goto err_rule_format1;
				p = skipspace(p);
				if (*p == ')')
					break;
				if (*p != ',')
					goto err_rule_format1;
				p = skipspace(p + 1);
			}
			p = skipspace(p + 1);
			if (*p != ';')
				goto err_rule_format1;
			p = skipspace(p + 1);
		} else {
err_rule_format1:
			fprintf(stderr, "Rule file error : syntax error in format section\n");
			free(filebuf);
			return 3;
		}
	}

	/* (command line file) */

	filename = NULL;
	mapname = NULL;

	for (i = 2; i < argc; i++) {
		ps = s;
		t = argv[i];
		if (strncmp(t, "out:", 4) == 0) {
			filename = t + 4;
			continue;
		}
		if (strncmp(t, "map:", 4) == 0) {
			mapname = t + 4;
			continue;
		}
		if (strncmp(t, "stack:", 6) == 0) {
			t += 6;
			j = getnum(&t);
			if (section_param[1 /* logic */ + 0 /* code */] == -4 /* stack_end */)
				section_param[1 /* logic */ + 0 /* code */] = j;
			if (section_param[1 /* logic */ + 4 /* data */] == -4 /* stack_end */)
				section_param[1 /* logic */ + 4 /* data */] = j;
			continue;
		}
		if (strncmp(t, "wredef:", 7) == 0) {
			/* wredef:0	redefineの警告を隠すモードになる */
			t += 7;
			redef = getnum(&t);
			continue;
		}
		if (strncmp(t, "werr:", 5) == 0) {
			/* werr:0	警告はエラー扱いしない */
			t += 5;
			werr = getnum(&t);
			continue;
		}

		while ((*ps++ = *t++) != '\0');
		if (ps[-2] == 0x22 && *s == 0x22) {
			ps[-2] = '\0';
			ps = s + 1;
		} else
			ps = s;
		if ((fp = fopen(ps, "rb"))== NULL) {
			fprintf(stderr, "Command line error : can't open file : %s\n", ps);
			free(filebuf);
			return 8;
		}
		fread(t = filebuf + 65536, 1, FILEBUFSIZ - 65536, fp);
		fclose(fp);

		if (strncmp(t, "!<arch>\x0a/               ", 24) == 0 && ((t[0x42] ^ 0x60) | (t[0x43] ^ 0x0a)) == 0)
			warns += loadlib(t, redef);
		else if (((t[0] ^ 0x4c) | (t[1] ^ 0x01)) == 0)
			warns += loadobj(t, redef);
		else {
			fprintf(stderr, "Command line error : unknown file format : %s\n", ps);
			free(filebuf);
			return 9;
		}
	}

	/* (file section) */

	if (strncmp(p, "file", 4) == 0) {
		p = skipspace(p + 4);
		if (*p != ':') {
//err_rule_illsec:
			fprintf(stderr, "Rule file error : found a unknown section\n");
			free(filebuf);
			return 4;
		}

		/* ファイルをどんどん読み込んで、解釈して、バッファへ溜め込む */
		for (;;) {
			p = skipspace(p + 1); /* ':'か';'を読み飛ばす */
			if (*p == '\0' || (strncmp(p, "label", 5) == 0 && (p[5] == ':' || p[5] <= ' ')))
				break;
			ps = s;
			while (*p != '\0' && *p != ';')
				*ps++ = *p++;
			while (ps[-1] == ' ')
				ps--;
			*ps = '\0';
			p = skipspace(p);
			if (*p != ';') {
				fprintf(stderr, "Rule file error : syntax error in file section\n");
				free(filebuf);
				return 5;
			}
			if (ps[-1] == 0x22 && *s == 0x22) {
				ps[-1] = '\0';
				ps = s + 1;
			} else
				ps = s;
			if ((fp = fopen(ps, "rb")) == NULL) {
				fprintf(stderr, "Rule file error : can't open file : %s\n", ps);
				free(filebuf);
				return 6;
			}
			j = fread(t = filebuf + 65536, 1, FILEBUFSIZ - 65536, fp);
			fclose(fp);
			if (strncmp(&t[1], "\xff\xff\xff\x01\x00\x00\x00OSASKCMP", 15) == 0) {
				if (*t != 0x82)
					autodecomp(FILEBUFSIZ - 65536, t, j);
				else
					autodecomp_tek0(FILEBUFSIZ - 65536, t, j);
			}
			if (strncmp(t, "!<arch>\x0a/               ", 24) == 0 && ((t[0x42] ^ 0x60) | (t[0x43] ^ 0x0a)) == 0)
				warns += loadlib(t, redef);
			else if (((t[0] ^ 0x4c) | (t[1] ^ 0x01)) == 0)
				warns += loadobj(t, redef);
			else {
				fprintf(stderr, "Rule file error : unknown file format : %s\n", ps);
				free(filebuf);
				return 7;
			}
		}
	}

	/* (label section) */

	if (strncmp(p, "label", 5) != 0) {
err_rule_label:
		fprintf(stderr, "Rule file error : can't find label section\n");
		free(filebuf);
		return 10;
	}
	p = skipspace(p + 5);
	if (*p != ':')
		goto err_rule_label;
	for (;;) {
		p = skipspace(p + 1);
		if (*p == '\0')
			break;
		ps = s;
		for (;;) {
			if (*p == ';' || *p <= ' ' || *p == '/')
				break;
			*ps++ = *p++;
		}
		*ps = '\0';
		label = symbolconv0(s, NULL);
		labelbuf[labelbufptr++] = label;
		if (label->def_obj)
			label->flags |= 0x01; /* used */
		else {
			fprintf(stderr, "Warning : can't link %s\n", label->name);
			warns++;
		}
		p = skipspace(p);
		if (*p != ';') {
			fprintf(stderr, "Rule file error : syntax error in label section\n");
			free(filebuf);
			return 11;
		}
	}

	/* 必要な.objファイルを選択する */
	label = label0;
	for (;;) {
		if (label->type == 0xff)
			break; /* 選択完了 */
		if ((label->flags & 0x03) != 0x01 /* used && not linked */) {
			label++;
			continue;
		}

		obj = label->def_obj;
		if (obj == NULL) {
			label++;
			continue;
		}
		obj->flags |= 0x01;
		for (label = label0; label->type != 0xff; label++) {
			if (label->def_obj == obj) {
				label->flags |= 0x02; /* linked */
			}
		}
		for (j = 0; j < MAXSECTION; j++) {
			if (obj->section[j].size == 0)
				continue;
			ls = obj->section[j].linkptr;
			for (i = obj->section[j].links; i > 0; i--, ls++)
				ls->label->flags |= 0x01; /* used */
		}
		label = label0;
	}

	if (objstr0 == NULL)
		return 99;

	/* デフォルト値の適用 */
	for (i = 0; i < 12; i++) {
		if (section_param[i] == -4) {	/* stack_end */
			section_param[i] = 64 * 1024;
		}
	}

	/* .objの各セクションの論理アドレスを確定し、イメージを構築 */
	section_param[0 /* align */ + 8 /* bss */] = section_param[0 /* align */ + 4 /* data */];
	if (section_param[1 /* logic */ + 0 /* code */] != -3 /* data_end */) {
		/* コードが先 */
		warns += link0(0 /* code */, &section_param[0 /* code */], filebuf);
		if (section_param[1 /* logic */ + 4 /* data */] == -2 /* code_end */)
			section_param[1 /* logic */ + 4 /* data */] = section_param[3 /* logic+size */ + 0 /* code */];
		warns += link0(1 /* data */, &section_param[4 /* data */], filebuf + FILEBUFSIZ / 2);
		section_param[1 /* logic */ + 8 /* bss */] = section_param[3 /* logic+size */ + 4 /* data */];
		p = filebuf + FILEBUFSIZ / 2 + section_param[3 /* logic+size */ + 4 /* data */] - section_param[1 /* logic */ + 4 /* data */];
		warns += link0(2 /* bss */, &section_param[8 /* bss */], p);
	} else {
		/* データーが先 */
		warns += link0(1 /* data */, &section_param[4 /* data */], filebuf + FILEBUFSIZ / 2);
		section_param[1 /* logic */ + 8 /* bss */] = section_param[3 /* logic+size */ + 4 /* data */];
		p = filebuf + FILEBUFSIZ / 2 + section_param[3 /* logic+size */ + 4 /* data */] - section_param[1 /* logic */ + 4 /* data */];
		warns += link0(2 /* bss */, &section_param[8 /* bss */], p);
		if (section_param[1 /* logic */ + 0 /* code */] == -3 /* data_end */)
			section_param[1 /* logic */ + 0 /* code */] = section_param[3 /* logic+size */ + 8 /* bss */];
		warns += link0(0 /* code */, &section_param[0 /* code */], filebuf);
	}

	/* ラベルの値を確定 */
	for (label = label0; label->type != 0xff; label++) {
		if ((label->flags & 0x03 /* used | linked */) == 0)
			continue;
		if (label->type != 0x01 /* global/local label */)
			continue;
		obj = label->def_obj;
		if (obj == NULL)
			continue;
		label->offset += obj->section[label->sec - 1].addr;
	}

	/* mapfileへの出力 */
	if (mapname) {
		if ((fp = fopen(mapname, "w")) == NULL) {
			fprintf(stderr, "Warning : can't open mapfile\n");
			warns++;
		} else {
			i = section_param[3 /* logic+size */ + 0 /* code */] - section_param[1 /* logic */ + 0 /* code */];
			fprintf(fp, "text size : %6d(0x%05X)\n", i, i);
			i = section_param[3 /* logic+size */ + 4 /* data */] - section_param[1 /* logic */ + 4 /* data */];
			fprintf(fp, "data size : %6d(0x%05X)\n", i, i);
			i = section_param[3 /* logic+size */ + 8 /* bss  */] - section_param[1 /* logic */ + 8 /* bss  */];
			fprintf(fp, "bss  size : %6d(0x%05X)\n\n", i, i);

			/* 以下はちゃんとしたソートを書くのが面倒なので手抜きをしている */
			for (i = 0; i < 3; i++) {
				unsigned int value = 0, min;
				for (;;) {
					min = 0xffffffff;
					for (label = label0; label->type != 0xff; label++) {
						if ((label->flags & 0x03 /* used | linked */) == 0)
							continue;
						if (label->def_obj == NULL /* || label->name_obj != NULL */)
							continue;
						if (label->def_obj->section[label->sec - 1].sectype != i || label->type != 0x01)
							continue;
						if (label->offset < value)
							continue;
						if (min > label->offset)
							min = label->offset;
					}
					if (min == 0xffffffff)
						break;
					for (label = label0; label->type != 0xff; label++) {
						if ((label->flags & 0x03 /* used | linked */) == 0)
							continue;
						if (label->def_obj == NULL /* || label->name_obj != NULL */)
							continue;
						if (label->def_obj->section[label->sec - 1].sectype != i || label->type != 0x01)
							continue;
						if (label->offset != min)
							continue;
						if (label->name_obj)
							fprintf(fp, "0x%08X : (%s)\n", label->offset, label->name);
						else
							fprintf(fp, "0x%08X : %s\n", label->offset, label->name);
					}
					value = min + 1;
				}
			}
			fclose(fp);
		}
	}

	/* linking */
	for (obj = objstr0; obj->flags != 0xff; obj++) {
		if ((obj->flags & 0x01 /* link */) == 0)
			continue;
		for (i = 0; i < MAXSECTION; i++) {
			unsigned char *p0;
			if (obj->section[i].size == 0)
				continue;
			if ((j = obj->section[i].sectype) >= 2)
				continue;
		//	int rel0 = obj->section[i].sh_paddr - obj->addr[i];
			p0 = filebuf + j * FILEBUFSIZ / 2 + obj->section[i].addr - section_param[1 + j * 4];
			ls = obj->section[i].linkptr;
			for (j = obj->section[i].links; j > 0; j--, ls++) {
				int value;
				label = ls->label;
				p = p0 + ls->offset;
				if (label->def_obj == NULL && (label->flags & 0x01) != 0) {
					fprintf(stderr, "Warning : can't link %s\n", label->name);
					warns++;
					label->flags &= 0xfe;
				}
				value = get32l(p) + label->offset;
				if (ls->type == 0x14) {
					value -= obj->section[i].addr;
					if (obj->section[i].flags & 0x01)
						value -= ls->offset + 4;
				}
				p[0] = value         & 0xff;
				p[1] = (value >>  8) & 0xff;
				p[2] = (value >> 16) & 0xff;
				p[3] = (value >> 24) & 0xff;
			}
		}
	}

	/* ファイルに出力 */
	filesize = 0;
	p = objbuf0;
	for (i = 0; i < OBJBUFSIZ; i++)
		p[i] = '\0';
	if (section_param[2 /* file */ + 0 /* code */] != -3 /* data_end */) {
		/* コードが先 */
		p = objbuf0 + section_param[2 /* file */ + 0 /* code */];
		t = filebuf;
		for (i = section_param[3 + 0 /* code */] - section_param[1 + 0 /* code */]; i > 0; i--)
			*p++ = *t++;
		i = p - objbuf0;
		if (filesize < i)
			filesize = i;
		if (section_param[2 /* file */ + 4 /* data */] == -2 /* code_end */) {
			j = section_param[0 /* align */ + 4 /* data */] - 1;
			if (j < 0)
				j = 0;
			while (i & j)
				i++;
			section_param[2 /* file */ + 4 /* data */] = i;
		}
		p = objbuf0 + section_param[2 /* file */ + 4 /* data */];
		t = filebuf + FILEBUFSIZ / 2;
		for (i = section_param[3 + 8 /* bss */] - section_param[1 + 4 /* data */]; i > 0; i--)
			*p++ = *t++;
		i = p - objbuf0;
		if (filesize < i)
			filesize = i;
	} else {
		/* データーが先 */
		p = objbuf0 + section_param[2 /* file */ + 4 /* data */];
		t = filebuf + FILEBUFSIZ / 2;
		for (i = section_param[3 + 8 /* bss */] - section_param[1 + 4 /* data */]; i > 0; i--)
			*p++ = *t++;
		i = p - objbuf0;
		if (filesize < i)
			filesize = i;
		if (section_param[2 /* file */ + 0 /* data */] == -3 /* data_end */) {
			j = section_param[0 /* align */ + 0 /* code */] - 1;
			if (j < 0)
				j = 0;
			while (i & j)
				i++;
			section_param[2 /* file */ + 0 /* code */] = i;
		}
		p = objbuf0 + section_param[2 /* file */ + 0 /* code */];
		t = filebuf;
		for (i = section_param[3 + 0 /* code */] - section_param[1 + 0 /* code */]; i > 0; i--)
			*p++ = *t++;
		i = p - objbuf0;
		if (filesize < i)
			filesize = i;
	}
	p = objbuf0;
	*((int *) p)        = section_param[3 + 0 /* code */] - section_param[1 + 0 /* code */]; /* コードサイズ */
	*((int *) (p +  4)) = section_param[2 + 0 /* code */]; /* ファイル中の開始アドレス */
	*((int *) (p +  8)) = section_param[1 + 0 /* code */]; /* リンク解決時の開始アドレス */
	*((int *) (p + 12)) = section_param[3 + 8 /* bss  */] - section_param[1 + 4 /* data */]; /* データーサイズ */
	*((int *) (p + 16)) = section_param[2 + 4 /* data */]; /* ファイル中の開始アドレス */
	*((int *) (p + 20)) = section_param[1 + 4 /* data */]; /* リンク解決時の開始アドレス */
	t = p + 24;
	for (i = 0; i < labelbufptr; i++, t += 4)
		*((int *) t) = labelbuf[i]->offset;

	free(filebuf);
	fp = NULL;
	if (filename)
		fp = fopen(filename, "wb");
	if (fp == NULL) {
		fprintf(stderr, "Can't open output file\n");
		return 12;
	}
	if (filesize > fwrite(objbuf0, 1, filesize, fp)) {
		fprintf(stderr, "fwrite error\n");
		warns++;
	}
	fclose(fp);

	if (warns > 0 && werr != 0) {
		remove(filename);
		return 1;
	}
	return 0;
}

unsigned char *skipspace(unsigned char *p)
{
reloop:
	while (*p != '\0' && *p <= ' ')
		p++;
	if (p[0] == '/' && p[1] == '/') {
		while (*p != '\0' && *p != '\n')
			p++;
		if (*p == '\n')
			p++;
		goto reloop;
	}
	if (p[0] == '/' && p[1] == '*') {
		while (*p != '\0' && (p[0] != '*' || p[1] != '/'))
			p++;
		if (p[0] == '*' && p[1] == '/')
			p += 2;
		goto reloop;
	}
	return p;
}

#if 0

void loadlib(unsigned char *p)
{
	int *obj, i, j;
	unsigned char *t = &p[0x48];
	obj = malloc(1024 * sizeof (int));
	obj[0] = 0;
	for (j = get32b(&p[0x44]); j > 0; j--) {
		int objofs = get32b(t);
		for (i = 0; obj[i]; i++) {
			if (obj[i] == objofs)
				goto skip;
		}
		obj[i] = objofs;
		obj[i + 1] = 0;
		loadobj(p + objofs + 0x3c);
skip:
		t += 4;
	}
	free(obj);
	return;
}

#endif

int getdec(unsigned char *p)
{
	int i = 0;
	while (*p == ' ')
		p++;
	while ('0' <= *p && *p <= '9')
		i = i * 10 + (*p++ - '0');
	return i;
}

int loadlib(unsigned char *p, UCHAR redef)
{
	unsigned char *t;
	int i, j, warns = 0;
	i = getdec(&p[0x38]) + 0x44;
	if (strncmp(&p[i], "/       ", 8) != 0) {
		fprintf(stderr, "Internal error : loadlib(1)\n");
		return warns + 1;
	}
	t = &p[i + 0x3c];
	for (j = *t; j > 0; j--) {
		t += 4;
		warns += loadobj(p + get32l(t) + 0x3c, redef);
	}
	return warns;
}

int loadobj(unsigned char *p, UCHAR redef)
{
	static struct OBJFILESTR *next_objstr = NULL;
	static unsigned char *next_objbuf;
	static struct LINKSTR *next_linkstr;
	int i, j, k, sec0, sec, value /* , bss_alloc */, warns = 0;
	unsigned char *q;
	struct LABELSTR *label;
	struct OBJFILESTR *objstr;

	if (next_objstr == NULL) {
		objstr0 = next_objstr = malloc(OBJFILESTRSIZ * sizeof (struct OBJFILESTR));
		objbuf0 = next_objbuf = malloc(OBJBUFSIZ);
		next_linkstr = malloc(LINKSTRSIZ * sizeof (struct LINKSTR));
	}

	/* ヘッダチェック */
	if ((p[0x00] ^ 0x4c) | (p[0x01] ^ 0x01)) {
		fprintf(stderr, "Internal error : loadobj(1) %16.16s\n", &p[-0x3c]);
		return 1;
	}

	objstr = next_objstr;

	for (i = 0; i < MAXSECTION; i++) {
		objstr->section[i].size = 0;
		objstr->section[i].sectype = 3; /* ブランク */
		objstr->section[i].flags = 0;
	}
	objstr->flags = 0x00;
	if ((p[0x02] | p[0x03] << 8) > MAXSECTION) {
		/* section数が多すぎる */
		fprintf(stderr, "Internal error : loadobj(2)\n");
		return 1;
	}
	for (i = 0; i < (p[0x02] | p[0x03] << 8); i++) {
		q = p + 0x14 + i * 0x28;
		if (q[0x24] == 0x20) {
			/* text section */
			j = 0;
		} else if (q[0x24] == 0x40) {
			/* data section */
			j = 1;
		} else if (q[0x24] == 0x80) {
			/* bss section */
			j = 2;
		} else {
			objstr->section[i].sectype = 4; /* unknown */
			continue;
		}
		objstr->section[i].sectype = j;
		if (q[0x27] & 0xe0)
			objstr->section[i].flags = 0x01; /* MS-COFF */

		objstr->section[i].size = get32l(&q[0x10]);
		objstr->section[i].align = q[0x26] >> 4;
		if (objstr->section[i].sectype < 2) {	/* text or data */
			unsigned char *s, *t;
			struct LINKSTR *ls;

			/* next_objbufへ転送 */
			objstr->section[i].ptr = next_objbuf;
			objstr->section[i].links = q[0x20] | q[0x21] << 8;
			objstr->section[i].sh_paddr = get32l(&q[0x08]);
			objstr->section[i].linkptr = ls = next_linkstr;
			s = next_objbuf;
			t = p + get32l(&q[0x14]);
			for (k = objstr->section[i].size; k > 0; k--)
				*s++ = *t++;
			next_objbuf = s;

			/* next_linkstrへ転送 */
		//	ls = next_linkstr;
			t = p + get32l(&q[0x18]);
			for (k = objstr->section[i].links; k > 0; k--, t += 0x0a) {
				ls->offset = get32l(&t[0x00]) /* - objstr->section[i].sh_paddr */;
				s = p + get32l(&t[0x04]) * 0x12 + get32l(&p[0x08]);
			//	if (strncmp(s, ".text\0\0\0", 8) == 0)
			//		goto link_skip;
			//	if (strncmp(s, ".data\0\0\0", 8) == 0)
			//		goto link_skip;
			//	if (strncmp(s, ".bss\0\0\0\0", 8) == 0)
			//		goto link_skip;
				ls->label = symbolconv(p, s, objstr);
			//	ls->label = label0 + get32l(&t[0x04]);
				if (t[0x08] == 0x06 || t[0x08] == 0x14) {
					ls->type = t[0x08];
					ls++;
				} else {
					fprintf(stderr, "Found a unknown reloc_type 0x%02X. Skipped\n", t[0x08]);
//link_skip:
					objstr->section[i].links--;
				}
			}
			next_linkstr = ls;
			/* ターミネーターはあるかな？ */
		//	printf("0x%04X 0x%04X 0x%02X\n", get32l(&t[0x00]), get32l(&t[0x04]), t[0x08] | t[0x09] << 8);
			/* なかった・・・ */
		}
	}

	#if (defined(NO_WARN))
		sec0 = 0; k = 0;
	#endif

	/* シンボル定義 */
	q = p + get32l(&p[0x08]);
	for (i = get32l(&p[0x0c]); i > 0; i -= j, q += j * 0x12) {
		j = q[0x11] /* numaux */ + 1;
		sec = q[0x0c];
		if (sec != 0 && sec < 0xf0)
			sec0 = sec;
	//	if ((q[0x0e] | q[0x0f] | q[0x10] - 0x03) == 0 && q[0x11] != 0) {
	//		/* section symbols */
	//	//	sec0 = sec;
	//		continue;
	//	}
		value = get32l(&q[0x08]);
		switch(q[0x10]) {
		case 0x02: /* public symbol */
		case 0x03: /* static symbol */
		case 0x06: /* label */
		//	if (q[0x11] /* numaux */)
		//		break;
			if (strncmp(q, "@comp.id", 8) == 0)
				break;
		//	if (strncmp(q, ".text\0\0\0", 8) == 0)
		//		break;
		//	if (strncmp(q, ".data\0\0\0", 8) == 0)
		//		break;
		//	if (strncmp(q, ".bss\0\0\0\0", 8) == 0)
		//		break;
			if (sec == 0xfe /* debugging symbol */)
				break;
			label = symbolconv(p, q, objstr);
			if (sec == 0 /* extern symbol */ && value == 0)
				break;
			if (objstr->section[sec0 - 1].sectype == 2 /* bss */ && sec == 0 /* extern symbol */) {
				int align = 2, sec_align, sec_size = objstr->section[sec0 - 1].size;
				while (align <= value)
					align <<= 1;
				align >>= 1;
				if ((sec_align = objstr->section[sec0 - 1].align) != 0) {
					k = 1 << (sec_align - 1);
					if (align > k)
						align = k;
				}
				while (sec_size & (k - 1))
					sec_size++;
				k = value;
				value = sec_size;
				objstr->section[sec0 - 1].size = sec_size + k;
			}
			if (label->def_obj != NULL && redef != 0) {
				fprintf(stderr, "Warning : redefine %s\n", label->name);
				warns++;
			}
			label->offset = value;
			label->sec = sec0;
			label->type = 1 + (sec == 0xff);
			label->def_obj = objstr;
			break;

		case 0x67: /* file name */
			break; /* 無視して捨てる */

		default:
			fprintf(stderr, "unknown storage class : %02X\n", q[0x10]);
		}
	}

	objstr++;
	objstr->flags = 0xff;
	next_objstr = objstr;
	return warns;
}

int getnum(UCHAR **pp)
{
	unsigned char *p = *pp;
	int i = 0, j, base = 10;
//	p = skipspace(p);
	if (*p == '0') {
		p++;
		if (*p == 'X' || *p == 'x') {
			base = 16;
			p++;
		} else if (*p == 'O' || *p == 'o') {
			base = 8;
			p++;
		}
	}
	p--;
	for (;;) {
		p++;
		if (*p == '_')
			continue;
		j = 99;
		if ('0' <= *p && *p <= '9')
			j = *p - '0';
		if ('A' <= *p && *p <= 'F')
			j = *p - 'A' + 10;
		if ('a' <= *p && *p <= 'f')
			j = *p - 'a' + 10;
		if (base <= j)
			break;
		i = i * base + j;
	}
	if (*p == 'k' || *p == 'K') {
		i *= 1024;
		p++;
	} else if (*p == 'm' || *p == 'M') {
		i *= 1024 * 1024;
		p++;
	} else if (*p == 'g' || *p == 'G') {
		i *= 1024 * 1024 * 1024;
		p++;
	}
	*pp = p;
	return i;
}

struct LABELSTR *symbolconv0(unsigned char *s, struct OBJFILESTR *obj)
{
	unsigned char *n;
	struct LABELSTR *label;
	int i, *name;

	name = malloc((128 / 4 - 4) * sizeof (int));

	if (label0 == NULL) {
		label0 = malloc(LABELSTRSIZ * sizeof (struct LABELSTR));
		label0->type = 0xff;
	}

	for (i = 0; i < 128 / 4 - 4; i++)
		name[i] = 0;
	n = (unsigned char *) name;
	while ((*n++ = *s++) != '\0');

	for (label = label0; label->type != 0xff; label++) {
		if (name[0] != label->name[0])
			continue;
		if (name[1] != label->name[1])
			continue;
		if (name[2] != label->name[2])
			continue;
		if (obj != label->name_obj)
			continue;
		for (i = 3; i < 128 / 4 - 4; i++) {
			if (name[i] != label->name[i])
				goto next_label;
		}
		goto fin;
next_label:
		;
	}
	label->type = 0x00;
	label->name_obj = obj;
	label->flags = 0x00;
	label->def_obj = NULL;
	label->offset = 0;
	for (i = 0; i < 128 / 4 - 4; i++)
		label->name[i] = name[i];
	label[1].type = 0xff;
fin:
	free(name);
	return label;
}

struct LABELSTR *symbolconv(unsigned char *p, unsigned char *s, struct OBJFILESTR *obj)
{
	unsigned char tmp[12], *n;

	if (s[0x10] == 0x02)
		obj = NULL;	/* external */

	if (s[0x00] | s[0x01] | s[0x02] | s[0x03]) {
		int i;
		for (i = 0; i < 8; i++)
			tmp[i] = s[i];
		tmp[8] = '\0';
		n = tmp;
	} else
		n = p + get32l(&p[0x08]) + get32l(&p[0x0c]) * 0x12 + get32l(&s[0x04]);

	return symbolconv0(n, obj);
}

/* 横着版 */
#if 0

struct LABELSTR *symbolconv0(unsigned char *s, struct OBJFILESTR *obj)
{
	unsigned char *n;
	struct LABELSTR *label;
	int i, *name;

	name = malloc((128 / 4 - 4) * sizeof (int));

	if (label0 == NULL) {
		label0 = malloc(LABELSTRSIZ * sizeof (struct LABELSTR));
		label0->type = 0xff;
	}

	for (i = 0; i < 128 / 4 - 4; i++)
		name[i] = 0;
	n = (unsigned char *) name;
	while (*n++ = *s++);

	for (label = label0; label->type != 0xff; label++) {
		int cmp = obj - label->name_obj;
		for (i = 0; i < 128 / 4 - 4; i++)
			cmp |= name[i] - label->name[i];
		if (cmp == 0)
			goto fin;
	}
	label->type = 0x00;
	label->name_obj = obj;
	label->flags = 0x00;
	label->def_obj = NULL;
	label->offset = 0;
	for (i = 0; i < 128 / 4 - 4; i++)
		label->name[i] = name[i];
	label[1].type = 0xff;
fin:
	free(name);
	return label;
}

struct LABELSTR *symbolconv(unsigned char *p, unsigned char *s, struct OBJFILESTR *obj)
{
	unsigned char tmp[12], *n;

	if (s[0x10] == 0x02)
		obj = NULL;	/* external */

	if (s[0x00] | s[0x01] | s[0x02] | s[0x03]) {
		int i;
		for (i = 0; i < 8; i++)
			tmp[i] = s[i];
		tmp[8] = '\0';
		n = tmp;
	} else
		n = p + get32l(&p[0x08]) + get32l(&p[0x0c]) * 0x12 + get32l(&s[0x04]);

	return symbolconv0(n, obj);
}

#endif
/* 横着版終わり */

int link0(const int sectype, int *secparam, unsigned char *image)
/* .objの各セクションの論理アドレスを確定させる */
{
	struct OBJFILESTR *obj;
	int addr = secparam[1 /* logic */], i, j, warns = 0;
	unsigned char *p;

	for (obj = objstr0; obj->flags != 0xff; obj++) {
		for (j = 0; j < MAXSECTION; j++) {
			if (obj->section[j].sectype != sectype)
				continue;
			if (obj->section[j].size == 0)
				continue;
			if ((obj->flags & 0x01 /* link */) == 0)
				continue;
			i = obj->section[j].align;
			if (i == 0) {
				i = secparam[0 /* align */] - 1;
				if (i < 0) {
					static char *secname[3] = { "code", "data", "data" };
					fprintf(stderr, "Warning : please set align for %s\n", secname[sectype]);
					warns++;
					i = 0;
				}
			} else
				i = (1 << (i - 1)) - 1;
			while (addr & i) {
				addr++;
				*image++ = '\0';
			}
			obj->section[j].addr = addr;
			if (sectype < 2) { /* text or data */
				p = obj->section[j].ptr;
				for (i = obj->section[j].size; i > 0; i--)
					*image++ = *p++;
			} else { /* bss */
				for (i = obj->section[j].size; i > 0; i--)
					*image++ = '\0';
			}
			addr += obj->section[j].size;
		}
	}
	secparam[3 /* logic+size */] = addr; /* sizeというより、最終アドレス */
	return warns;
}

/* autodecomp関係 */

static const UCHAR *getbc_ptr;
static UCHAR getbc_count, getbc_byte;

int getbc(int bits)
{
	int ret = 0;
	do {
		if (getbc_count == 8)
			getbc_byte = *getbc_ptr++;
		if (--getbc_count == 0)
			getbc_count = 8;
		ret <<= 1;
		if (getbc_byte & 0x80)
			ret |= 0x01;
		getbc_byte <<= 1;
	} while (--bits);
	return ret;
}

int getbc0(int bits, int ret)
/* 初期値付き */
{
	do {
		if (getbc_count == 8)
			getbc_byte = *getbc_ptr++;
		if (--getbc_count == 0)
			getbc_count = 8;
		ret <<= 1;
		if (getbc_byte & 0x80)
			ret |= 0x01;
		getbc_byte <<= 1;
	} while (--bits);
	return ret;
}

#if 0
void decode_l2d3(int k, const UCHAR *src, UCHAR *dest)
{
	int len, distance, j, i;
	getbc_count = 8;
	getbc_ptr = src;

	for (i = 0; i < k; ) {
		j = getbc(1);
		if (j > 0) {
			j = getbc(8);
			dest[i++] = j;
			continue;
		}
		/* len */
		j = getbc(2);
		len = j;
		if (j == 0) {
			j = getbc(4);
			len = j + 3;
			if (j == 0) {
				j = getbc(8);
				len = j + 18;
				if (j == 0) {
					j = getbc(16);
					len = j;
					if (j <= 127)
						len = getbc0(j, 1); /* 最初のbitは1に決まっているから */
				}
			}
		}
		distance = -1;
		do {
			distance = getbc0(3, distance);
			j = getbc(1);
		} while (j);
		do {
			dest[i] = dest[i + distance];
			i++;
		} while (--len);
	}
	return;
}
#endif

int getnum_l1a()
{
	int i = 1, j;
	for (;;) {
		j = getbc(1);
		if (j < 0)
			return j;
		if (j)
			break;
		i = getbc0(1, i);
		if (i < 0)
			break;
	}
	return i;
}

int getnum_l1b()
{
	int i = getnum_l1a();
	if (i < 0)
		return i;
	if (i == 1) {
		i = getbc(1);
		if (i < 0)
			return i;
	}
	return i + 1;
}

int getnum_df(unsigned int s)
{
	int d = -1, t;
	for (;;) {
		do {
			d = getbc0(1, d);
			t = s & 1;
			s >>= 1;
		} while (t == 0);
		if (s == 0)
			break;
		if (getbc(1))
			break;
	//	if (d == -1)
	//		return 0;
	}
	return d;
}

int getnum_s8()
{
	int s;
	s = getbc(8);
	while (getbc(1) == 0)
		s = getbc0(8, s);
	return s;
}

const int getnum_l0a(int z)
{
	static int l[4] = { 0x7fffffff, 4, 8, 16 };
	int i = 1, j;
	z = l[z];
	while (i < z) {
		j = getbc(1);
		if (j < 0)
			return j;
		if (j)
			return i;
		i++;
	}
	j = getbc(1);
	if (j < 0)
		return j;
	if (j)
		return i;
	j = getnum_l1b();
	if (j < 0)
		return j;
	return j + i;
}

void decode_tek0(int k, const UCHAR *src, UCHAR *dest)
{
	int len, distance, j, i, z0, z1;
	unsigned int dis_s, l_ofs, method;

	getbc_count = 8;
	getbc_ptr = src;

	/* ヘッダ読み込み */
	dis_s = getnum_s8();
	l_ofs = getbc(2);
	method = getbc(1); /* l1a/l1b */
	z0 = getbc(2);
	z1 = getbc(2);

	for (i = 0; i < k; ) {
		/* "0"-phase (非圧縮フェーズ) */
		j = getnum_l0a(z0);
	//	if (j < 0)
	//		break;
		do {
			len = getbc(8);
			if (len < 0)
				break;
			dest[i++] = len;
		} while (--j);

		if (i >= k)
			break;

		/* "1"-phase (圧縮フェーズ) */
		j = getnum_l0a(z1);
	//	if (j < 0)
	//		break;
		do {
			distance = getnum_df(dis_s);
			if (method == 0)
				len = getnum_l1a();
			else
				len = getnum_l1b();
			if (len < 0)
				break;
			len += l_ofs;
			do {
				dest[i] = dest[i + distance];
				i++;
			} while (--len);
		} while (--j);
	}
	return;
}

void autodecomp_tek0(int bsiz, UCHAR *b, int csiz)
{
	int i, dsiz;
	UCHAR *c;
	if (*b == 0x82) { /* tek0 */
		dsiz = get32l(&b[0x10]);
		if (dsiz + csiz - 0x14 <= bsiz) {
			c = b + bsiz - csiz;
			for (i = csiz - 1; i >= 0x14; i--)
				c[i] = b[i];
			decode_tek0(dsiz, c + 0x14, b);
		}
	}
}

/* 2006.11.07	baysideさんのアドバイスにより、MAXSECTIONを16から64に増加 */
