#include <stdlib.h>	/* malloc */

typedef unsigned char UCHAR;

typedef struct GO_STR_FILE {
	UCHAR *p0, *p1, *p;
	int dummy;
} GO_FILE;

extern GO_FILE GO_stdin, GO_stdout, GO_stderr;
extern struct GOL_STR_MEMMAN GOL_memman, GOL_sysman;
UCHAR *GOL_work0;

struct bss_alloc {
	UCHAR _stdout[SIZ_STDOUT];
	UCHAR _stderr[SIZ_STDERR];
	UCHAR syswrk[SIZ_SYSWRK];
	UCHAR work[SIZ_WORK];
};

void GOL_sysabort(UCHAR termcode);
void *GOL_memmaninit(struct GOL_STR_MEMMAN *man, unsigned int size, void *p);
void *GOL_sysmalloc(unsigned int size);
void GOL_callmain(int argc, UCHAR **argv);

int main(int argc, UCHAR **argv)
/* かならず、-oオプションを付ける */
/* ここで、-oオプションは剥ぎ取られる */
/* しかし入力ファイル名は書く(標準入力ではsizeが測定できないため) */
{
	struct bss_alloc *bss0;
	UCHAR **argv1, **p;
	bss0 = (struct bss_alloc *) malloc(sizeof (struct bss_alloc));
	GO_stdout.p0 = GO_stdout.p = bss0->_stdout;
	GO_stdout.p1 = GO_stdout.p0 + SIZ_STDOUT;
	GO_stdout.dummy = ~0;
	GO_stderr.p0 = GO_stderr.p = bss0->_stderr;
	GO_stderr.p1 = GO_stderr.p0 + (SIZ_STDERR - 128); /* わざと少し小さくしておく */
	GO_stderr.dummy = ~0;
	GOL_memmaninit(&GOL_sysman, SIZ_SYSWRK, bss0->syswrk);
	GOL_memmaninit(&GOL_memman, SIZ_WORK, GOL_work0 = bss0->work);
	GOL_callmain(argc, argv);
	return 0; /* ダミー */
}
