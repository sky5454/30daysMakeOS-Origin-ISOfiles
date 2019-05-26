#include <stdio.h>

char *gets(char *s)
{
	char *s0 = s;
	int c;
	if (feof(stdin)) {
		*s = '\0';
		return NULL;
	}
	for (;;) {
		c = fgetc(stdin);
		if (c == EOF)
			break;
		if (c == '\n')
			break;
		*s++ = c;
	}
	*s = '\0';
	return s0;
}
