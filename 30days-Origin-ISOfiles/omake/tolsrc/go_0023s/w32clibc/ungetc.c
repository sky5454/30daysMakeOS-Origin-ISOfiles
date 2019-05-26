#include <stdio.h>

int ungetc(int c, FILE *stream)
{
	if (stream->flags & 0x10)
		return EOF;
	stream->flags |= 0x10;
	return stream->ungetc = c;
}
