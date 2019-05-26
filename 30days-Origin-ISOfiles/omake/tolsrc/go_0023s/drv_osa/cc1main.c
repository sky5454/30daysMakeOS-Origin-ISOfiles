/* copyright(C) 2003 H.Kawai (under KL-01). */

#include "../include/stdio.h"
#include "../include/setjmp.h"

extern GO_FILE GO_stdin, GO_stdout, GO_stderr;
extern struct GOL_STR_MEMMAN GOL_memman, GOL_sysman;
extern int GOL_abortcode;
extern jmp_buf setjmp_env;

int main1(int argc, UCHAR **argv);
void *GOL_memmaninit(struct GOL_STR_MEMMAN *man, size_t size, void *p);
void *GOL_sysmalloc(size_t size);
UCHAR **ConvCmdLine1(int *pargc, UCHAR *p);
void osaunmap();

struct STR_CC1MAIN {
	UCHAR *cmdlin; /* '\0'で終わる */
	UCHAR *outname; /* '\0'で終わる, workのどこかへのポインタ */
	UCHAR *dest0, *dest1; /* 出力ファイル(dest0は書き換えられる) */
	UCHAR *err0, *err1; /* コンソールメッセージ(err0は書き換えられる) */
	UCHAR *work0, *work1;
	int errcode;
};

#define SYSWORK_SIZE		16 * 1024

int cc1main(struct STR_CC1MAIN *str_cc1main)
{
//	static char execflag = 0;
	int argc;
	UCHAR **argv;
	UCHAR **argv1, **p;
	GO_stdout.p0 = GO_stdout.p = str_cc1main->dest0;
	GO_stdout.p1 = str_cc1main->dest1;
	GO_stdout.dummy = ~0;
	GO_stderr.p0 = GO_stderr.p = str_cc1main->err0;
	GO_stderr.p1 = str_cc1main->err1;
	GO_stderr.dummy = ~0;

	/* 多重実行阻止 (staticを再初期化すればできるが) */
//	if (execflag)
//		return 7;
//	execflag = 1;

	if (setjmp(setjmp_env)) {
		str_cc1main->dest0 = GO_stdout.p;
		str_cc1main->err0 = GO_stderr.p;
		return GOL_abortcode;
	}

	if (str_cc1main->work1 - str_cc1main->work0 < SYSWORK_SIZE * 2)
		return GO_TERM_WORKOVER;
	GOL_memmaninit(&GOL_sysman, SYSWORK_SIZE, str_cc1main->work0);
	GOL_memmaninit(&GOL_memman, str_cc1main->work1 - str_cc1main->work0 - SYSWORK_SIZE,
		str_cc1main->work0 + SYSWORK_SIZE);
	argv = ConvCmdLine1(&argc, str_cc1main->cmdlin);
	p = argv1 = GOL_sysmalloc((argc + 1) * sizeof (char *));
	for (;;) {
		if ((*p = *argv) == NULL)
			break;
		if ((*argv)[0] == '-' && (*argv)[1] == 'o') {
			str_cc1main->outname = &((*argv)[2]);
			if ((*argv)[2] == '\0') {
				if (argv[1] != NULL)
					str_cc1main->outname = (argv++)[1];
			}
			p--;  /* delete -o */
		}
		p++;
		argv++;
	}
	str_cc1main->errcode = main1(p - argv1, argv1);
	GOL_sysabort(GO_TERM_NORMAL);
}

void GOL_sysabort(UCHAR termcode)
{
	GOL_abortcode = termcode;
	longjmp(setjmp_env, 1);
}

UCHAR *osain(UCHAR *f, int *size);

GOL_FILE *GOL_open(struct GOL_STR_DIR *dir, const UCHAR *name)
{
	GOL_FILE *gfp;
	UCHAR *fp;
	int size;
	fp = osain(name, &size);
	if (fp == NULL)
		return (GOL_FILE *) ~0;
	gfp = GOL_sysmalloc(sizeof (struct GOL_STR_FILE));
	gfp->size = size;
	gfp->p0 = fp;
	gfp->linkcount = 1;
	return gfp;
}

void GOL_close(GOL_FILE *gfp)
{
	if (--gfp->linkcount == 0) {
		GOL_sysfree(gfp);
		osaunmap();
	}
	return;
}

UCHAR *GOL_stepdir(struct GOL_STR_DIR **dir, const UCHAR *path)
{
	return (UCHAR *) path;
}
