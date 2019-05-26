//	"bim2bin"
//	Copyright(C) 2003 H.Kawai
//	usage : bim2bin [malloc:#] [mmarea:#] in:(path) out:(path)
//		[-bim | -exe512 | -bin0 | -data | -restore | -osacmp] [-simple | -l2d3 | -tek0]

#include "../include/stdio.h"
#include "../include/stdlib.h"
#include "../include/string.h"
#include "../include/setjmp.h"

#define	get32(ptr)		*((int *) (ptr))

#define	SIZEOFBUF		(256 * 1024)
#define	SIZEOFOVERBUF	(256 * 1024)
#define	SIZEOFSUBBUF	(SIZEOFOVERBUF * 4)

/* 1536KB */

#define SIZ_SYSWRK			(4 * 1024)

/* +0x10 : 総DS/SSサイズ */
/* +0x14 : file */
/* +0x18 : reserve */
/* +0x1c : reserve */
/* +0x20 : static start */
/* +0x24 : static bytes */

static unsigned char *putb_buf, *putb_overbuf;
static int putb_ptr;
static unsigned char putb_byte, putb_count;

static const int lzcompress_l2d3(unsigned char *buf, int k, int i, int outlimit, int maxdis);
static const int lzcompress_tek0(int prm, unsigned char *buf, int k, int i, int outlimit, int maxdis);
static const int lzrestore_l2d3(unsigned char *buf, int k, int i, int outlimit);
static const int lzrestore_tek0(unsigned char *buf, int k, int i, int outlimit);

struct STR_BIM2BIN {
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

extern GO_FILE GO_stdin, GO_stdout, GO_stderr;
extern struct GOL_STR_MEMMAN GOL_memman, GOL_sysman;
extern int GOL_abortcode;
extern jmp_buf setjmp_env;
void *GOL_memmaninit(struct GOL_STR_MEMMAN *man, size_t size, void *p);
void *GOL_sysmalloc(size_t size);
UCHAR **ConvCmdLine1(int *pargc, UCHAR *p);

static int main0(int argc, char **argv, struct STR_BIM2BIN *params);

int bim2bin_main(struct STR_BIM2BIN *params)
{
	int argc;
	UCHAR **argv, *tmp0;
	UCHAR **argv1, **p;
	GO_stdout.p0 = GO_stdout.p = params->err0;
	GO_stdout.p1 = params->err0; /* stdoutはなし */
	GO_stdout.dummy = ~0;
	GO_stderr.p0 = GO_stderr.p = params->err0;
	GO_stderr.p1 = params->err1;
	GO_stderr.dummy = ~0;

	putb_count = 8;

	if (setjmp(setjmp_env)) {
		params->err0 = GO_stderr.p;
		return GOL_abortcode;
	}

	if (params->work1 - params->work0 < SIZ_SYSWRK + 16 * 1024)
		return GO_TERM_WORKOVER;
	GOL_memmaninit(&GOL_sysman, SIZ_SYSWRK, params->work0);
	GOL_memmaninit(&GOL_memman, params->work1 - params->work0 - SIZ_SYSWRK, params->work0 + SIZ_SYSWRK);
	argv = ConvCmdLine1(&argc, params->cmdlin);

	params->errcode = main0(argc, argv, params);

skip:
	/* バッファを出力 */
	GOL_sysabort(0);
}

static const int getnum(unsigned char *p)
{
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
	//	p++;
	} else if (*p == 'm' || *p == 'M') {
		i *= 1024 * 1024;
	//	p++;
	} else if (*p == 'g' || *p == 'G') {
		i *= 1024 * 1024 * 1024;
	//	p++;
	}
	return i;
}

