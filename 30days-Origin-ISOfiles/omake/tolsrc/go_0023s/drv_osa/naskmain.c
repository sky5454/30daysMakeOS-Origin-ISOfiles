/* copyright(C) 2003 H.Kawai (under KL-01). */

#include "../include/stdio.h"
#include "../include/stdlib.h"
#include "../include/setjmp.h"

#define SIZ_WORK			(768 * 1024)
#define SIZ_SYSWRK			(4 * 1024)

extern GO_FILE GO_stdin, GO_stdout, GO_stderr;
extern struct GOL_STR_MEMMAN GOL_memman, GOL_sysman;
extern int GOL_abortcode;
extern jmp_buf setjmp_env;

struct STR_NASKMAIN {
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *listname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *list0, *list1; /* 出力ファイル(list0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

static int main0(int argc, UCHAR **argv, UCHAR *tmp0, struct STR_NASKMAIN *params);
void GOL_sysabort(unsigned char termcode);
void *GOL_memmaninit(struct GOL_STR_MEMMAN *man, size_t size, void *p);
void *GOL_sysmalloc(size_t size);
UCHAR **ConvCmdLine1(int *pargc, UCHAR *p);
UCHAR *osain(UCHAR *f, int *size);

extern int nask_LABELBUFSIZ;
extern int nask_L_LABEL0;
extern int nask_maxlabels;

int naskmain(struct STR_NASKMAIN *params)
{
//	static char execflag = 0;
	int argc;
	UCHAR **argv, *tmp0;
	UCHAR **argv1, **p;
	GO_stdout.p0 = GO_stdout.p = params->err0;
	GO_stdout.p1 = GO_stdout.p0; /* stdoutはない */
	GO_stdout.dummy = ~0;
	GO_stderr.p0 = GO_stderr.p = params->err0;
	GO_stderr.p1 = params->err1;
	GO_stderr.dummy = ~0;

	/* 多重実行阻止 (staticを再初期化すればできるが) */
//	if (execflag)
//		return 7;
//	execflag = 1;

	nask_LABELBUFSIZ = 64 * 1024; /* ラベル文字列の合計 */
	nask_L_LABEL0 = 1024; /* externは1000個ほど */
	nask_maxlabels = 4 * 1024; /* 88*4k */

	if (setjmp(setjmp_env)) {
		params->err0 = GO_stderr.p;
		return GOL_abortcode;
	}

	if (params->work1 - params->work0 < SIZ_SYSWRK + SIZ_WORK + 16 * 1024)
		return GO_TERM_WORKOVER;
	GOL_memmaninit(&GOL_sysman, SIZ_SYSWRK, params->work0);
	GOL_memmaninit(&GOL_memman, SIZ_WORK, params->work0 + SIZ_SYSWRK);
	tmp0 = params->work0 + (SIZ_SYSWRK + SIZ_WORK);
	argv = ConvCmdLine1(&argc, params->cmdlin);
	params->errcode = main0(argc, argv, tmp0, params);
skip:
	/* バッファを出力 */
	GOL_sysabort(0);
}

UCHAR *nask(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1);
UCHAR *LL(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1);
UCHAR *output(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, UCHAR *list0, UCHAR *list1);

int nask_errors = 0;

static int main0(int argc, UCHAR **argv, UCHAR *tmp0, struct STR_NASKMAIN *params)
{
	UCHAR *src0, *src1, *dest1;
	UCHAR *tmp1, *list1;
	int size;

	if (argc < 2 || argc > 4) {
		fprintf(stderr, "usage : NASK source [object/binary] [list]\n");
		return 16;
	}
	src0 = osain(argv[1], &size);
	if (src0 == NULL) {
		fprintf(stderr, "NASK : can't open %s\n", argv[1]);
		return 17;
	}
	src1 = src0 + size;

	list1 = nask(src0, src1, params->list0, params->list1);
	if (list1 == NULL) {
over_listbuf:
		fprintf(stderr, "NASK : LSTBUF is not enough\n");
		return 19;
	}

	tmp1 = LL(params->list0, list1, tmp0, params->work1);
	if (tmp1 == NULL) {
over_tmpbuf:
		fprintf(stderr, "NASK : TMPBUF is not enough\n");
		return 19;
	}

	dest1 = output(tmp0, tmp1, params->dest0, params->dest1, params->list0, params->list1 - 2);
	if (dest1 == NULL) {
		fprintf(stderr, "NASK : BINBUF is not enough\n");
		return 19;
	}
	if (argc == 4) {
		params->listname = argv[3];
		while (params->list0 < params->list1 - 2 && *(params->list0) != '\0')
			params->list0++;
	}
	if (argc >= 3) {
		params->outname = argv[2];
		params->dest0 = dest1;
	}
	if (nask_errors) {
		fprintf(stderr, "NASK : %d errors.\n", nask_errors);
		return 1;
	}

	return 0;
}
