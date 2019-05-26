/* copyright(C) 2002 H.Kawai (under KL-01). */

#if (!defined(STDLIB_H))

#define STDLIB_H	1

#if (defined(__cplusplus))
	extern "C" {
#endif

#include "go_lib.h"

#define	_ATTRIB_NORETURN	__attribute__ ((noreturn))

double GO_atof(const char *s);
int GO_atoi(const char *s);
double GO_strtod(const char *s, char **endp);

/*	float GO_strtof(const char *s, char **endp) */
/* #define GO_strtof(s, endp) ((float) strtod(s, endp)) */

long GO_strtol(const char *s, char **endp, int base);
unsigned long GO_strtoul(const char *s, char **endp, int base);

int	GO_rand(void);

void *GO_calloc(size_t nobj, size_t size);
void *GO_malloc(size_t size);
void *GO_realloc(void *p, size_t size);
void GO_free(void *p);

void GO_abort(void) _ATTRIB_NORETURN;
void GO_exit(int status) _ATTRIB_NORETURN;
int	GO_atexit(void (*)(void));

int GO_system(const char *s);
/* #define GO_system(s) (GOL_sysabort(GO_TERM_BUGTRAP), 0) */

/* char *GO_getenv(const char *name); */
/* #define GO_getenv(name) (GOL_sysabort(GO_TERM_BUGTRAP), NULL) */
#define GO_getenv(name) ((char *) NULL)

void *GO_bsearch(const void *key, const void *base,
	size_t n, size_t size, 
	int (*cmp)(const void *keyval, const void *datum));

void GO_qsort(const void *base, size_t n, size_t size,
	int (*cmp)(const void *, const void *));

int GO_abs(int n);

typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

div_t GO_div(int num, int denom);

/*	int	GO_mblen(const char *, size_t); */

extern UINT GO_rand_seed;

#undef _ATTRIB_NORETURN

#define	EXIT_SUCCESS		0
#define	EXIT_FAILURE		1
#define RAND_MAX			32767

#define atof(s)				GO_atof(s)	
#define atoi(s)				GO_atoi(s)
#define atol(s)				(long) GO_atoi(s)
#define strtod(s, endp)		GO_strtod(s, endp)
#define strtol(s, endp, base)	GO_strtol(s, endp, base)
#define strtoul(s, endp, base)	GO_strtoul(s, endp, base)
#define rand()				GO_rand()
#define srand(seed)			(void) (GO_rand_seed = (seed))
#define calloc(nobj, size)	GO_calloc(nobj, size)
#define malloc(size)		GO_malloc(size)
#define realloc(p, size)	GO_realloc(p, size)
/* #define free(p)			GO_free(p) */
#define free				GO_free
#define abort()				GO_abort()
#define exit(status)		GO_exit(status)
#define	atexit(fcn)			GO_atexit(fcn)
#define system(s)			GO_system(s)
#define getenv(name)		GO_getenv(name)
#define bsearch(key, base, n, size, cmp) GO_bsearch(key, base, n, size, cmp)
#define qsort(base, n, size, cmp) GO_qsort(base, n, size, cmp)
#define abs(n)				GO_abs(n)
#define labs(n)				GO_abs(n)
#define div(num, denom)		GO_div(num, denom)
#define ldiv(num, denom)	(ldiv_t) GO_div(num, denom)

#if (defined(__cplusplus))
	}
#endif

#endif