static int main0(int argc, char **argv, struct STR_BIM2BIN *params)
{
	int mallocsize = 32 * 1024, reserve = 0, stacksize, datasize, worksize;
	int i, filesize, compress = 2, outtype = 0, prm0 = 12, maxdis = 32 * 1024;
//	FILE *fp;
	unsigned char *filepath[2], *s, *t, c;
	unsigned char *buf, *overbuf;
	int oversize, j, k, code_end, data_begin, entry;
	static unsigned char signature[15] = "\xff\xff\xff\x01\x00\x00\x00OSASKCMP";

	filepath[0] = filepath[1] = NULL;
	buf = malloc(SIZEOFBUF);
	overbuf = malloc(SIZEOFOVERBUF);

	if (argc <= 2) {
		fprintf(stderr,
			"\"bim2bin\" executable binary maker for GUIGUI00 (OSASK API)\n"
			"\tcopyright (C) 2003 H.Kawai\n"
			"usage : \n"
			">bim2bin [malloc:#] [mmarea:#] in:(file) out:(file)\n"
			"[-bim | -exe512 | -bin0 | -data | -restore | -osacmp] [-simple | -l2d3 | -tek0]\n"
		);
		return 1;
	}

	/* パラメーター解析 */
	for (argv++, i = 1; i < argc; argv++, i++) {
		s = *argv;
		if (strncmp(s, "malloc:", 7) == 0)
			mallocsize = getnum(s + 7);
		else if (strncmp(s, "file:", 5) == 0)
			reserve = getnum(s + 5) | 0x01;
		else if (strcmp(s, "-simple") == 0)
			compress = -1;
		else if (strncmp(s, "input:", 6) == 0)
			filepath[0] = s + 6;
		else if (strncmp(s, "output:", 7) == 0)
			filepath[1] = s + 7;
		else if (strcmp(s, "-l2d3") == 0)
			compress = 1;
		else if (strcmp(s, "-tek0") == 0)
			compress = 2;
		else if (strcmp(s, "-bim") == 0)
			outtype = 0;
		else if (strcmp(s, "-exe512") == 0)
			outtype = 1;
		else if (strcmp(s, "-data") == 0)
			outtype = 2;
		else if (strcmp(s, "-restore") == 0)
			outtype = 3;
		else if (strncmp(s, "prm0:", 5) == 0)
			prm0 = getnum(s + 5);
		else if (strncmp(s, "in:", 3) == 0)
			filepath[0] = s + 3;
		else if (strncmp(s, "out:", 4) == 0)
			filepath[1] = s + 4;
		else if (strncmp(s, "mmarea:", 7) == 0)
			reserve = getnum(s + 7) | 0x01;
		else if (strcmp(s, "-bin0") == 0)
			outtype = 4;
		else if (strcmp(s, "-osacmp") == 0)
			outtype = 5;
		else if (strncmp(s, "maxdis:", 7) == 0)
			maxdis = getnum(s + 7);
		else
			fprintf(stderr, "Commnad line error : %s ... skiped\n", s);
	}

	s = NULL;
	if (filepath[0]) {
		s = osain(filepath[0], &filesize);
		for (i = 0; i < filesize; i++)
			buf[i] = s[i];
		osaunmap();
	}
	if (s == NULL) {
		fprintf(stderr, "Commnad line error : can't open input file\n");
		return 1;
	}

	if (outtype == 2 /* data */) {
		putb_overbuf = overbuf;
		putb_ptr = 0;
		if (compress == 1)
			lzcompress_l2d3(buf, filesize, 0, SIZEOFOVERBUF - 8, maxdis);
		if (compress == 2)
			lzcompress_tek0(prm0, buf, filesize, 0, SIZEOFOVERBUF - 8, maxdis);
		for (i = 0; i < putb_ptr; i++)
			buf[i] = overbuf[i];
		filesize = putb_ptr;
		goto write;
	}

	if (outtype == 3 /* restore */) {
		c = 0;
		for (i = 0; i < 15; i++)
			c |= buf[i + 1] ^ signature[i];
		if (c) {
			for (i = 0; i < filesize; i++)
				overbuf[i] = buf[i];
		} else {
			filesize -= 20;
			if (buf[0] == 0x82)
				compress = 2;
			if (buf[0] == 0x81)
				compress = 1;
			for (i = 0; i < filesize; i++)
				overbuf[i] = buf[i + 20];
		}
		putb_overbuf = overbuf;
		putb_ptr = filesize;
		if (compress == 1)
			filesize = lzrestore_l2d3(buf, filesize, 0, SIZEOFOVERBUF - 8);
		if (compress == 2)
			filesize = lzrestore_tek0(buf, filesize, 0, SIZEOFOVERBUF - 8);
		goto write;
	}

	if (outtype == 5) { /* osacmp */
		for (i = filesize - 1; i >= 0; i--)
			buf[i + 20] = buf[i];
		for (i = 0; i < 15; i++)
			buf[i + 1] = signature[i];
		if (compress == 1)
			buf[0] = 0x81;
		if (compress == 2)
			buf[0] = 0x82;
		buf[16] = filesize         & 0xff;
		buf[17] = (filesize >>  8) & 0xff;
		buf[18] = (filesize >> 16) & 0xff;
		buf[19] = (filesize >> 24) & 0xff;
		buf[filesize + 20] = 0x14;
		buf[filesize + 21] = 0x00;
		buf[filesize + 22] = 0x00;
		buf[filesize + 23] = 0x00;
		outtype = 4; /* bin0 */
		filesize += 24;
	}
	if (outtype == 1 || outtype == 4) { /* exe512 | bin0 */
		if (outtype == 1 /* exe512 */) {
			/* ヘッダー(512バイト)のカット */
			filesize -= 512;
			for (i = 0; i < filesize; i++)
				buf[i] = buf[i + 512];
		}
		if (compress == -1) /* 単なるヘッダカット */
			goto write;
		/* スタティックデーターイメージ圧縮 */
		data_begin = get32(&buf[filesize - 4]);
		datasize = filesize - 4 - data_begin;
		putb_overbuf = overbuf;
		putb_ptr = 0;
		if (compress == 1)
			lzcompress_l2d3(buf + data_begin, datasize, 0, SIZEOFOVERBUF - 8, maxdis);
		if (compress == 2)
			lzcompress_tek0(prm0, buf + data_begin, datasize, 0, SIZEOFOVERBUF - 8, maxdis);
		for (i = 0; i < putb_ptr; i++)
			buf[data_begin + i] = overbuf[i];
		filesize = data_begin + putb_ptr;
		goto write;
	}

	if (reserve == 1)
		reserve = 0;
	code_end = get32(&buf[0x00]) + get32(&buf[0x04]);
	datasize = get32(&buf[0x0c]);
	data_begin = get32(&buf[0x10]);
	stacksize = get32(&buf[0x14]);
	entry = get32(&buf[0x18]);
	worksize = (stacksize + datasize + mallocsize + 0xfff) & ~0xfff;
	if (compress >= 0) {
		static unsigned char header1[0x48] = {
			"\x2e\x8b\x62\x20"
			"\x8b\xfc"
			"\xeb\x20"
			"GUIGUI00"
			"\0\0\0\0\0\0\0\0"
			"\0\0\0\0\0\0\0\0"
			"\0\0\0\0\0\0\0\0"
			"\x6a\xff"
			"\x0e"
			"\x68\0\0\0\0"		/* +0x2c : data begin */
			"\x2e\xff\x72\x24"
			"\x6a\x81"
			"\x6a\x04"
			"\x8b\xdc"
			"\x57"
			"\x9a\x00\x00\x00\x00\xc7\x00"
			"\x5c"
			"\xe9\0\0\0\0"		/* +0x44 : entry */
		};
		for (i = 0; i < 0x48; i++)
			buf[i] = header1[i];
		get32(&buf[0x10]) = worksize;
		get32(&buf[0x14]) = reserve;
		get32(&buf[0x20]) = stacksize;
		get32(&buf[0x24]) = datasize;
		get32(&buf[0x2c]) = code_end;
		get32(&buf[0x44]) = entry - 0x48;
		putb_overbuf = overbuf;
		putb_ptr = 0;
		if (compress == 1)
			lzcompress_l2d3(buf + data_begin, datasize, 0, SIZEOFOVERBUF - 8, maxdis);
		if (compress == 2) {
			buf[0x35] = 0x82; /* tek0圧縮データー展開 */
			lzcompress_tek0(prm0, buf + data_begin, datasize, 0, SIZEOFOVERBUF - 8, maxdis);
		}
		if (putb_ptr < datasize) {
			for (i = 0; i < putb_ptr; i++)
				buf[code_end + i] = overbuf[i];
			filesize = code_end + putb_ptr;
			goto write;
		}
	}
	{
		static unsigned char header0[0x40] = {
			"\x2e\x8b\x62\x20"
			"\x8b\xfc"
			"\xeb\x20"
			"GUIGUI00"
			"\0\0\0\0\0\0\0\0"
			"\0\0\0\0\0\0\0\0"
			"\0\0\0\0\0\0\0\0"
			"\x2e\x8b\x4a\x24"
			"\xbe\0\0\0\0"		/* +0x2d : data begin */
			"\x2e\x8a\x06"
			"\x46"
			"\x88\x07"
			"\x47"
			"\x49"
			"\x75\xf6"
			"\xe9\0\0\0\0"		/* +0x3c : entry */
		};
		for (i = 0; i < 0x40; i++)
			buf[i] = header0[i];
		get32(&buf[0x10]) = worksize;
		get32(&buf[0x14]) = reserve;
		get32(&buf[0x20]) = stacksize;
		get32(&buf[0x24]) = datasize;
		buf[0x2d] = code_end         & 0xff;
		buf[0x2e] = (code_end >>  8) & 0xff;
		buf[0x2f] = (code_end >> 16) & 0xff;
		buf[0x30] = (code_end >> 24) & 0xff;
		get32(&buf[0x3c]) = entry - 0x40;
		for (i = 0; i < datasize; i++)
			buf[code_end + i] = buf[data_begin + i];
		filesize = code_end + datasize;
	}

write:
	params->outname = filepath[1];
	if (filesize > params->dest1 - params->dest0)
		GOL_sysabort(GO_TERM_OUTOVER);
	for (i = 0; i < filesize; i++)
		*(params->dest0)++ = buf[i];

	return 0;
}

