#include "windows.h"

int exit(int status)
{
	ExitProcess(status);
}
