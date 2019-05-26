/* xstrdup.c -- Duplicate a string in memory, using xmalloc.
   This trivial function is in the public domain.
   Ian Lance Taylor, Cygnus Support, December 1995.  */

/*

@deftypefn Replacement char* xstrdup (const char *@var{s})

Duplicates a character string without fail, using @code{xmalloc} to
obtain memory.

@end deftypefn

*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#ifdef HAVE_STRING_H
#include "../include/string.h"
#endif
/* !kawai! */
#include "../include/ansidecl.h"
#include "../include/libiberty.h"
/* end of !kawai! */

char *
xstrdup (s)
  const char *s;
{
  register size_t len = strlen (s) + 1;
  register char *ret = xmalloc (len);
  memcpy (ret, s, len);
  return ret;
}