const int search0a(int prm0, unsigned char *buf, unsigned char *buf0, const int max0, int *p, const int *table)
{
	int l, max = 0, d, ld, ld0 = 30;
	unsigned char *s;
	unsigned char c = buf[0];

	/* アクセスしてはいけないアドレス : buf + max0 */
	for (s = buf - 1; s >= buf0; s--) {
		if (*s == c) {
			for (l = max; l > 0; l--) { /* 高速化のため、後ろから比較 */
				if (buf[l] != s[l])
					goto nextloop;
			}
			/* 一致長を算出, ただしmax0になったら打ち止め */
			for (l = max; buf[l] == s[l]; ) {
				if (++l >= max0) {
					*p = s - buf;
					return l;
				}
			}

/* distanceの増加量がlの増加量のp倍を超えているようなら、損であるので採用しない */

			d = s - buf;
			if (d == -1)
				ld = 0;
			else
				for (ld = 30; d & (1 << ld); ld--);
			if ((max - l) * prm0 + ld - ld0 < 0) {
				if (l > 10) {
					max = l;
					*p = d;
					ld0 = ld;
				} else if (d >= table[l - 1]) {
					max = l;
					*p = d;
					ld0 = ld;
				}
			}
		}
nextloop:
		;
	}
	return max;
}

