/* copyright(C) 2002 H.Kawai (under KL-01). */

#if (!defined(ERRNO_H))

#define ERRNO_H	1

#if (defined(__cplusplus))
	extern "C" {
#endif

#include "go_lib.h"

extern int GO_errno;

#define errno		GO_errno

#define	ENOENT		2	/* No such file or directory */
#define	ERANGE		34	/* Result too large (or too small) */

#if (defined(__cplusplus))
	}
#endif

#endif
