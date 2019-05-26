/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>

int GO_fclose(GO_FILE *stream)
{
	if (stream) {
		if (stream->dummy != ~0) {
			GOL_close((GOL_FILE *) stream->dummy);
			GOL_sysfree(stream);
ret0:
			return 0;
		}
		if (stream == stdout)
			goto ret0;
		if (stream == stderr)
			goto ret0;
	}
	return EOF;
}