const int search(unsigned char *buf, unsigned char *buf0, const int max0, int *p)
{
	static int table[10] = {
		-8, -512, -32 * 1024, -2 * 1024 * 1024, -0x7fffffff, 
		-0x7fffffff, -0x7fffffff, -0x7fffffff, -0x7fffffff, -0x7fffffff
	};
	return search0a(12, buf, buf0, max0, p, table);
}

void putbc(const int bits, int mask)
{
	do {
	//	putb((bits & mask) != 0);
		putb_byte = (putb_byte << 1) + ((bits & mask) != 0);
		if (--putb_count == 0) {
			putb_count = 8;
			if (putb_ptr < 0)
				putb_buf[putb_ptr] = putb_byte;
			else
				putb_overbuf[putb_ptr] = putb_byte;
			putb_ptr++;
		}
	} while (mask >>= 1);
	return;
}

void flushb()
{
	if (putb_count != 8) {
		putb_byte = putb_byte << 1 | 1; /* "1"を送る */
		if (--putb_count)
			putb_byte <<= putb_count;
		if (putb_ptr < 0)
			putb_buf[putb_ptr] = putb_byte;
		else
			putb_overbuf[putb_ptr] = putb_byte;
		putb_ptr++;
	}
	putb_count = 8;
	return;
}

void flushb0()
{
	if (putb_count != 8) {
		putb_byte = putb_byte << 1 | 0; /* "0"を送る */
		if (--putb_count)
			putb_byte <<= putb_count;
		if (putb_ptr < 0)
			putb_buf[putb_ptr] = putb_byte;
		else
			putb_overbuf[putb_ptr] = putb_byte;
		putb_ptr++;
	}
	putb_count = 8;
	return;
}

const int getbc(int bits)
{
	int ret = 0;
	do {
		if (putb_count == 8) {
			if (--putb_ptr < 0)
				return -1;
			putb_byte = *putb_overbuf++;
		}
		if (--putb_count == 0)
			putb_count = 8;
		ret <<= 1;
		if (putb_byte & 0x80)
			ret |= 0x01;
		putb_byte <<= 1;
	} while (--bits);
	return ret;
}

const int getbc0(int bits, int ret)
/* 初期値付き */
{
	do {
		if (putb_count == 8) {
			if (--putb_ptr < 0)
				return -1;
			putb_byte = *putb_overbuf++;
		}
		if (--putb_count == 0)
			putb_count = 8;
		ret <<= 1;
		if (putb_byte & 0x80)
			ret |= 0x01;
		putb_byte <<= 1;
	} while (--bits);
	return ret;
}

const unsigned char *get_subbuf(unsigned char *subbuf, int *t, int *d, int *l)
{
	*t = *subbuf++;
	if (*t == 0x00) {
		*l = 0;
		*d = 0;
		return subbuf - 1;
	}
	if (*t == 0x01) {
		*l = 1;
		*d = 0;
		return subbuf;
	}
	*l = *subbuf++;
	if (*t & 0x20) {
		*l |= subbuf[0] <<  8;
		*l |= subbuf[1] << 16;
		*l |= subbuf[2] << 24;
		subbuf += 3;
	}
	*d = *subbuf++ | 0xffffff00;
	if (*t & 0x40) {
		*d = subbuf[-1];
		*d |= subbuf[0] <<  8;
		*d |= subbuf[1] << 16;
		*d |= subbuf[2] << 24;
		subbuf += 3;
	}
	return subbuf;
}

const int get_subbuflen(unsigned char *subbuf, int *pt, int j)
/* リピート長を検出 */
{
	int l, d, t, len = 0;

	get_subbuf(subbuf, &t, &d, &l);
	if (t == 0x00) {
		*pt = 0x00;
		return 0;
	}
	if (t == 0x01 || (t >= 0x02 && l < j + 1)) {
		*pt = 0x01;
		for (;;) {
			subbuf = get_subbuf(subbuf, &t, &d, &l);
			if (t == 0x00)
				break;
			if (t == 0x01)
				len++;
			else {
				if (l < j + 1)
					len += l;
				else
					break;
			}
		}
	} else {
		*pt = 0x02;
		for (;;) {
			subbuf = get_subbuf(subbuf, &t, &d, &l);
			if (t <= 0x01)
				break;
			if (l < j + 1)
				break;
			len++;
		}
	}
	return len;
}

