/* copyright(C) 2002 H.Kawai (under KL-01). */

/* #include <setjmp.h> */

#if (!defined(SETJMP_H)) & 1

#define SETJMP_H	1

#if (defined(__cplusplus))
	extern "C" {
#endif

typedef int jmp_buf[3]; /* EBP, EIP, ESP */

#define setjmp(env)			__builtin_setjmp(env)
#define longjmp(env, val)	__builtin_longjmp(env, val)

#if (defined(__cplusplus))
	}
#endif

#endif
