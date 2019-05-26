/* copyright(C) 2003 H.Kawai (under KL-01). */

#include <stdlib.h>	/* strtod */
#include <stdio.h>	/* NULL */

double atof(const char *s)
{
	return strtod(s, (const char **) NULL);
}
