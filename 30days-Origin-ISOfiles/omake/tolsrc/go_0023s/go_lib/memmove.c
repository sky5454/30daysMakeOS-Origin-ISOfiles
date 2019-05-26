//*****************************************************************************
// memmove.c : memory function
// 2002/02/04 by Gaku : this is rough sketch
//*****************************************************************************

#include <stddef.h>

//=============================================================================
// copy SZ bytes of S to D
//   * guarantee - acceptable result for overlaped strings
//=============================================================================
void* GO_memmove (void *d, void *s, size_t sz)
{
	void *tmp = d;
	char *dp = (char*)d;
	char *sp = (char*)s;

	if (dp > sp) {
		dp += sz;
		sp += sz;
		while (sz--)
			*--dp = *--sp;
	} else {
		while (sz--)
			*dp++ = *sp++;
	}

	return tmp;
}
