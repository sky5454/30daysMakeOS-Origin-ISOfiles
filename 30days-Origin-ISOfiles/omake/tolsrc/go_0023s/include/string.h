/* copyright(C) 2002 H.Kawai (under KL-01). */

#if (!defined(STRING_H))

#define STRING_H	1

#if (defined(__cplusplus))
	extern "C" {
#endif

#include "go_lib.h"

char *GO_strcpy(char *s, const char *ct);
char *GO_strncpy(char *s, const char *ct, size_t n);
char *GO_strcat(char *s, const char *ct);
char *GO_strncat(char *s, const char *ct, size_t n);
int GO_strcmp(const char *cs, const char *ct);
int GO_strncmp(const char *cs, const char *ct, size_t n);
char *GO_strchr(const char *cs, int c);
char *GO_strrchr(const char *cs, int c);
size_t GO_strspn(const char *s, const char *accept);
size_t GO_strcspn(const char *s, const char *reject);
char *GO_strpbrk(const char *s, const char *accept);
char *GO_strstr(const char *cs, const char *ct);
size_t GO_strlen(const char *cs);

void *GO_memcpy(void *s, const void *ct, size_t n);
void *GO_memmove(void *s, const void *ct, size_t n);
int GO_memcmp(const void *cs, const void *ct, size_t n);
void *GO_memchr(const void *cs, int c, size_t n);
void *GO_memset(void *s, int c, size_t n);
char *GO_strdup(const char *s);

#define	strcpy(s, ct)			GO_strcpy(s, ct)
#define	strncpy(s, ct, n)		GO_strncpy(s, ct, n)
#define	strcat(s, ct)			GO_strcat(s, ct)
#define	strncat(s, ct, n)		GO_strncat(s, ct, n)
/* #define strcmp(cs, ct)			GO_strcmp(cs, ct) */
#define strcmp					GO_strcmp
#define strncmp(cs, ct, n)		GO_strncmp(cs, ct, n)
#define strchr(cs, c)			GO_strchr(cs, c)
#define strrchr(cs, c)			GO_strrchr(cs, c)
#define strspn(s, accept)		GO_strspn(s, accept)
#define strcspn(s, reject)		GO_strcspn(s, reject)
#define strpbrk(s, accept)		GO_strpbrk(s, accept)

#define	strstr(cs, ct)			GO_strstr(cs, ct)
#define strlen(cs)				GO_strlen(cs)

#define memcpy(s, ct, n)		GO_memcpy(s, ct, n)
#define memmove(s, ct, n)		GO_memmove(s, ct, n)
#define memcmp(cs, ct, n)		GO_memcmp(cs, ct, n)
#define memchr(cs, c, n)		GO_memchr(cs, c, n)
#define memset(s, c, n)			GO_memset(s, c, n)
#define strdup(s)				GO_strdup(s)

#if (defined(__cplusplus))
	}
#endif

#endif
