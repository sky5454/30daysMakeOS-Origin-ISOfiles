#include <stdio.h>

int puts(const char *s)
{
	if (fputs(s, stdout) < 0)
		goto err;
	if (fputs("\n", stdout) < 0)
		goto err;
	return 0;
err:
	return EOF;
}
