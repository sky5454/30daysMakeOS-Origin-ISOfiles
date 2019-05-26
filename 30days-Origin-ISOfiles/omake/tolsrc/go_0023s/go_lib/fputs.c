/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>
#include <string.h>

int GO_fputs(const char *s, GO_FILE *stream)
{
	unsigned int l = strlen(s);
	fwrite(s, 1, l, stream);
	return l;
}
