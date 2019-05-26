//*****************************************************************************
// strstr.c : string function
// 2002/02/04 by Gaku : this is rough sketch
//*****************************************************************************

#include <stdio.h>
#include <stddef.h>

//=============================================================================
// search S in D
//   * simple search
//=============================================================================
char* strstr (char *d, const char *s)
{
	char *tmp;
	const char *bgn = s;

	while ('\0' != *d) {
		tmp = d;
		while (*d++ == *s++)
			if ('\0' == *d || '\0' == *s)
				return tmp;
		d = tmp+1;
		s = bgn;
	}

	return NULL;
}
