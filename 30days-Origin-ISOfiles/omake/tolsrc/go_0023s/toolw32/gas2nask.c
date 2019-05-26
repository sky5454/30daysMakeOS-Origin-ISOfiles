/* "gas2nask"
	Copyright(C) 2004 H.Kawai

	usage : >gas2nask [-a] [-e] input-file output-file

	-a:.textのbalign2を削除
	-e:execcmd系のインライン展開
*/

#include "../drv_w32/windows.h"

typedef unsigned char UCHAR;
typedef unsigned int UINT;

static UCHAR *dest0_, *dest1_;

#define FLAG_t		0
#define FLAG_d		1
#define FLAG_b		2
#define FLAG_T		3
#define FLAG_D		4
#define FLAG_B		5
#define FLAG_a		6
#define FLAG_e		7

#define	NL			"\r\n"
#define	LEN_NL		2

struct STR_FLAGS {
	UCHAR opt[8];
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
unsigned int GO_strlen(const UCHAR *s);

#include "../drv_w32/others.h"

static char errflag = 0;

static UCHAR *param_p[6];

void mainCRTStartup(void)
{
	struct stack_alloc *pwork;
	UCHAR *p0, *f, *src1, i = 0;
	struct STR_FLAGS flags;
	struct stack_alloc work_image;
	int j;

	pwork = (struct stack_alloc *) ((((int) &work_image) + 0x0f) & ~0x0f);

	for (j = 0; j < 8; j++)
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
				if (*p0 == 'a')
					flags.opt[FLAG_a] = 1;
				if (*p0 == 'e')
					flags.opt[FLAG_e] = 1;
				if (*p0 == 'd') {
					j = FLAG_d;
	getparam:
					do {
						p0++;
					} while (*p0 != '\0' && *p0 <= ' ');
					param_p[j] = p0;
					while ('0' <= *p0 && *p0 <= '9')
						p0++;
					flags.opt[j] = p0 - param_p[j];
					p0--; /* 次のループのため */
				}
				if (*p0 == 'b') {
					j = FLAG_b;
					goto getparam;
				}
				if (*p0 == 't') {
					j = FLAG_t;
					goto getparam;
				}
				if (*p0 == 'D') {
					j = FLAG_D;
					goto getparam;
				}
				if (*p0 == 'B') {
					j = FLAG_B;
					goto getparam;
				}
				if (*p0 == 'T') {
					j = FLAG_T;
					goto getparam;
				}
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
		errout("\"gas2nask\"  Copyright(C) 2004 H.Kawai" NL
			"usage : >gas2nask [-a] [-e] input-file output-file" NL
		);
	}
	src1 = convmain(pwork->ibuf, src1, pwork->obuf, pwork->obuf + sizeof (pwork->obuf), flags);
	if (src1 == NULL)
		errout("output filebuf over!" NL);
	if (GOLD_write_t(pwork->filename, src1 - pwork->obuf, pwork->obuf))
		errout_s_NL("can't write file: ", pwork->filename);

	GOLD_exit(errflag);
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

void msgout0(int len, UCHAR *s)
{
	GOLD_write_t(NULL, len, s);
	return;
}

#include "../drv_w32/msgout_c.c"
#include "../drv_w32/wfile_b.c"	/* write_tがつかうから */
#include "../funcs/gostrlen.c"
#include "../funcs/m_gasnas.c"
