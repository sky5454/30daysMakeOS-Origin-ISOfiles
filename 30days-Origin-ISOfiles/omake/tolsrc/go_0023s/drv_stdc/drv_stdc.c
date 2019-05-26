#include <stdio.h> /* fopen, fclose, fread, fwrite, fseek, ftell, NULL */
#include <stdlib.h>	/* exit */

typedef unsigned char UCHAR;

typedef struct GO_STR_FILE {
	UCHAR *p0, *p1, *p;
	int dummy;
} GO_FILE;

extern GO_FILE GO_stdin, GO_stdout, GO_stderr;

#include "others.h"
#include "wfile_t.c"
#include "others.c"
#include "../funcs/cc1sub.c"

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
	if (GO_stdout.p - GO_stdout.p0) {
		if (GOLD_write_t(GOL_outname, GO_stdout.p - GO_stdout.p0, GO_stdout.p0)) {
			GO_fputs("GOL_sysabort:output error!\n", &GO_stderr);
			termcode = 6;
		}
	}
	if (termcode <= 6)
		GO_fputs(termmsg[termcode], &GO_stderr);
	if (GO_stderr.p - GO_stderr.p0)
		GOLD_write_t(NULL, GO_stderr.p - GO_stderr.p0, GO_stderr.p0);
	GOLD_exit((termcode == 0) ? GOL_retcode : 1);
}
