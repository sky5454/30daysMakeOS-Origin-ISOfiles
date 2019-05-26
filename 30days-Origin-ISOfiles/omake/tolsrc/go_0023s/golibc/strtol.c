/* copyright(C) 2003 H.Kawai (under KL-01). */

#include <errno.h>
#include <limits.h>

unsigned long strtoul0(const char **ps, int base, char *errflag);

long strtol(const char *s, const char **endp, int base)
{
	const char *s0 = s, *s1;
	char sign = 0, errflag;
	unsigned long val;
	while (*s != '\0' && *s <= ' ')
		s++;
	if (*s == '-') {
		sign = 1;
		s++;
	}
	while (*s != '\0' && *s <= ' ')
		s++;
	s1 = s;
	val = strtoul0(&s, base, &errflag);
	if (s == s1)
		s = s0;
	if (endp)
		*endp = s;
	if (val > LONG_MAX) {
		errflag = 1;
		val = LONG_MAX;
		if (sign)
			val = LONG_MIN;
	}
	if (errflag == 0 && sign != 0)
		val = - val;
	if (errflag)
		errno = ERANGE;
	return val;
}
