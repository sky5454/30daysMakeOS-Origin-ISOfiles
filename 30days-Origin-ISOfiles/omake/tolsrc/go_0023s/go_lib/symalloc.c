/* copyright(C) 2002 H.Kawai (under KL-01). */

#include "GO_lib.h"

struct GOL_STR_MEMMAN GOL_sysman;

void *GOL_sysmalloc(size_t size)
{
	void *p;
	if ((p = GOL_memmanalloc(&GOL_sysman, size)) == NULL)
		GOL_sysabort(GO_TERM_SYSRESOVER);
	return p;
}

void GOL_sysfree(void *p)
{
	GOL_memmanfree(&GOL_sysman, p);
	return;
}
