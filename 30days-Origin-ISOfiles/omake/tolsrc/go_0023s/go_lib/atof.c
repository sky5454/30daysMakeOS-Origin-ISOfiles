/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdlib.h>	/* strtod */
#include <stdio.h>	/* NULL */

double GO_atof(const char *s)
{
	return strtod(s, (char **) NULL);
}
