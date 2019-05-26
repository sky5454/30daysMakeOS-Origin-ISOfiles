/* "naskcnv0"
	Copyright(C) 2003 H.Kawai

	usage : >naskcnv0 [-l] [-s] [-w] input-file output-file

	-l:leaをmovに変換
	-s:余計なdword、word、byteを削除
*/

#include "../drv_w32/windows.h"
#include "../include/string.h"

#define	NL			"\r\n"
#define	LEN_NL		2

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
	UCHAR filename[1000];
	UCHAR obuf[8 * 1024 * 1024];
	UCHAR for_align[16];
};

UCHAR *readfile(UCHAR *name, UCHAR *b0, UCHAR *b1);
static void errout(UCHAR *s);
static void errout_s_NL(UCHAR *s, UCHAR *t);
static UCHAR *convmain(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, struct STR_FLAGS flags);

#include "../drv_w32/others.h"

void mainCRTStartup(void)
{
	struct stack_alloc *pwork;
	UCHAR *p0, *f, *src1, i = 0;
	struct STR_FLAGS flags;
	struct stack_alloc work_image;
	int j;

	pwork = (struct stack_alloc *) ((((int) &work_image) + 0x0f) & ~0x0f);

	for (j = 0; j < 3; j++)
		flags.opt[j] = 0;

	p0 = GetCommandLineA();
	while (*p0 > ' ')
		p0++;
	for (;;) {
		while (*p0 != '\0' && *p0 <= ' ')
			p0++;
		if (*p0 == '\0')
			break;
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
			continue;
		}
		f = pwork->filename;
		do {
			*f++ = *p0++;
		} while (*p0 > ' ');
		*f = '\0';
		if (i == 0)
			src1 = readfile(pwork->filename, pwork->ibuf, pwork->ibuf + sizeof (pwork->ibuf));
		i++;
	}
	if (i != 2) {
		errout("\"naskcnv0\"  Copyright(C) 2003 H.Kawai" NL
			"usage : >naskcnv0 [-l] [-s] [-w] input-file output-file" NL
		);
	}
	src1 = convmain(pwork->ibuf, src1, pwork->obuf, pwork->obuf + sizeof (pwork->obuf), flags);
	if (src1 == NULL)
		errout("output filebuf over!" NL);
	if (GOLD_write_t(pwork->filename, src1 - pwork->obuf, pwork->obuf))
		errout_s_NL("can't write file: ", pwork->filename);

//	GOLD_exit(errflag);
	GOLD_exit(0);
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

#include "../drv_w32/msgout_c.c"
#include "../drv_w32/wfile_b.c"	/* write_tがつかうから */
#include "../funcs/m_naskcv.c"
