/* "sjisconv"
	Copyright(C) 2003 H.Kawai

	usage : >sjisconv [-e] [-s] input-file output-file

	-s:ShiftJISモード
*/

#include "../include/string.h"		/* strlen, strstr, strchr */
#include "../include/setjmp.h"

#define FLAG_E		0
#define FLAG_S		1

#define	NL			"\r\n"
#define	LEN_NL		2

struct STR_FLAGS {
	UCHAR opt[3];
};

struct STR_SJISCONV { /* STR_GAS2NASKとコンパチ */
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

UCHAR *osain(UCHAR *f, int *size);
static UCHAR *convmain(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, struct STR_FLAGS flags);
extern int GOL_abortcode;
extern jmp_buf setjmp_env;
static char errflag;

#include "others.h"

int sjisconv_main(struct STR_SJISCONV *params)
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

	for (j = 0; j < 3; j++)
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
				if (*p0 == 'e')
					flags.opt[FLAG_E] = 1;
				if (*p0 == 's')
					flags.opt[FLAG_S] = 1;
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
		errout("\"sjisconv\"  Copyright(C) 2003 H.Kawai" NL
			"usage : >sjisconv [-e] [-s] input-file output-file" NL
		);
	}
	src0 = convmain(src0, src0 + size, params->dest0, params->dest1, flags);
	if (src0 == NULL)
		GOL_sysabort(GO_TERM_OUTOVER);
	params->outname = filename;
	params->dest0 = src0;

	GOLD_exit(errflag);
}

#include "../funcs/m_sjiscv.c"
