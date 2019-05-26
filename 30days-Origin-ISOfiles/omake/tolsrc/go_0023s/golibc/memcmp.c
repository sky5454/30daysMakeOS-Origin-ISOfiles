//*****************************************************************************
// memcmp.c : memory function
// 2002/02/04 by Gaku : this is rough sketch
//*****************************************************************************

#include <stddef.h>

//=============================================================================
// compare SZ bytes of D and S
//=============================================================================
int memcmp (const void *d, const void *s, size_t sz)
{
	const char *dp = (const char*) d;
	const char *sp = (const char*) s;

	while (sz--) {
		if (*dp != *sp)
			return *dp - *sp;
		dp++;
		sp++;
	}

	return 0;
}
