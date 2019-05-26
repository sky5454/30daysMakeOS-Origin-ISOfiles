#include "windows.h"
#if (!defined(NULL))
	#define NULL	0
#endif

void doscmd(char *cmdlin)
{
	STARTUPINFO start_info;
	PROCESS_INFORMATION proc_info;
	unsigned char *p = GetCommandLineA(), *q, *r, *s, c, d;
	int i;
	for (q = "cmd.exe     /C ", s = cmdlin; (*s++ = *q++) != 0; );
	for (q = p; *q > ' '; q++);
	r = q;
	while ('\0' < *q && *q <= ' ')
		q++;
	s--;
	if (q[0] == '-' && q[1] == '-') {
		q += 2;
	} else {
		while (r > p && r[-1] != '/' && r[-1] != '\\' && r[-1] != ':')
			r--;
		for (c = 0, i &= 0; i < 6; i++) {
			d = r[i];
			if ('A' <= d && d <= 'Z')
				d += 'a' - 'A';
			c |= d ^ "doscmd"[i];
		}
		i += -3 - 6; /* i = -3; */
		if (c == 0)
			goto fin;
		while (*r > ' ' && *r != '.')
			*s++ = *r++;
		*s++ = ' ';
	}
	while ((*s++ = *q++) != 0);
	for (i &= 0; i < sizeof (STARTUPINFO); i++)
		((char *) &start_info)[i] = 0;
retry:
	if (CreateProcessA(NULL, cmdlin, NULL, NULL, 1, 0, NULL, NULL, &start_info, &proc_info) == 0) {
		if (*cmdlin == 'c') {
			for (q = "COMMAND.COM", s = cmdlin; *q != 0; *s++ = *q++);
			goto retry;
		}
		i |= -1;
		goto fin;
	}
	CloseHandle(proc_info.hThread);
	WaitForSingleObject(proc_info.hProcess, 0xffffffff);
	if (GetExitCodeProcess(proc_info.hProcess, &i) == 0)
		i = -2;
	CloseHandle(proc_info.hProcess);
fin:
	ExitProcess(i);
}

void mainCRTStartup(void)
{
	char buf[4096 - 256];
	doscmd(buf);
}