void lzcmp_putnum1(int i)
/* 19 <= i <= 273 だと14bitコードになる */
/* 2-4-8-16形式で出力 */
{
	if (i <= 4 - 1)
		putbc(i - 1 + 1, 0x2); /* 2bit */
	else if (i <= 19 - 1)
		putbc(i - 4 + 1, 0x20); /* 6bit(4bit) */
	else if (i <= 274 - 1)
		putbc(i - 19 + 1, 0x2000); /* 14bit(8bit) */
	else if (i <= 65535)
		putbc(i, 0x20000000); /* 30bit(16bit) */
	else {
		unsigned int limit = 0xffff, mask = 0x4000, lenlen = 15;
		do {
			limit = limit * 2 + 1;
			mask <<= 1;
			lenlen++;
		} while (i > limit);
		putbc(lenlen, 0x20000000); /* 30bit */
		putbc(i, mask); /* nbit */
	}
	return;
}

void putnum_l1a(unsigned int i)
/* must i >= 1 */
/* sxsxsxsxs形式で出力 */
{
	int j;
	if (i == 1) {
		putbc(0x1, 0x1);
		return;
	}
	j = 31;
	while ((i & 0x80000000) == 0) {
		i <<= 1;
		j--;
	}
	do {
		i <<= 1; /* 最初の1は捨てる */
		if (i & 0x80000000)
			putbc(0x1, 0x2); /* sx */
		else
			putbc(0x0, 0x2); /* sx */
	} while (--j);
	putbc(0x1, 0x1); /* s("1") */
	return;
}

void putnum_l1b(unsigned int i)
/* must i >= 1 */
/* おそらく、l2aやl2bよりも優れている */
{
	if (i <= 2) {
		putbc(i + 1, 0x2); /* "10" or "11" */
		return;
	}
	putnum_l1a(i - 1); /* 3を2にする */
	return;
}

void putnum_df(int d, unsigned int s)
/* sのbitが1だと、そこまで出力したあとに、sビットを出力 */
{
	int len;
	unsigned int i = 1;
//	if (d == 0) { /* リピートマーク出力 */
//		for (i = 1; (i & s) == 0; i <<= 1)
//			putbc(1, 1);
//		putbc(0x2, 0x2); /* "10" */
//		return;
//	}

	i = 31;
	while (i > 0 && (d & (1 << i)) != 0)
		i--;
	/* i = dの0が見付かったビット位置(0～31) */

	len = -1;
	do {
		do {
			len++;
		} while ((s & (1 << len)) == 0);
	} while (i > len);

	for (;;) {
		i = s & 1;
		s >>= 1;
		if (d & (1 << len))
			putbc(1, 1);
		else
			putbc(0, 1);
		len--;
		if (i == 0)
			continue;
		if (len < 0)
			break;
		putbc(0, 1); /* 継続bit */
	}
	if (s)
		putbc(1, 1); /* 非継続bit */
	return;
}

void putnum_s8(unsigned int s)
{
	int j = 4;
	while ((s & 0xff000000) == 0 && j > 1) {
		s <<= 8;
		j--;
	}
	for (;;) {
		putbc(s >> 24, 0x80);
		if (j == 1)
			break;
		putbc(0x0, 0x1);
		s <<= 8;
		j--;
	}
	putbc(0x1, 0x1);
	return;
}

void putnum_l0a(int i, int z)
{
	static int l[4] = { 0x7fffffff, 4, 8, 16 };
	int j;
	z = l[z];
	if (i <= z) {
		while (--i)
			putbc(0x0, 0x1); /* (i - 1)個の"0" */
		putbc(0x1, 0x1);
		return;
	}
	j = z;
	do {
		putbc(0x0, 0x1); /* z個の"0" */
	} while (--j);
	putnum_l1b(i - z);
	return;
}

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

const int calclen_l1a(unsigned int i)
/* must i >= 1 */
/* sxsxsxsxs形式で出力 */
{
	int j, l = 0;
	if (i == 1)
		return 1;
	j = 31;
	while ((i & 0x80000000) == 0) {
		i <<= 1;
		j--;
	}
	do {
		i <<= 1; /* 最初の1は捨てる */
		l += 2;
	} while (--j);
	return l + 1;
}

const int calclen_l1b(unsigned int i)
/* must i >= 1 */
/* sxsxsxsxs形式で出力 */
{
	if (i <= 2)
		return 2;
	return calclen_l1a(i - 1); /* 3を2にする */
}

