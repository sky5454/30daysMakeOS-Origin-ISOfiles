#include "windows.h"

/* コンパクトではあるが、遅い */

void free(void *p)
{
	HeapFree(GetProcessHeap(), 0, p);
	return;
}
