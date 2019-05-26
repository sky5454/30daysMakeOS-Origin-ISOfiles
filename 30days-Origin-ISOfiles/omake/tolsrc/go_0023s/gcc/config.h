#define TARGET_CPU_DEFAULT ((TARGET_CPU_DEFAULT_pentium|TARGET_CPU_DEFAULT_pentium))
#include "auto-host.h"
#ifdef IN_GCC
/* Provide three core typedefs used by everything, if we are compiling
   GCC.  These used to be found in rtl.h and tree.h, but this is no
   longer practical.  Providing these here rather that system.h allows
   the typedefs to be used everywhere within GCC. */
struct rtx_def;
typedef struct rtx_def *rtx;
struct rtvec_def;
typedef struct rtvec_def *rtvec;
union tree_node;
typedef union tree_node *tree;
#endif
#ifdef IN_GCC
/* !kawai! */
# include "../include/ansidecl.h"
# include "../config/xm-cygwin.h"
# include "../config/cygming.h"
# include "../config/cygwin.h"
# include "defaults.h"
/* end of !kawai! */
#endif
#ifndef POSIX
# define POSIX
#endif
#ifndef GENERATOR_FILE
# include "insn-constants.h"
# include "insn-flags.h"
#endif
