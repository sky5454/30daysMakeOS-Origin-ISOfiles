/* "sjisconv"
	Copyright(C) 2003 H.Kawai

	usage : >sjisconv [-e] [-s] input-file output-file

	-s:ShiftJISÉÇÅ[Éh
*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char UCHAR;

#define NL			"\n"

#define FLAG_E		0
#define FLAG_S		1

struct STR_FLAGS {
	UCHAR opt[3];
};

struct stack_alloc {
	UCHAR ibuf[8 * 1024 * 1024];	
	UCHAR obuf[8 * 1024 * 1024];
//	UCHAR for_align[16];
};

UCHAR *readfile(UCHAR *name, UCHAR *b0, UCHAR *b1);
unsigned int GO_strlen(const UCHAR *s);
void errout(UCHAR *s);
void errout_s_NL(UCHAR *s, UCHAR *t);
static UCHAR *convmain(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, struct STR_FLAGS flags);

#include "../drv_stdc/others.h"

int main(int argc, UCHAR **argv)
{
	struct stack_alloc *pwork;
	UCHAR *p0, *filename, *src1, i = 0;
	struct STR_FLAGS flags;

	pwork = (struct stack_alloc *) malloc(sizeof (struct stack_alloc));

	flags.opt[FLAG_E] = flags.opt[FLAG_S] = 0;

	while (--argc) {
		p0 = *++argv;
		if (*p0 == '-') {
			do {
				p0++;
				if (*p0 == 's')
					flags.opt[FLAG_S] = 1;
			} while (*p0 > ' ');
		} else {
			filename = p0;
			if (i == 0)
				src1 = readfile(filename, pwork->ibuf, pwork->ibuf + sizeof (pwork->ibuf));
			i++;
		}
	};
	if (i != 2) {
		errout("\"sjisconv\"  Copyright(C) 2003 H.Kawai" NL
			"usage : >sjisconv [-e] [-s] input-file output-file" NL
		);
	}
	src1 = convmain(pwork->ibuf, src1, pwork->obuf, pwork->obuf + sizeof (pwork->obuf), flags);
	if (src1 == NULL)
		errout("output filebuf over!" NL);
	if (GOLD_write_t(filename, src1 - pwork->obuf, pwork->obuf))
		errout_s_NL("can't write file: ", filename);

	return 0;
}

#include "../drv_stdc/msgout_c.c"
#include "../drv_stdc/wfile_t.c"
#include "../funcs/gostrlen.c"
#include "../funcs/m_sjiscv.c"
