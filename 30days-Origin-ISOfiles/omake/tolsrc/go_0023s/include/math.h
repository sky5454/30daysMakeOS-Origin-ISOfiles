/* copyright(C) 2002 H.Kawai (under KL-01). */

#if (!defined(MATH_H))

#define MATH_H	1

#if (defined(__cplusplus))
	extern "C" {
#endif

#include "GO_lib.h"

double GO_ldexp(double x, int n);
double GO_frexp(double x, int *exp);

#define ldexp(x, n)			GO_ldexp(x, n)
#define frexp(x, exp)		GO_frexp(x, exp)

#if (defined(__cplusplus))
	}
#endif

#endif
