/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdlib.h>	/* strtol */
#include <stdio.h>	/* NULL */

int GO_atoi(const char *s)
{
	return (int) strtol(s, (char **) NULL, 10);
}
