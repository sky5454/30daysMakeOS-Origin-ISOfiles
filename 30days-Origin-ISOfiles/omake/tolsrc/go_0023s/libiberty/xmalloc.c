/* memory allocation routines with error checking.
   Copyright 1989, 90, 91, 92, 93, 94 Free Software Foundation, Inc.
   
This file is part of the libiberty library.
Libiberty is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

Libiberty is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with libiberty; see the file COPYING.LIB.  If
not, write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/*

@deftypefn Replacement void* xmalloc (size_t)

Allocate memory without fail.  If @code{malloc} fails, this will print
a message to @code{stderr} (using the name set by
@code{xmalloc_set_program_name},
if any) and then call @code{xexit}.  Note that it is therefore safe for
a program to contain @code{#define malloc xmalloc} in its source.

@end deftypefn

@deftypefn Replacement void* xrealloc (void *@var{ptr}, size_t @var{size})
Reallocate memory without fail.  This routine functions like @code{realloc},
but will behave the same as @code{xmalloc} if memory cannot be found.

@end deftypefn

@deftypefn Replacement void* xcalloc (size_t @var{nelem}, size_t @var{elsize})

Allocate memory without fail, and set it to zero.  This routine functions
like @code{calloc}, but will behave the same as @code{xmalloc} if memory
cannot be found.

@end deftypefn

@deftypefn Replacement void xmalloc_set_program_name (const char *@var{name})

You can use this to set the name of the program used by
@code{xmalloc_failed} when printing a failure message.

@end deftypefn

@deftypefn Replacement void xmalloc_failed (size_t)

This function is not meant to be called by client code, and is listed
here for completeness only.  If any of the allocation routines fail, this
function will be called to print an error message and terminate execution.

@end deftypefn

*/

/* !kawai! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "../include/ansidecl.h"
#include "../include/libiberty.h"

#include "../include/stdio.h"

#ifdef __STDC__
#include "../include/stddef.h"
#endif

#include "../include/stdlib.h"

/* The program name if set.  */
static const char *name = "";

#define xmalloc_set_program_name(s)	(name = (s))

void
xmalloc_failed (size)
     size_t size;
{
  fprintf (stderr,
	   "\n%s%sCannot allocate %lu bytes\n",
	   name, *name ? ": " : "",
	   (unsigned long) size);
  xexit (1);
}  

/* end of !kawai! */

PTR
xmalloc (size)
    size_t size;
{
  PTR newmem;

  if (size == 0)
    size = 1;
  newmem = malloc (size);
  if (!newmem)
    xmalloc_failed (size);

  return (newmem);
}

PTR
xcalloc (nelem, elsize)
  size_t nelem, elsize;
{
  PTR newmem;

  if (nelem == 0 || elsize == 0)
    nelem = elsize = 1;

  newmem = calloc (nelem, elsize);
  if (!newmem)
    xmalloc_failed (nelem * elsize);

  return (newmem);
}

PTR
xrealloc (oldmem, size)
    PTR oldmem;
    size_t size;
{
  PTR newmem;

  if (size == 0)
    size = 1;
  if (!oldmem)
    newmem = malloc (size);
  else
    newmem = realloc (oldmem, size);
  if (!newmem)
    xmalloc_failed (size);

  return (newmem);
}
