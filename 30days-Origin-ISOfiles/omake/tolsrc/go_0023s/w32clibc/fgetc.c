#include <stdio.h>

int fgetc(FILE *stream)
{
	int c;
	if (stream->flags & 0x10) {
		stream->flags &= ~0x10;
		return stream->ungetc;
	}
	if ((stream->flags & 0x08) == 0)
		fread(&c, 1, 1, stream);
	if (stream->flags & 0x08)
		return EOF;
	return c;
}
