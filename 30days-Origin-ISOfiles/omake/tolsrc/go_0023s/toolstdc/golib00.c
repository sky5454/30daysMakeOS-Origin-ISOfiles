/* "golib00.c":golib00wを標準ライブラリ仕様にしたもの */
/* copyright(C) 2003 川合秀実  KL-01 */

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char UCHAR;

#define NL			"\n"

struct str_obj {
	UCHAR *name;
	UCHAR *file0, *file1;
	int ofs;
};

struct str_label {
	UCHAR *s0;
	UCHAR *s1; /* point to '\0' */
	struct str_obj *obj;
};

struct stack_alloc {
	struct str_label label[32 * 1024];
	struct str_obj objs[16 * 1024];
	UCHAR filebuf[8 * 1024 * 1024];
	UCHAR iobuf[8 * 1024 * 1024];
	UCHAR for_align[16];
};

struct str_works {
	struct str_label *label0, *label1, *label;
	struct str_obj *objs0, *objs1, *objs;
	UCHAR *filebuf0, *filebuf1, *filebuf;
	UCHAR *iobuf0, *iobuf1;
	UCHAR *libname, *extname;
	int flags;
};

static void cmdline0(UCHAR *s0, UCHAR *s1, struct str_works *work);
static void libout(struct str_works *work);
unsigned int GO_strlen(const UCHAR *s);

#include "../drv_stdc/others.h"

int main(int argc, UCHAR **argv)
{
	struct stack_alloc *pwork;
	struct str_works works;
	UCHAR *p0;
	int i;

	pwork = (struct stack_alloc *) malloc(sizeof (struct stack_alloc));
	works.label = works.label0 = pwork->label;
	works.label1 = &pwork->label[sizeof (pwork->label) / sizeof(*pwork->label)];
	works.objs = works.objs0 = pwork->objs;
	works.objs1 = &pwork->objs[sizeof (pwork->objs) / sizeof(*pwork->objs)];
	works.filebuf = works.filebuf0 = pwork->filebuf;
	works.filebuf1 = &pwork->filebuf[sizeof (pwork->filebuf) / sizeof(*pwork->filebuf)];
	works.iobuf0 = pwork->iobuf;
	works.iobuf1 = &pwork->iobuf[sizeof (pwork->iobuf) / sizeof(*pwork->iobuf)];
	works.libname = works.extname = NULL;
	works.flags = 0;

	for (i = 1; i < argc; i++) {
		p0 = argv[i];
		cmdline0(p0, p0 + GO_strlen(p0), &works);
	}
	libout(&works);

	return 0;
}

#include "../drv_stdc/msgout_c.c"
#include "../drv_stdc/wfile_b.c"
#include "../drv_stdc/wfile_t.c"
#include "../funcs/gostrlen.c"
#include "../funcs/m_golib.c"