const int calclen_df(int d, unsigned int s)
/* sのbitが1だと、そこまで出力したあとに、sビットを出力 */
{
	int len, l = 0;
	unsigned int i = 1;
//	if (d == 0) { /* リピートマーク出力 */
//		for (i = 1; (i & s) == 0; i <<= 1)
//			l++;
//		l += 2;
//		return l;
//	}

	i = 31;
	while (i > 0 && (d & (1 << i)) != 0)
		i--;
	/* i = dの0が見付かったビット位置(0～31) */

	len = -1;
	do {
		do {
			len++;
		} while ((s & (1 << len)) == 0);
	} while (i > len);

	for (;;) {
		i = s & 1;
		s >>= 1;
		l++;
		len--;
		if (i == 0)
			continue;
		if (len < 0)
			break;
		l++;/* 継続bit */
	}
	if (s)
		l++; /* 非継続bit */
	return l;
}

const int calclen_l0a(unsigned int i, int z)
/* must i >= 1 */
{
	static int l[4] = { 0x7fffffff, 4, 8, 16 };
	z = l[z];
	if (i <= z)
		return i;
	return z + calclen_l1b(i - z);
}

/* l2d3エンコード */

const int lzcompress_l2d3(unsigned char *buf, int k, int i, int outlimit, int maxdis)
{
	int len, maxlen, srchloglen = -1, srchlogdis = 0;
	int range, distance;
	int j, ptr0 = putb_ptr, i0;

	while (i < k) {
		if (outlimit >= putb_ptr + (putb_count != 8))
			i0 = i;
		else
			return i0;

		if (i == 0)
			len = 0;
		else {
			range = i - maxdis;
			if (range < 0)
				range = 0;
			maxlen = k - i;
			distance = srchlogdis;
			if ((len = srchloglen) < 0)
				len = search(buf + i,  buf + range, maxlen, &distance);
			srchloglen = -1;
			if (len >= 2) {
				range = i + 1 - maxdis;
				if (range < 0)
					range = 0;
				srchloglen = search(buf + i + 1,  buf + range, maxlen - 1, &srchlogdis);
				if (len < srchloglen)
					len = 0;
			}
		}

		if (len < 1) {
			putbc(0x100 | buf[i], 0x100); /* "1" + buf[i] */
			i++;
		} else {
			i += len;
			if (len >= 2)
				srchloglen = -1;
			putbc(0, 0x1);
			lzcmp_putnum1(len);

			/* 上位から出力せよ */

#if 1
#define	DLEN	3
			/* 2GB以上には対応していない */
			for (j = 31 / DLEN; j >= 1 && (distance >> (j * DLEN)) == -1; j--);
			if (j >= 0) {
			//	putbc(1, 0x1); /* 1bit */
				while (j) {
					putbc((distance >> (DLEN * j - 1)) | 1, 1 << DLEN); /* DLEN bit */
					j--;
				}
				putbc(distance << 1, 1 << DLEN); /* DLEN bit */
			} else
				putbc(0, 0x1); /* 1bit */

#endif

		}
	}

	flushb();

//	printf("%d -> %d (%f%%)\n", k, putb_ptr - ptr0, (double) (putb_ptr - ptr0) * 100 / k);

	return k;
}

/* l2d3デコード */

const int lzrestore_l2d3(unsigned char *buf, int k, int i, int outlimit)
{
	int len, distance, j;

	i = 0;
	for (;;) {
		j = getbc(1);
		if (j < 0)
			return i;
		if (j > 0) {
			j = getbc(8);
			if (j < 0)
				return i;
			buf[i++] = j;
			continue;
		}
		/* len */
		j = getbc(2);
//		if (j < 0)
//			return i;
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
//			if (j < 0)
//				return i;
		} while (j);
		do {
			buf[i] = buf[i + distance];
			i++;
		} while (--len);
	}
}

const int calc_totalbits(const unsigned int *bit, const unsigned int stops)
{
	int i, t = 0;
	for (i = 0; i < 32; i++) {
		if (bit[i])
			t += bit[i] * calclen_df(-2 << i, stops);
	}
	return t;
}

#if 0

const int calc_stopbits0(const unsigned int *bit)
/* 下位bitから入れていく方法 */
{
	int l;
	unsigned int t, s, maxlen, t0;
	t = 0;
	for (l = 0; l < 32; l++) {
		t += bit[l];
	}
	if (t == 0)
		return 0;
	for (maxlen = 31; bit[maxlen] == 0; maxlen--);
	s = 1 << maxlen;
	t0 = calc_totalbits(bit, s);
	for (l = 0; l < maxlen; l++) { /* 下から入れている */
		t = calc_totalbits(bit, s | 1 << l);
		if (t0 > t) {
			s |= 1 << l;
			t0 = t;
		}
	}
	return s;
}

