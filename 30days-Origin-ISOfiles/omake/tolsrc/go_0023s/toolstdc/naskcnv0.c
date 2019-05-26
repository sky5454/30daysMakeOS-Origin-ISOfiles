/* "naskcnv0"
	Copyright(C) 2003 H.Kawai

	usage : >naskcnv0 [-l] [-s] [-w] input-file output-file

	-l:leaをmovに変換
	-s:余計なdword、word、byteを削除
*/

#include <stdio.h>
#include <stdlib.h>
char *GO_strstr(const char *cs, const char *ct);
unsigned int GO_strlen(const char *cs);
char *GO_strchr(const char *cs, int c);
#define	strstr(cs, ct)			GO_strstr(cs, ct)
#define strlen(cs)				GO_strlen(cs)
#define strchr(cs, c)			GO_strchr(cs, c)
typedef unsigned char UCHAR;
typedef unsigned int UINT;

#define	NL			"\n"
#define	LEN_NL		1

//	static char errflag = 0;
static UCHAR *dest0_, *dest1_;

#define FLAG_W		0
#define FLAG_L		1
#define FLAG_S		2

struct STR_FLAGS {
	UCHAR opt[3];
};

struct stack_alloc {
	UCHAR ibuf[8 * 1024 * 1024];	
//	UCHAR filename[1000];
	UCHAR obuf[8 * 1024 * 1024];
//	UCHAR for_align[16];
};

UCHAR *readfile(UCHAR *name, UCHAR *b0, UCHAR *b1);
static void errout(UCHAR *s);
static void errout_s_NL(UCHAR *s, UCHAR *t);
static UCHAR *convmain(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, struct STR_FLAGS flags);

#include "../drv_stdc/others.h"

int main(int argc, UCHAR **argv)
{
	struct stack_alloc *pwork;
	UCHAR *p0, *filename, *src1, i = 0;
	struct STR_FLAGS flags;
	int j;

	pwork = (struct stack_alloc *) malloc(sizeof (struct stack_alloc));

	for (j = 0; j < 3; j++)
		flags.opt[j] = 0;

	while (--argc) {
		p0 = *++argv;
		if (*p0 == '-') {
			do {
				p0++;
				if (*p0 == 'w')
					flags.opt[FLAG_W] = 1;
				if (*p0 == 'l')
					flags.opt[FLAG_L] = 1;
				if (*p0 == 's')
					flags.opt[FLAG_S] = 1;
			} while (*p0 > ' ');
		} else {
			filename = p0;
			if (i == 0)
				src1 = readfile(filename, pwork->ibuf, pwork->ibuf + sizeof (pwork->ibuf));
			i++;
		}
	}
	if (i != 2) {
		errout("\"naskcnv0\"  Copyright(C) 2003 H.Kawai" NL
			"usage : >naskcnv0 [-l] [-s] [-w] input-file output-file" NL
		);
	}
	src1 = convmain(pwork->ibuf, src1, pwork->obuf, pwork->obuf + sizeof (pwork->obuf), flags);
	if (src1 == NULL)
		errout("output filebuf over!" NL);
	if (GOLD_write_t(filename, src1 - pwork->obuf, pwork->obuf))
		errout_s_NL("can't write file: ", filename);

//	return errflag;
	return 0;
}

static void output(UINT l, UCHAR *s)
{
	if (l) {
		if (dest0_ + l >= dest1_)
			dest0_ = NULL;
		if (dest0_) {
			do {
				*dest0_++ = *s++;
			} while (--l);
		}
	}
	return;
}

#include "../drv_stdc/msgout_c.c"
#include "../drv_stdc/wfile_t.c"
#include "../funcs/m_naskcv.c"
