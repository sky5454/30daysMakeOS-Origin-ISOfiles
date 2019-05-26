#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int vfprintf(FILE *stream, const char *format, va_list arg)
{
	int i;
	char *s = malloc(4096);
	i = vsprintf(s, format, arg);
	i = fwrite(s, 1, i, stream);
	free(s);
	return i;
}
