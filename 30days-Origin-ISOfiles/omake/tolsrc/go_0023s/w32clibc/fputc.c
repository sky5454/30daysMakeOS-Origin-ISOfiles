#include <stdio.h>

int fputc(int c, FILE *stream)
{
	return (fwrite(&c, 1, 1, stream) == 1) ? c : EOF;
}
