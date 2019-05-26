/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

size_t GO_fwrite(const void *ptr, size_t size, size_t nobj, GO_FILE *stream)
{
	int bytes = size * nobj;
	if (bytes >= stream->p1 - stream->p)
		bytes = stream->p1 - stream->p;
	if (bytes < 0)
		bytes = 0;
	if (bytes > 0) {
		/* GOL_debuglog(bytes, ptr); */
		memcpy(stream->p, ptr, bytes);
		stream->p += bytes;
	}
	if ((UINT) bytes != size * nobj)
		abort();
	return bytes;
}
