/* "sjisconv"
	Copyright(C) 2003 H.Kawai

	usage : >sjisconv [-e] [-s] input-file output-file

	-s:ShiftJISƒ‚[ƒh
*/

#include "../drv_w32/windows.h"

typedef unsigned char UCHAR;

#define	NL			"\r\n"

#define FLAG_E		0
#define FLAG_S		1

struct STR_FLAGS {
	UCHAR opt[3];
};

struct stack_alloc {
	UCHAR ibuf[8 * 1024 * 1024];
	UCHAR filename[1000];
	UCHAR obuf[8 * 1024 * 1024];
	UCHAR for_align[16];
};

UCHAR *readfile(UCHAR *name, UCHAR *b0, UCHAR *b1);
unsigned int GO_strlen(const UCHAR *s);
void errout(UCHAR *s);
void errout_s_NL(UCHAR *s, UCHAR *t);
static UCHAR *convmain(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, struct STR_FLAGS flags);

#include "../drv_w32/others.h"

void mainCRTStartup(void)
{
	struct stack_alloc work_image, *pwork;
	UCHAR *p0, *f, *src1, i = 0;
	struct STR_FLAGS flags;

	pwork = (struct stack_alloc *) ((((int) &work_image) + 0x0f) & ~0x0f);

	flags.opt[FLAG_E] = flags.opt[FLAG_S] = 0;

	p0 = GetCommandLineA();
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
				if (*p0 == 's')
					flags.opt[FLAG_S] = 1;
				if (*p0 == 'e')
					flags.opt[FLAG_E] = 1;
			} while (*p0 > ' ');
			continue;
		}
		f = pwork->filename;
		do {
			*f++ = *p0++;
		} while (*p0 > ' ');
		*f = '\0';
		if (i == 0)
			src1 = readfile(pwork->filename, pwork->ibuf, pwork->ibuf + sizeof (pwork->ibuf));
		i++;
	}
	if (i != 2) {
		errout("\"sjisconv\"  Copyright(C) 2003 H.Kawai" NL
			"usage : >sjisconv [-e] [-s] input-file output-file" NL
		);
	}
	src1 = convmain(pwork->ibuf, src1, pwork->obuf, pwork->obuf + sizeof (pwork->obuf), flags);
	if (src1 == NULL)
		errout("output filebuf over!" NL);
	if (GOLD_write_t(pwork->filename, src1 - pwork->obuf, pwork->obuf))
		errout_s_NL("can't write file: ", pwork->filename);

	GOLD_exit(0);
}

#include "../drv_w32/msgout_c.c"
#include "../drv_w32/wfile_b.c" /* write_t‚Íwrite_b‚ð‚Â‚©‚¤‚©‚ç */
#include "../funcs/gostrlen.c"
#include "../funcs/m_sjiscv.c"
