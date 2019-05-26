/* Operating system specific defines to be used when targeting GCC for
   hosting on Windows32, using a Unix style C library and tools.
   Copyright (C) 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002
   Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* !kawai! */
#define READONLY_DATA_SECTION() data_section ()

#undef CPP_PREDEFINES
#define CPP_PREDEFINES "-D_X86_=1 -Asystem=winnt"
/* Support the __declspec keyword by turning them into attributes.
   We currently only support: dllimport and dllexport.
   Note that the current way we do this may result in a collision with
   predefined attributes later on.  This can be solved by using one attribute,
   say __declspec__, and passing args to it.  The problem with that approach
   is that args are not accumulated: each new appearance would clobber any
   existing args.  */

#undef CPP_SPEC
#define CPP_SPEC "%(cpp_cpu) %{posix:-D_POSIX_SOURCE} \
  -D__stdcall=__attribute__((__stdcall__)) \
  -D__fastcall=__attribute__((__fastcall__)) \
  -D__cdecl=__attribute__((__cdecl__)) \
  %{!ansi:-D_stdcall=__attribute__((__stdcall__)) \
    -D_fastcall=__attribute__((__fastcall__)) \
    -D_cdecl=__attribute__((__cdecl__))} \
  -D__declspec(x)=__attribute__((x)) \
  -D__i386__ -D__i386 \
  %{mno-win32:%{mno-cygwin: %emno-cygwin and mno-win32 are not compatible}} \
  %{mno-cygwin:-D__MSVCRT__ -D__MINGW32__ %{!ansi:%{mthreads:-D_MT}}}\
  %{!mno-cygwin:-D__CYGWIN32__ -D__CYGWIN__ %{!ansi:-Dunix} -D__unix__ -D__unix }\
  %{mwin32|mno-cygwin:-DWIN32 -D_WIN32 -D__WIN32 -D__WIN32__ %{!ansi:-DWINNT}}\
  %{!mno-win32|mno-cygwin:-isystem ../include/w32api%s -isystem ../../include/w32api%s}\
"

#undef STARTFILE_SPEC
#define STARTFILE_SPEC "\
  %{shared|mdll: %{mno-cygwin:dllcrt2%O%s}}\
  %{!shared: %{!mdll: %{!mno-cygwin:crt0%O%s} %{mno-cygwin:crt2%O%s}\
  %{pg:gcrt0%O%s}}} crtbegin%O%s"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC "crtend%O%s"

/* Normally, -lgcc is not needed since everything in it is in the DLL, but we
   want to allow things to be added to it when installing new versions of
   GCC without making a new CYGWIN.DLL, so we leave it.  Profiling is handled
   by calling the init function from the prologue.  */

#undef LIBGCC_SPEC
#define LIBGCC_SPEC \
  "%{mno-cygwin: %{mthreads:-lmingwthrd} -lmingw32} -lgcc %{mno-cygwin:-lmoldname -lmingwex -lmsvcrt}"

/* This macro defines names of additional specifications to put in the specs
   that can be used in various specifications like CC1_SPEC.  Its definition
   is an initializer with a subgrouping for each command option.

   Each subgrouping contains a string constant, that defines the
   specification name, and a string constant that used by the GNU CC driver
   program.

   Do not define this macro if it does not need to do anything.  */

#undef  SUBTARGET_EXTRA_SPECS
#define SUBTARGET_EXTRA_SPECS \
  { "mingw_include_path", DEFAULT_TARGET_MACHINE }

/* We have to dynamic link to get to the system DLLs.  All of libc, libm and
   the Unix stuff is in cygwin.dll.  The import library is called
   'libcygwin.a'.  For Windows applications, include more libraries, but
   always include kernel32.  We'd like to specific subsystem windows to
   ld, but that doesn't work just yet.  */

#undef LIB_SPEC
#define LIB_SPEC "\
  %{pg:-lgmon} \
  %{!mno-cygwin:-lcygwin} \
  %{mno-cygwin:%{mthreads:-lmingwthrd} -lmingw32} \
  %{mwindows:-lgdi32 -lcomdlg32} \
  -luser32 -lkernel32 -ladvapi32 -lshell32"

#define LINK_SPEC "\
  %{mwindows:--subsystem windows} \
  %{mconsole:--subsystem console} \
  %{shared: %{mdll: %eshared and mdll are not compatible}} \
  %{shared: --shared} %{mdll:--dll} \
  %{static:-Bstatic} %{!static:-Bdynamic} \
  %{shared|mdll: -e \
    %{mno-cygwin:_DllMainCRTStartup@12} \
    %{!mno-cygwin:__cygwin_dll_entry@12}}\
  %{!mno-cygwin:--dll-search-prefix=cyg}"

/* Allocate space for all of the machine-spec-specific stuff.
   Allocate enough space for cygwin -> mingw32 munging. */

#ifdef GPLUSPLUS_INCLUDE_DIR
char cygwin_gplusplus_include_dir[sizeof (GPLUSPLUS_INCLUDE_DIR) + 1] = GPLUSPLUS_INCLUDE_DIR;
#undef GPLUSPLUS_INCLUDE_DIR
#define GPLUSPLUS_INCLUDE_DIR ((const char *) cygwin_gplusplus_include_dir)
#ifndef GEN_CVT_ARRAY
#define GEN_CVT_ARRAY
#endif
#endif

