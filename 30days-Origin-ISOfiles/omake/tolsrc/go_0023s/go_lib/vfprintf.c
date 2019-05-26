/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXBUFSIZ		(64 * 1024)

int GO_vfprintf(GO_FILE *stream, const char *format, va_list arg)
{
	int i;
	char *s = malloc(MAXBUFSIZ);

	i = vsprintf(s, format, arg);
	fputs(s, stream);
	free(s);
	return i;
}
