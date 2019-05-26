#include "windows.h"
#include <stdio.h>
#include <stdlib.h>

int fclose(FILE *stream)
{
	if (stream == NULL)
		return EOF; /* オールクローズはまだサポートしてない */
	if (CloseHandle(stream->handle) == 0)
		return EOF;
	free(stream);
	return 0;
}
