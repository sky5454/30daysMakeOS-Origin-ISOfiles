#include <stdio.h>
#include <string.h>

int fputs(const char *s, FILE *stream)
{
	unsigned int l = strlen(s);
	if (fwrite(s, 1, l, stream) == l)
		return 0;
	return EOF;
}
