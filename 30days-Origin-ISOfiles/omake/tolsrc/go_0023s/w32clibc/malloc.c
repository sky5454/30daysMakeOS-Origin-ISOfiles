#include "windows.h"

/* コンパクトではあるが、遅い */

void *malloc(unsigned int bytes)
{
	return HeapAlloc(GetProcessHeap(), 0, bytes);
}
