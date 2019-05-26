typedef unsigned int HANDLE, DWORD;
typedef unsigned short WORD;
typedef int BOOL, LONG, *PLONG;
typedef struct _OVERLAPPED {
	DWORD Internal;
	DWORD InternalHigh;
	DWORD Offset;
	DWORD OffsetHigh;
	HANDLE hEvent;
} OVERLAPPED;

typedef struct _STARTUPINFO {
	DWORD cb; /* ç\ë¢ëÃÇÃëÂÇ´Ç≥(=68) */
	char *lpReserved;
	char *lpDesktop, *lpTitle;
	DWORD dwX, dwY;
    DWORD dwXSize, dwYSize;
    DWORD dwXCountChars, dwYCountChars;
    DWORD dwFillAttribute, dwFlags;
    WORD   wShowWindow, cbReserved2;
    unsigned char *lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
} STARTUPINFO, *LPSTARTUPINFO;

typedef struct _PROCESS_INFORMATION {
	HANDLE hProcess, hThread;
	DWORD dwProcessId, dwThreadId;
} PROCESS_INFORMATION, *LPPROCESS_INFORMATION;

#if (!defined(__stdcall))
	#define	__stdcall	__attribute__((__stdcall__))
#endif

#if (!defined(__declspec))
	#define __declspec(x)	__attribute__((x))
#endif

#define STD_INPUT_HANDLE			((HANDLE) 0xfffffff6)
#define STD_OUTPUT_HANDLE			((HANDLE) 0xfffffff5)
#define STD_ERROR_HANDLE			((HANDLE) 0xfffffff4)
#define INVALID_HANDLE_VALUE		((HANDLE) 0xffffffff)
#define GENERIC_READ				0x80000000
#define GENERIC_WRITE				0x40000000
#define FILE_SHARE_READ				1
#define FILE_SHARE_WRITE			2
#define FILE_SHARE_DELETE			4
#define CREATE_NEW					1
#define CREATE_ALWAYS				2
#define OPEN_EXISTING				3
#define OPEN_ALWAYS					4
#define TRUNCATE_EXISTING			5
#define FILE_ATTRIBUTE_ARCHIVE		32
#define FILE_ATTRIBUTE_COMPRESSED	2048
#define FILE_ATTRIBUTE_NORMAL		128
#define FILE_ATTRIBUTE_DIRECTORY	16
#define FILE_ATTRIBUTE_HIDDEN		2
#define FILE_ATTRIBUTE_READONLY		1
#define FILE_ATTRIBUTE_SYSTEM		4
#define FILE_BEGIN					0
#define FILE_CURRENT				1
#define FILE_END					2

HANDLE __stdcall GetStdHandle(DWORD index);
HANDLE __stdcall CreateFileA(const char *name, DWORD access, DWORD share, void *security, DWORD option, DWORD flags, HANDLE template);
BOOL __stdcall ReadFile(HANDLE handle, void *p, DWORD size, DWORD *len, OVERLAPPED *overlapped);
BOOL __stdcall WriteFile(HANDLE handle, const void *p, DWORD size, DWORD *len, OVERLAPPED *overlapped);
__declspec(noreturn) void __stdcall ExitProcess(DWORD status);
unsigned char * __stdcall GetCommandLineA(void);
BOOL __stdcall CloseHandle(HANDLE handle);
DWORD __stdcall GetFileSize(HANDLE handle, DWORD *high);
HANDLE __stdcall GetProcessHeap(void);
void * __stdcall HeapAlloc(HANDLE h, DWORD flags, DWORD bytes);
void * __stdcall HeapReAlloc(HANDLE h, DWORD flags, void *p, DWORD bytes);
void __stdcall HeapFree(HANDLE h, DWORD flags, void *p);
BOOL __stdcall FlushFileBuffers(HANDLE hFile);
DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);
BOOL __stdcall DeleteFileA(const char *lpFileName);
BOOL __stdcall CreateProcessA(const char *ApplicationName, const char *CommandLine, void *SA_Process, void *SA_Thread,
	BOOL bInheritHandles, DWORD flags, void *Environment, const char *CurDir, LPSTARTUPINFO StartInfo, LPPROCESS_INFORMATION ProcInfo);
DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
BOOL __stdcall GetExitCodeProcess(HANDLE hProcess, int *exitcode);

#define NULL	((void *) 0)
