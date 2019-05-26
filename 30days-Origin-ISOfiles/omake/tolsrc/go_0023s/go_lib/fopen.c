/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>
#include <errno.h>

GO_FILE *GO_fopen(const char *filename, const char *mode)
{
	struct GOL_STR_DIR *dir = (struct GOL_STR_DIR *) ~0;
	GO_FILE *fp;
	GOL_FILE *gfp;
	if (*mode == 'w') {
		#if 0
			printf("\n## !GO_OUTNAME! : \"%s\"\n\n", filename);
		#endif
		return stdout;
		#if 0
			fprintf(stderr, "GO_fopen:mikan-trap!(mode:w)\n\"%s\"\n", filename);
			GOL_sysabort(GO_TERM_BUGTRAP);
		#endif
	}
	filename = GOL_stepdir(&dir, filename);
	gfp = GOL_open(dir, filename);
	if (gfp == (GOL_FILE *) ~0) {
		errno = ENOENT;
		return NULL;
	}
	fp = GOL_sysmalloc(sizeof (GO_FILE));
	fp->dummy = (int) gfp;
	fp->p0 = fp->p = gfp->p0;
	fp->p1 = gfp->p0 + gfp->size;
	return fp;
}
