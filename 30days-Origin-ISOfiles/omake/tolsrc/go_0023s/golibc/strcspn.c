//*****************************************************************************
// strcspn.c : string function
// 2002/02/04 by Gaku : this is rough sketch
//*****************************************************************************

#include <stddef.h>

//=============================================================================
// return length of D which any characters in S
//=============================================================================
size_t strcspn (char *d, const char *s)
{
	char *tmp = d;
	const char *bgn = s;

	while ('\0' != *d) {
		while ('\0' != *s)
			if (*d == *s++)
				return d - tmp;
		d++;
		s = bgn;
	}

	return d - tmp;
}
