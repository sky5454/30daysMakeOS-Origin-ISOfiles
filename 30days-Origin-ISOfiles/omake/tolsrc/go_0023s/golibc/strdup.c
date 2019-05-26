/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdlib.h>
#include <string.h>

char *strdup(const char *cs)
{
	char *t = malloc(strlen(cs) + 1);
	if (t)
		strcpy(t, cs);
	return t;
}
