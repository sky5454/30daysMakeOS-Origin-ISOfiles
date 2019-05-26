#include <stdio.h>

int feof(FILE *stream)
{
	int c;
	if (stream->flags & 0x10)
		return 0;
	if (stream->flags & 0x08)
		return 1;
	c = fgetc(stream);
	if (c == EOF)
		return 1;
//	ungetc(c, stream);
	stream->flags |= 0x10;
	stream->ungetc = c;
	return 0;
}
