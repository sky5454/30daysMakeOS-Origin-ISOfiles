#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int printf(const char *format, ...)
{
	int i;
	va_list ap;
	va_start(ap, format);
	i = vfprintf(stdout, format, ap);
	va_end(ap);
	return i;
}
