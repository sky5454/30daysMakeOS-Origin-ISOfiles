#include "windows.h"
#include <stdio.h>

int fflush(FILE *stream)
{
	return FlushFileBuffers(stream->handle) ? 0 : EOF;
}
