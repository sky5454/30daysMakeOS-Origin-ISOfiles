#include <stdio.h>

char *fgets(char *s, int n, FILE *stream)
{
	char *s0 = s;
	int c;
	if (feof(stream)) {
		*s = '\0';
		return NULL;
	}
	n--;
	if (n > 0) {
		do {
			c = fgetc(stream);
			if (c == EOF)
				break;
			*s++ = c;
			if (c == '\n')
				break;
		} while (--n > 0);
	}
	*s = '\0';
	return s0;
}
