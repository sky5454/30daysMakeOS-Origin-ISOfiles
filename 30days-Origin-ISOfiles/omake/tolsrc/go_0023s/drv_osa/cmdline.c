#include "../include/string.h"

UCHAR **ConvCmdLine1(int *pargc, UCHAR *p)
{
	int argc = 0, i;
	UCHAR *q, *q0, **argv;
	q = q0 = GOL_sysmalloc(strlen((char *) p) + 1);
	do {
		while ((*q++ = *p++) > ' ');
		argc++;
		p--;
		*(q - 1) = '\0';
		while ('\0' < *p && *p <= ' ')
			p++;
	} while (*p);
	argv = GOL_sysmalloc((argc + 1) * sizeof (char *));
	argv[0] = q = q0;
	i = 1;
	while (i < argc) {
		while (*q++);
		argv[i++] = q;
	}
	argv[i] = NULL;
	*pargc = argc;
	return argv;
}
