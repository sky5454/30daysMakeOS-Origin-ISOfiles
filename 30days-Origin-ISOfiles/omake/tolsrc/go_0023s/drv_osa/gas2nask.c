/* "gas2nask"
	Copyright(C) 2004 H.Kawai

	usage : >gas2nask [-a] [-e] input-file output-file

	-a:.textのbalign2を削除
	-e:execcmd系のインライン展開
*/

#include "../include/string.h"		/* strlen, strstr, strchr */
#include "../include/setjmp.h"

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

struct STR_GAS2NASK {
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

void GOL_sysabort(unsigned char termcode);
UCHAR *osain(UCHAR *f, int *size);
static UCHAR *convmain(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, struct STR_FLAGS flags);
extern int GOL_abortcode;
extern jmp_buf setjmp_env;
static char errflag;

static UCHAR *param_p[6];

#include "others.h"

int gas2nask_main(struct STR_GAS2NASK *params)
{
	UCHAR *p0, *f, *src0, i = 0;
	static UCHAR filename[1000];
	struct STR_FLAGS flags;
	int j, size;
	errflag = 0;
	DRVOSA_errcode = 0;
	msgptr = params->err0;
	msgptr1 = params->err1;
	params->outname = NULL;

	for (j = 0; j < 8; j++)
		flags.opt[j] = 0;

	if (setjmp(setjmp_env)) {
		params->err0 = msgptr;
		params->errcode = DRVOSA_errcode;
		return GOL_abortcode;
	}

	p0 = params->cmdlin;
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
		f = filename;
		do {
			*f++ = *p0++;
		} while (*p0 > ' ');
		*f = '\0';
		if (i == 0) {
			src0 = osain(filename, &size);
			if (src0 == NULL)
				errout_s_NL("can't open file: ", filename);
		}
		i++;
	}
	if (i != 2) {
		errout("\"gas2nask\"  Copyright(C) 2004 H.Kawai" NL
			"usage : >gas2nask [-a] [-e] input-file output-file" NL
		);
	}
	src0 = convmain(src0, src0 + size, params->dest0, params->dest1, flags);
	if (src0 == NULL)
		GOL_sysabort(GO_TERM_OUTOVER);
	params->outname = filename;
	params->dest0 = src0;

	GOLD_exit(errflag);
}

#include "../funcs/m_gasnas.c"
