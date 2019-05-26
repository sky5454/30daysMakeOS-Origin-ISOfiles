
#if (!defined(CTYPE_H)) & 1

#define CTYPE_H	1

#if (defined(__cplusplus))
	extern "C" {
#endif

#include "go_lib.h"

enum {
  /* In C99 */
  _sch_isblank  = 0x0001,	/* space \t */
  _sch_iscntrl  = 0x0002,	/* nonprinting characters */
  _sch_isdigit  = 0x0004,	/* 0-9 */
  _sch_islower  = 0x0008,	/* a-z */
  _sch_isprint  = 0x0010,	/* any printing character including ' ' */
  _sch_ispunct  = 0x0020,	/* all punctuation */
  _sch_isspace  = 0x0040,	/* space \t \n \r \f \v */
  _sch_isupper  = 0x0080,	/* A-Z */
  _sch_isxdigit = 0x0100,	/* 0-9A-Fa-f */

  /* Extra categories useful to cpplib.  */
  _sch_isidst	= 0x0200,	/* A-Za-z_ */
  _sch_isvsp    = 0x0400,	/* \n \r */
  _sch_isnvsp   = 0x0800,	/* space \t \f \v \0 */

  /* Combinations of the above.  */
  _sch_isalpha  = _sch_isupper|_sch_islower,	/* A-Za-z */
  _sch_isalnum  = _sch_isalpha|_sch_isdigit,	/* A-Za-z0-9 */
  _sch_isidnum  = _sch_isidst|_sch_isdigit,	/* A-Za-z0-9_ */
  _sch_isgraph  = _sch_isalnum|_sch_ispunct,	/* isprint and not space */
  _sch_iscppsp  = _sch_isvsp|_sch_isnvsp,	/* isspace + \0 */
  _sch_isbasic  = _sch_isprint|_sch_iscppsp     /* basic charset of ISO C
						   (plus ` and @)  */
};

/* Character classification.  */
extern const unsigned short _sch_istable[256];

#define _sch_test(c, bit) (_sch_istable[(c) & 0xff] & (unsigned short)(bit))

#define isalpha(c)  _sch_test(c, _sch_isalpha)
#define isalnum(c)  _sch_test(c, _sch_isalnum)
#define isblank(c)  _sch_test(c, _sch_isblank)
#define iscntrl(c)  _sch_test(c, _sch_iscntrl)
#define isdigit(c)  _sch_test(c, _sch_isdigit)
#define isgraph(c)  _sch_test(c, _sch_isgraph)
#define islower(c)  _sch_test(c, _sch_islower)
#define isprint(c)  _sch_test(c, _sch_isprint)
#define ispunct(c)  _sch_test(c, _sch_ispunct)
#define isspace(c)  _sch_test(c, _sch_isspace)
#define isupper(c)  _sch_test(c, _sch_isupper)
#define isxdigit(c) _sch_test(c, _sch_isxdigit)

#define isidnum(c)	_sch_test(c, _sch_isidnum)
#define isidst(c)	_sch_test(c, _sch_isidst)
#define is_isobasic(c)	_sch_test(c, _sch_isbasic)
#define is_vsapce(c)	_sch_test(c, _sch_isvsp)
#define is_nvspace(c)	_sch_test(c, _sch_isnvsp)
#define is_space_or_null(c)	_sch_test(c, _sch_iscppsp)

/* Character transformation.  */
extern const unsigned char  _sch_toupper[256];
extern const unsigned char  _sch_tolower[256];
#define toupper(c) _sch_toupper[(c) & 0xff]
#define tolower(c) _sch_tolower[(c) & 0xff]

#if (defined(__cplusplus))
	}
#endif

#endif
