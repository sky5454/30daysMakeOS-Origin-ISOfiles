//*****************************************************************************
// strpbrk.c : string function
// 2002/02/04 by Gaku : this is rough sketch
//*****************************************************************************

#include <stdio.h>
#include <stddef.h>

//=============================================================================
// search D of any character in S
//=============================================================================
char* strpbrk (char *d, const char *s)
{
	const char *bgn = s;

	while ('\0' != *d) {
		while ('\0' != *s)
			if (*d == *s++)
				return d;
		d++;
		s = bgn;
	}

	return NULL;
}
