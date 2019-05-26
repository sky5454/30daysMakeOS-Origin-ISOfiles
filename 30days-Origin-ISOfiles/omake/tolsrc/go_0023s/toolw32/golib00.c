/* "golib00.c":golib00wを標準ライブラリ仕様にしたもの */
/* copyright(C) 2003 川合秀実  KL-01 */

#include "../drv_w32/windows.h"

typedef unsigned char UCHAR;

#define NL			"\r\n"

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

static void cmdline(UCHAR *s0, UCHAR *s1, struct str_works *work);
static void libout(struct str_works *work);
unsigned int GO_strlen(const UCHAR *s);

#include "../drv_w32/others.h"

void mainCRTStartup(void)
{
	struct stack_alloc *pwork, work_image;
	struct str_works works;
	UCHAR *p0;
	int i;

	pwork = (struct stack_alloc *) ((((int) &work_image) + 0x0f) & ~0x0f);
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

	p0 = GetCommandLineA();
	while (*p0 > ' ')
		p0++;
	cmdline(p0, p0 + GO_strlen(p0), &works);
	libout(&works);

	GOLD_exit(0);
}

#include "../drv_w32/msgout_c.c"
#include "../drv_w32/wfile_b.c"
#include "../funcs/gostrlen.c"
#include "../funcs/m_golib.c"
