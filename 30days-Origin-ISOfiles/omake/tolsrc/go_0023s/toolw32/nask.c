/* copyright(C) 2003 H.Kawai (under KL-01). */

#include "../drv_w32/windows.h"

#define SIZ_STDOUT			(16 * 1024)
#define SIZ_STDERR			(16 * 1024)
#define SIZ_WORK			(8 * 1024 * 1024)
#define SIZ_SYSWRK			(1024 * 1024)

#define	MAX_SRCSIZ		(2 * 1024 * 1024)
#define	MAX_TMPSIZ		(4 * 1024 * 1024)
#define	MAX_BINSIZ		(2 * 1024 * 1024)
#define	MAX_LSTSIZ		(4 * 1024 * 1024)

typedef unsigned char UCHAR;

#define	NL			"\r\n"

typedef struct GO_STR_FILE {
	UCHAR *p0, *p1, *p;
	int dummy;
} GO_FILE;

extern GO_FILE GO_stdin, GO_stdout, GO_stderr;
extern struct GOL_STR_MEMMAN GOL_memman, GOL_sysman;
int GOL_retcode;
UCHAR *GOL_work0;

int main1(int argc, UCHAR **argv, UCHAR *src0);
void GOL_sysabort(unsigned char termcode);
void *GOL_memmaninit(struct GOL_STR_MEMMAN *man, unsigned int size, void *p);
void *GOL_sysmalloc(unsigned int size);
UCHAR **ConvCmdLine0(int *pargc);
int GO_strlen(const UCHAR *s);

struct bss_alloc {
	UCHAR _stdout[SIZ_STDOUT];
	UCHAR _stderr[SIZ_STDERR];
	UCHAR syswrk[SIZ_SYSWRK];
	UCHAR work[SIZ_WORK];
	UCHAR work1[MAX_SRCSIZ + MAX_TMPSIZ + MAX_BINSIZ + MAX_LSTSIZ];
};

#include "../drv_w32/others.h"

void mainCRTStartup(void)
{
	struct bss_alloc bss_image;
	struct bss_alloc *bss0 = (void *) ((((int) &bss_image) + 0x0f) & ~0x0f);
	int argc;
	UCHAR **argv;
	GO_stdout.p0 = GO_stdout.p = ((struct bss_alloc *) bss0)->_stdout;
	GO_stdout.p1 = GO_stdout.p0 + SIZ_STDOUT;
	GO_stdout.dummy = ~0;
	GO_stderr.p0 = GO_stderr.p = ((struct bss_alloc *) bss0)->_stderr;
	GO_stderr.p1 = GO_stderr.p0 + SIZ_STDERR;
	GO_stderr.dummy = ~0;
	GOL_memmaninit(&GOL_sysman, SIZ_SYSWRK, ((struct bss_alloc *) bss0)->syswrk);
	GOL_memmaninit(&GOL_memman, SIZ_WORK, GOL_work0 = ((struct bss_alloc *) bss0)->work);
	argv = ConvCmdLine0(&argc);

	GOL_retcode = main1(argc, argv, bss0->work1);
	/* バッファを出力 */
	GOL_sysabort(0);
}

UCHAR **ConvCmdLine0(int *pargc)
{
	int argc = 0, i;
	UCHAR *p = GetCommandLineA(), *q, *q0, **argv;
	q = q0 = GOL_sysmalloc(GO_strlen(p) + 1);
	do {
		while ((*q++ = *p++) > ' ');
		argc++;
		p--;
		*(q - 1) = '\0';
		while ('\0' < *p && *p <= ' ')
			p++;
	} while (*p);
	argv = GOL_sysmalloc((argc + 1) * sizeof (char *));
	argv[0] = q = q0;
	i = 1;
	while (i < argc) {
		while (*q++);
		argv[i++] = q;
	}
	argv[i] = NULL;
	*pargc = argc;
	return argv;
}

#include "../drv_w32/others.c"
#include "../drv_w32/wfile_b.c"
#include "../funcs/nasksub.c"
