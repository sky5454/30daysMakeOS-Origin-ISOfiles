#include "windows.h"
#include <string.h>
#include <stdlib.h>

int system(const char *s)
{
	STARTUPINFO start_info;
	PROCESS_INFORMATION proc_info;
	int code, i;
	char *p = NULL;

	memset(&start_info, 0, sizeof (STARTUPINFO));
	start_info.cb = sizeof (STARTUPINFO);
	if (CreateProcessA(NULL, s, NULL, NULL, 1, 0, NULL, NULL, &start_info, &proc_info) == 0) {
		i = strlen(s);
		p = malloc(i + (15 + 1));
		memcpy(p, "COMMAND.COM /C ", 15);
		memcpy(p + 15, s, i + 1);
		if (CreateProcessA(NULL, p, NULL, NULL, 1, 0, NULL, NULL, &start_info, &proc_info) == 0) {
			free(p);
			return -1;
		}
	}
	CloseHandle(proc_info.hThread);
	WaitForSingleObject(proc_info.hProcess, 0xffffffff);
	i = GetExitCodeProcess(proc_info.hProcess, &code);
	CloseHandle(proc_info.hProcess);
	if (i == 0)
		code = -2;
	if (p)
		free(p);
	return code;
}
