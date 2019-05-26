#include <stdio.h>

void rewind(FILE *stream)
{
	fseek(stream, 0, SEEK_SET);
	clearerr(stream);
	return;
}

