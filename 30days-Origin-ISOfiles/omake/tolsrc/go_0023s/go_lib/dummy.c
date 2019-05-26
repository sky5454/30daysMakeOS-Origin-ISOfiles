/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>

void GO_exit(int status)
{
	fputs("GO_exit:mikan-trap!\n", stderr);
	GOL_sysabort(GO_TERM_BUGTRAP);
}

int	GO_atexit(void (*fcn)(void))
{
	fputs("GO_atexit:mikan-trap!\n", stderr);
	GOL_sysabort(GO_TERM_BUGTRAP);
}

double GO_strtod(const char *s, char **endp)
{
	fputs("GO_strtod:mikan-trap!\n", stderr);
	GOL_sysabort(GO_TERM_BUGTRAP);
}

int GO_sscanf(char *s, const char *format, ...)
{
	fputs("GO_sscanf:mikan-trap!\n", stderr);
	GOL_sysabort(GO_TERM_BUGTRAP);
}

int GO_fscanf(GO_FILE *stream, const char *format, ...)
{
	fputs("GO_fscanf:mikan-trap!\n", stderr);
	GOL_sysabort(GO_TERM_BUGTRAP);
}

const void *GO_bsearch(const void *key, const void *base,
	size_t n, size_t size, 
	int (*cmp)(const void *keyval, const void *datum))
{
	/* 全然バイナリサーチになってない */
	size_t i;
	for (i = 0; i < n; i++) {
		if ((*cmp)(key, base) == 0)
			return base;
		base = (void *) (((char *) base) + size);
	}
	return NULL;
}

int GO_system(const char *s)
{
	fputs("GO_system:", stderr);
	fputs(s, stderr);
	fputs("\n", stderr);
	GOL_sysabort(GO_TERM_BUGTRAP);
}
