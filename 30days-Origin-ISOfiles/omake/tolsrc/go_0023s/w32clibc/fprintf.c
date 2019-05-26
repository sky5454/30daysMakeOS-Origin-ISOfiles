#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int fprintf(FILE *stream, const char *format, ...)
{
	int i;
	va_list ap;
	va_start(ap, format);
	i = vfprintf(stream, format, ap);
	va_end(ap);
	return i;
}
