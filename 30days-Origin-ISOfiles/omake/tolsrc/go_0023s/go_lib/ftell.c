/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>

long GO_ftell(GO_FILE *stream)
{
	long ret = -1L;
	if (stream->p0 <= stream->p && stream->p <= stream->p1)
		ret = stream->p - stream->p0;
	return ret;
}
