/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>

int GO_fseek(GO_FILE *stream, long offset, int origin)
{
	UCHAR *p = NULL;
	if (origin == SEEK_SET)
		p = stream->p0 + offset;
	if (origin == SEEK_CUR)
		p = stream->p + offset;
	if (origin == SEEK_END)
		p = stream->p1 + offset;
	if (stream->p0 <= p && p <= stream->p1) {
		stream->p = p;
		return 0;
	}
	return EOF;
}
