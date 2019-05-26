#include "windows.h"
#include <string.h>	/* strlen */
#include <stdlib.h>	/* malloc */
#include <stdio.h>	/* NULL */

typedef unsigned char UCHAR;

static UCHAR **ConvCmdLine0(int *pargc)
{
	int argc = 0, i;
	UCHAR *p = GetCommandLineA(), *q, *q0, **argv;
	q = q0 = malloc(strlen((char *) p) + 1);
	do {
		if (*p == 0x22) {
			p++; /* 0x22‚ð“Ç‚Ý”ò‚Î‚· */
			do {
				*q++ = *p++;
				if (p[-1] == 0x22 && *p <= ' ') {
					p++;
					break;
				}
			} while (p[-1] != '\0');
		} else
			while ((*q++ = *p++) > ' ');
		argc++;
		p--;
		*(q - 1) = '\0';
		while ('\0' < *p && *p <= ' ')
			p++;
	} while (*p);
	argv = malloc((argc + 1) * sizeof (char *));
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

int main0(int argc, UCHAR **argv);

void mainCRTStartup()
{
	int argc;
	UCHAR **argv;
	__stdin.handle  = GetStdHandle(STD_INPUT_HANDLE);
	__stdout.handle = GetStdHandle(STD_OUTPUT_HANDLE);
	__stderr.handle = GetStdHandle(STD_ERROR_HANDLE);
	argv = ConvCmdLine0(&argc);
	ExitProcess(main0(argc, argv));
}
