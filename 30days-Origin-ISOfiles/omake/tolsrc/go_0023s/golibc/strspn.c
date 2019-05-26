//*****************************************************************************
// strspn.c : string function
// 2002/02/04 by Gaku : this is rough sketch
//*****************************************************************************

#include <stddef.h>

//=============================================================================
// return the length of D of any character in S
//=============================================================================
size_t strspn (char *d, const char *s)
{
	char *tmp = d;
	const char *bgn = s;

	while ('\0' != *d) {
		while ('\0' != *s) {
			if (*d == *s)
				break;
			s++;
		}
		if ('\0' == *s)
			return d - tmp;
		d++;
		s = bgn;
	}

	return d - tmp;
}