#ifdef GPLUSPLUS_TOOL_INCLUDE_DIR
char cygwin_gplusplus_tool_include_dir[sizeof (GPLUSPLUS_TOOL_INCLUDE_DIR) + 1] = GPLUSPLUS_TOOL_INCLUDE_DIR;
#undef GPLUSPLUS_TOOL_INCLUDE_DIR
#define GPLUSPLUS_TOOL_INCLUDE_DIR ((const char *) cygwin_gplusplus_tool_include_dir)
#ifndef GEN_CVT_ARRAY
#define GEN_CVT_ARRAY
#endif
#endif

#ifdef GPLUSPLUS_BACKWARD_INCLUDE_DIR
char cygwin_gplusplus_backward_include_dir[sizeof (GPLUSPLUS_BACKWARD_INCLUDE_DIR) + 1] = GPLUSPLUS_BACKWARD_INCLUDE_DIR;
#undef GPLUSPLUS_BACKWARD_INCLUDE_DIR
#define GPLUSPLUS_BACKWARD_INCLUDE_DIR ((const char *) cygwin_gplusplus_backward_include_dir)
#ifndef GEN_CVT_ARRAY
#define GEN_CVT_ARRAY
#endif
#endif

#ifdef LOCAL_INCLUDE_DIR
char cygwin_local_include_dir[sizeof (LOCAL_INCLUDE_DIR) + 1] = LOCAL_INCLUDE_DIR;
#undef LOCAL_INCLUDE_DIR
#define LOCAL_INCLUDE_DIR ((const char *) cygwin_local_include_dir)
#ifndef GEN_CVT_ARRAY
#define GEN_CVT_ARRAY
#endif
#endif

#ifdef CROSS_INCLUDE_DIR
char cygwin_cross_include_dir[sizeof (CROSS_INCLUDE_DIR) + 1] = CROSS_INCLUDE_DIR;
#undef CROSS_INCLUDE_DIR
#define CROSS_INCLUDE_DIR ((const char *) cygwin_cross_include_dir)
#ifndef GEN_CVT_ARRAY
#define GEN_CVT_ARRAY
#endif
#endif

#ifdef TOOL_INCLUDE_DIR
char cygwin_tool_include_dir[sizeof (TOOL_INCLUDE_DIR) + 1] = TOOL_INCLUDE_DIR;
#undef TOOL_INCLUDE_DIR
#define TOOL_INCLUDE_DIR ((const char *) cygwin_tool_include_dir)

#ifndef CROSS_COMPILE
#undef STANDARD_INCLUDE_DIR
#define STANDARD_INCLUDE_DIR "/usr/include"
char cygwin_standard_include_dir[sizeof (STANDARD_INCLUDE_DIR) + 1] = STANDARD_INCLUDE_DIR;
#undef STANDARD_INCLUDE_DIR
#define STANDARD_INCLUDE_DIR ((const char *) cygwin_standard_include_dir)
#endif

#ifndef GEN_CVT_ARRAY
#define GEN_CVT_ARRAY
#endif
#endif

#ifndef GEN_CVT_ARRAY
extern char *cvt_to_mingw[];
#else
char *cvt_to_mingw[] =
  {
#ifdef GPLUSPLUS_INCLUDE_DIR
    cygwin_gplusplus_include_dir,
#endif

#ifdef GPLUSPLUS_TOOL_INCLUDE_DIR
    cygwin_gplusplus_tool_include_dir,
#endif

#ifdef GPLUSPLUS_BACKWARD_INCLUDE_DIR
    cygwin_gplusplus_backward_include_dir,
#endif

#ifdef LOCAL_INCLUDE_DIR
    cygwin_local_include_dir,
#endif

#ifdef CROSS_INCLUDE_DIR
    cygwin_cross_include_dir,
#endif

#ifdef TOOL_INCLUDE_DIR
    cygwin_tool_include_dir,
#endif

#ifdef STANDARD_INCLUDE_DIR
    cygwin_standard_include_dir,
#endif

    NULL
  };
#undef GEN_CVS_ARRAY
#endif /*GEN_CVS_ARRAY*/

void mingw_scan PARAMS ((int, const char * const *, char **));
#if 1
#define GCC_DRIVER_HOST_INITIALIZATION \
do \
{ \
  mingw_scan(argc, argv, (char **) &spec_machine); \
  } \
while (0)
#else
#define GCC_DRIVER_HOST_INITIALIZATION \
do \
{ \
  char *cprefix = concat (tooldir_base_prefix, spec_machine, \
			  dir_separator_str, NULL); \
  if (!IS_ABSOLUTE_PATHNAME (cprefix)) \
    cprefix = concat (standard_exec_prefix, spec_machine, dir_separator_str, \
		      spec_version, dir_separator_str, tooldir_prefix, NULL); \
  add_prefix (&exec_prefixes,\
	      concat (cprefix, "../../../../", spec_machine, "/bin/", NULL), \
	      "BINUTILS", PREFIX_PRIORITY_LAST, 0, NULL); \
  add_prefix (&exec_prefixes, cprefix, \
	      "BINUTILS", PREFIX_PRIORITY_LAST, 0, NULL); \
  add_prefix (&startfile_prefixes,\
	      concat (standard_startfile_prefix, "w32api", NULL),\
	      "GCC", PREFIX_PRIORITY_LAST, 0, NULL);\
  mingw_scan(argc, argv, &spec_machine); \
  } \
while (0)
#endif
