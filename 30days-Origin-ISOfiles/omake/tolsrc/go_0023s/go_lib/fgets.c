/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>

char *GO_fgets(char *s, int n, GO_FILE *stream)
{
	char *r = s;
	if (stream->p >= stream->p1)
		r = NULL;
	if (--n <= 0)
		r = NULL;
	if (r != NULL) {
		do {
			if ((*s++ = *stream->p++) == '\n')
				break;
			if (stream->p >= stream->p1)
				break;
		} while (--n);
		*s = '\0';
	}
	return r;
}
