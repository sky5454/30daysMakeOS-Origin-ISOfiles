/* copyright(C) 2002 H.Kawai (under KL-01). */

#include "GO_lib.h"

struct GOL_STR_MEMMAN GOL_memman;

void *GO_malloc(size_t size)
{
	void *p;
	if ((p = GOL_memmanalloc(&GOL_memman, size)) == NULL)
		GOL_sysabort(GO_TERM_WORKOVER);
	return p;
}

void GO_free(void *p)
{
	GOL_memmanfree(&GOL_memman, p);
	return;
}
