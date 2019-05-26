#include "windows.h"

typedef unsigned char UCHAR;

typedef struct GO_STR_FILE {
	UCHAR *p0, *p1, *p;
	int dummy;
} GO_FILE;

extern GO_FILE GO_stdin, GO_stdout, GO_stderr;

void GOL_callmain(int argc, UCHAR **argv);
unsigned int GO_strlen(UCHAR *s);
void *GOL_sysmalloc(unsigned int size);

void GOL_callmain0()
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
	GOL_callmain(argc, argv);
}

#include "others.h"
#include "wfile_b.c"
#include "others.c"
#include "../funcs/cc1sub.c"

extern UCHAR *GOL_work0;

static int writefile(const UCHAR *name, const UCHAR *p0, const UCHAR *p1)
{
	UCHAR *q, c;
	int len;
	q = GOL_work0;
	while (p0 < p1) {
		c = *p0++;
		if (c == '\n')
			*q++ = '\r';
		if (c == '\r') {
			if (p0 < p1 && *p0 == '\n') {
				*q++ = '\r';
				c = '\n';
				p0++;
			}
		}
		*q++ = c;
	}
	return GOLD_write_b(name, q - GOL_work0, GOL_work0);
}

void GOL_sysabort(UCHAR termcode)
{
	static const UCHAR *termmsg[] = {
		"",
		"[TERM_WORKOVER]\n",
		"[TERM_OUTOVER]\n",
		"[TERM_ERROVER]\n",
		"[TERM_BUGTRAP]\n",
		"[TERM_SYSRESOVER]\n",
		"[TERM_ABORT]\n"
	};
	GO_stderr.p1 += 128; /* 予備に取っておいた分を復活 */
	/* バッファを出力 */
	if (writefile(GOL_outname, GO_stdout.p0, GO_stdout.p)) {
		GO_fputs("GOL_sysabort:output error!\n", &GO_stderr);
		termcode = 6;
	}
	if (termcode <= 6)
		GO_fputs(termmsg[termcode], &GO_stderr);
	if (GO_stderr.p > GO_stderr.p0)
		writefile(NULL, GO_stderr.p0, GO_stderr.p);
	GOLD_exit((termcode == 0) ? GOL_retcode : 1);
}
