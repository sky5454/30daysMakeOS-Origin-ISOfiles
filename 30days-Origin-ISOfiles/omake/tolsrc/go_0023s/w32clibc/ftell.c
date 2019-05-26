#include "windows.h"
#include <stdio.h>

int ftell(FILE *stream)
{
	int p = SetFilePointer(stream->handle, 0, NULL, FILE_CURRENT);
	if (stream->flags & 0x10)
		p--;
	return p;
}
