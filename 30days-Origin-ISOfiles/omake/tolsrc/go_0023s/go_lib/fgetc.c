/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>

int GO_fgetc(GO_FILE *stream)
{
	int c = EOF;
	if (stream->p < stream->p1)
		c = *stream->p++;
	return c;
}
