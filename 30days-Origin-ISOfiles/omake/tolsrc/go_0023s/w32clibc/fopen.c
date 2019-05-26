#include "windows.h"
#include <stdio.h>
#include <stdlib.h>

/* •s³‚Èmode‚ª—ˆ‚½ê‡‚Ì“®ì‚Í•ÛØ‚µ‚È‚¢ */

FILE *fopen(const char *filename, const char *mode)
{
	FILE *fp = malloc(sizeof (FILE));
	char mc[2];
	const char *p = &mode[1];
	unsigned int am = 0, cm = 0;
	mc[0] = mode[0];
	mc[1] = 0;
	fp->flags &= 0;
	while (*p != '\0') {
		if (*p == '+')
			mc[1] = 1;
		if (*p == 'b')
			fp->flags |= 1;
		p++;
	}

	if (mc[0] == 'r') {
		if (mc[1] == 0) {
			am = GENERIC_READ;
			cm = OPEN_EXISTING;
		} else {
			am = GENERIC_READ | GENERIC_WRITE;
			cm = OPEN_EXISTING;
		}
	}
	if (mc[0] == 'w') {
		if (mc[1] == 0) {
			am = GENERIC_WRITE;
			cm = CREATE_ALWAYS;
		} else {
			am = GENERIC_READ | GENERIC_WRITE;
			cm = CREATE_ALWAYS;
		}
	}
	if (mc[0] == 'a') {
		if (mc[1] == 0) {
			am = GENERIC_WRITE;
			cm = OPEN_ALWAYS;
		} else {
			am = GENERIC_READ | GENERIC_WRITE;
			cm = OPEN_ALWAYS;
		}
	}
	if (am == 0)
		goto err;
	fp->handle = CreateFileA(filename, am, 0, NULL, cm, FILE_ATTRIBUTE_NORMAL, 0);
	if (fp->handle == INVALID_HANDLE_VALUE)
		goto err;
	if (mc[0] == 'a') {
		if (SetFilePointer(fp->handle, 0, NULL, FILE_END) == 0xffffffff) {
err:
			free(fp);
			return NULL;
		}
	}
	return fp;
}