const int calc_stopbits1(const unsigned int *bit)
/* 上位bitから入れていく方法 */
{
	int l;
	unsigned int t, s, maxlen, t0;
	t = 0;
	for (l = 0; l < 32; l++) {
		t += bit[l];
	}
	if (t == 0)
		return 0;
	for (maxlen = 31; bit[maxlen] == 0; maxlen--);
	s = 1 << maxlen;
	t0 = calc_totalbits(bit, s);
	for (l = maxlen - 1; l >= 0; l--) { /* 上から入れている */
		t = calc_totalbits(bit, s | 1 << l);
		if (t0 > t) {
			s |= 1 << l;
			t0 = t;
		}
	}
	return s;
}

#endif

const int calc_stopbits2(const unsigned int *bit)
/* 利益の多いところから入れていく方法 */
{
	int l, l0;
	unsigned int t, s, maxlen, t0, min;
	t = 0;
	for (l = 0; l < 32; l++) {
		t += bit[l];
	}
	if (t == 0)
		return 0;
	for (maxlen = 31; bit[maxlen] == 0; maxlen--);
	s = 1 << maxlen;
	min = t0 = calc_totalbits(bit, s);
	for (;;) {
		for (l = 0; l < maxlen; l++) {
			if ((s & (1 << l)) == 0) {
				t = calc_totalbits(bit, s | 1 << l);
				if (min > t) {
					min = t;
					l0 = l;
				}
			}
		}
		if (t0 <= min)
			break;
		t0 = min;
		s |= 1 << l0;
	}
	return s;
}

const int calc_stopbits(const unsigned int *bit)
{
	unsigned int min, s0, method, t, s;
	s0 = calc_stopbits2(bit);
	min = calc_totalbits(bit, s0);
	method = 2;
#if 0
	s = calc_stopbits1(bit);
	t = calc_totalbits(bit, s);
	if (min > t) {
		min = t;
		s0 = s;
		method = 1;
	}
	s = calc_stopbits0(bit);
	t = calc_totalbits(bit, s);
	if (min > t) {
		min = t;
		s0 = s;
		method = 0;
	}
	printf("[%d] ", method);
#endif
	return s0;
}

const int calcdis_s(const unsigned char *subbuf, const int i)
/* disのエンコード方式の自動選択 */
{
	unsigned int *distbl = malloc(32 * 4), dis_s;
	int j, l, d, t, len, maxlen;
	for (j = 0; j < 32; j++)
		distbl[j] = 0;
	for (;;) {
		subbuf = get_subbuf(subbuf, &t, &d, &l);
		if (t == 0x00)
			break;
		if (t == 0x01)
			continue;
		if (l < i + 1)
			continue;
		if (d == -1)
			j = 0;
		else {
			j = 31;
			while (d & 0x80000000) {
				d <<= 1;
				j--;
			}
		}
		distbl[j]++;
	}
	dis_s = calc_stopbits(distbl);
	free(distbl);
	return dis_s;
}

