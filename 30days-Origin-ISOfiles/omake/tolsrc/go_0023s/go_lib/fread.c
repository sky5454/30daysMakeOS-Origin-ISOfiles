/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t GO_fread(void *ptr, size_t size, size_t nobj, GO_FILE *stream)
{
	int bytes = nobj;
	if (size != 1) {
		fputs("GO_fread:size != 1.\n", stderr);
		abort();
	}
	if (bytes > stream->p1 - stream->p)
		bytes = stream->p1 - stream->p;
	if (bytes < 0)
		bytes = 0;
	if (bytes > 0) {
		memcpy(ptr, stream->p, bytes);
		stream->p += bytes;
	}
	return bytes;
}
