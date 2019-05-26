/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>

int GO_feof(GO_FILE *stream)
{
	return stream->p >= stream->p1;
}