const int lzcompress_tek0(int prm, unsigned char *buf, int k, int i, int outlimit, int maxdis)
{
	unsigned char *subbuf, *subbuf0, *subbuf1;
	int len, maxlen, srchloglen = -1, srchlogdis = 0;
	int range, distance, dis_s;
	int ptr0 = putb_ptr, i0, j, z, z0;
	static int table[10] = {
		-8, -2 * 1024, -128 * 1024, -16 * 1024 * 1024, -2 * 1024 * 1024 * 1024, 
		-0x7fffffff, -0x7fffffff, -0x7fffffff, -0x7fffffff, -0x7fffffff
	};
	int t, l, d, ii, ii0;

	subbuf0 = malloc(SIZEOFSUBBUF);
	subbuf = subbuf0;

	while (i < k) {
	//	if (outlimit >= putb_ptr + (putb_count != 8))
	//		i0 = i;
	//	else
	//		return i0;

		if (i == 0)
			len = 0;
		else {
			range = i - maxdis;
			if (range < 0)
				range = 0;
			maxlen = k - i;
			len = srchloglen;
			distance = srchlogdis;
			if ((len = srchloglen) < 0)
				len = search0a(prm, buf + i,  buf + range, maxlen, &distance, table);
			srchloglen = -1;
			if (len >= 2) {
				range = i + 1 - maxdis;
				if (range < 0)
					range = 0;
				srchloglen = search0a(prm, buf + i + 1,  buf + range, maxlen - 1, &srchlogdis, table);
				if (len < srchloglen) {
					len = 0;
					if (i >= 8) {
						for (distance = -1; distance <= -8; distance--) {
							if (buf[i] == buf[i + distance]) {
								len = 1;
								break;
							}
						}
					}
				}
			}
		}

		if (len < 1) {
			subbuf[0] = 0x01;
			i++;
			subbuf++;
		} else {
			i += len;
			if (len >= 2)
				srchloglen = -1;
			subbuf[0] = 0x13;
			subbuf1 = subbuf;
			subbuf[1] = len & 0xff;
			subbuf += 2;
			if (len > 255) {
				subbuf[0] = (len >>  8) & 0xff;
				subbuf[1] = (len >> 16) & 0xff;
				subbuf[2] = (len >> 24) & 0xff;
				subbuf += 3;
				*subbuf1 = 0x36;
			}
			*subbuf++ = distance & 0xff;
			if (distance < -256) {
				subbuf[0] = (distance >>  8) & 0xff;
				subbuf[1] = (distance >> 16) & 0xff;
				subbuf[2] = (distance >> 24) & 0xff;
				subbuf += 3;
				*subbuf1 += 0x43;
			}

		}
	}
	*subbuf = 0x00;

	/* lenのエンコード方式の自動選択 */
	i0 = 0x7fffffff;
	for (z = 0; z < 16; z++) {
		for (ii = 0; ii < 2; ii++) {
			for (j = 0; j < 4; j++) {
				/* 最初にdis_sを算出し、l1bを正確に計算する */
				dis_s = calcdis_s(subbuf0, j);
				subbuf = subbuf0;
				len = 0;
				for (;;) {
					/* "0"-phase (非圧縮フェーズ) */
					srchloglen = get_subbuflen(subbuf, &t, j);
					if (srchloglen == 0)
						break;
					len += calclen_l0a(srchloglen, z & 0x03);
					do {
						subbuf = get_subbuf(subbuf, &t, &d, &l);
						if (t == 0x01) {
							len += 8;
							srchloglen--;
						} else {
							len += 8 * l;
							srchloglen -= l;
						}
					} while (srchloglen);

					/* "1"-phase (圧縮フェーズ) */
					srchloglen = get_subbuflen(subbuf, &t, j);
					if (srchloglen == 0)
						break;
					len += calclen_l0a(srchloglen, z >> 2);
					do {
						subbuf = get_subbuf(subbuf, &t, &d, &l);
						len += calclen_df(d, dis_s);
						if (ii == 0)
							len += calclen_l1a(l - j);
						else
							len += calclen_l1b(l - j);
					} while (--srchloglen);
				}
				if (i0 > len) {
					i0 = len;
					i = j;
					ii0 = ii;
					z0 = z;
				}
			}
		}
	}

	/* disのエンコード方式の自動選択 */
	dis_s = calcdis_s(subbuf0, i);
//	printf("method:l1%c(+%d) = %8d rep-mode:%x ", 'a' + ii0, i, i0, z0);
//	printf("dis_s = %08x\n", dis_s);

	/* エンコード */
	putnum_s8(dis_s);
	putbc(i, 0x2);
	putbc(ii0, 0x1); /* l1a/l1b */
	putbc(z0, 0x2); /* "0"-phase */
	putbc(z0 >> 2, 0x2); /* "1"-phase */

	subbuf = subbuf0;
	j = 0;
	for (;;) {
		/* "0"-phase (非圧縮フェーズ) */
		srchloglen = get_subbuflen(subbuf, &t, i);
		if (srchloglen == 0)
			break;
		putnum_l0a(srchloglen, z0 & 0x03);
		do {
			subbuf = get_subbuf(subbuf, &t, &d, &l);
			if (t == 0x01)
				l = 1;
			do {
				putbc(buf[j], 0x80);
				j++;
				srchloglen--;
				l--;
			} while (l);
		} while (srchloglen);

		/* "1"-phase (圧縮フェーズ) */
		srchloglen = get_subbuflen(subbuf, &t, i);
		if (srchloglen == 0)
			break;
		putnum_l0a(srchloglen, z0 >> 2);
		do {
			subbuf = get_subbuf(subbuf, &t, &d, &l);
			putnum_df(d, dis_s);
			if (ii0 == 0)
				putnum_l1a(l - i);
			else
				putnum_l1b(l - i);
			j += l;
		} while (--srchloglen);
	}

	flushb0();
	free(subbuf0);

	return k;
}

const int lzrestore_tek0(unsigned char *buf, int k, int i, int outlimit)
{
	int len, distance, j, z0, z1;
	unsigned int dis_s, l_ofs, method;

	/* ヘッダ読み込み */
	dis_s = getnum_s8();
	l_ofs = getbc(2);
	method = getbc(1); /* l1a/l1b */
	z0 = getbc(2);
	z1 = getbc(2);

//	printf("method:l1%c(+%d) dis_s = %08x z0 = %d z1 = %d\n", 'a' + method, l_ofs, dis_s, z0, z1);

	i = 0;
	for (;;) {
		/* "0"-phase (非圧縮フェーズ) */
		j = getnum_l0a(z0);
		if (j < 0)
			break;
		do {
			len = getbc(8);
			if (len < 0)
				break;
			buf[i++] = len;
		} while (--j);

		/* "1"-phase (圧縮フェーズ) */
		j = getnum_l0a(z1);
		if (j < 0)
			break;
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
				buf[i] = buf[i + distance];
				i++;
			} while (--len);
		} while (--j);
	}
	return i;
}
