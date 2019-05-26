#include "windows.h"
#include <stdio.h>

int remove(const char *filename)
{
	return DeleteFileA(filename) ? 0 : EOF; 
}
