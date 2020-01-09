/* EnginePl/gp_config.h.  Generated from gp_config.h.in by configure.  */
/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : configuration                                                   *
 * File  : gp_config.h.in                                                  *
 * Descr.: general configuration file (handled by autoconf) - header file  *
 * Author: Daniel Diaz                                                     *
 *                                                                         *
 * Copyright (C) 1999-2009 Daniel Diaz                                     *
 *                                                                         *
 * GNU Prolog is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU General Public License as published by the   *
 * Free Software Foundation; either version 2, or any later version.       *
 *                                                                         *
 * GNU Prolog is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU        *
 * General Public License for more details.                                *
 *                                                                         *
 * You should have received a copy of the GNU General Public License along *
 * with this program; if not, write to the Free Software Foundation, Inc.  *
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301, USA.               *
 *-------------------------------------------------------------------------*/

#ifndef _GP_CONFIG_H
#define _GP_CONFIG_H

/* Define if you have sys/ioctl_compat.h */
/* #undef HAVE_SYS_IOCTL_COMPAT_H */

/* Define if you have termios.h */
#define HAVE_TERMIOS_H 1

/* Define if you have termio.h */
/* #undef HAVE_TERMIO_H */

/* Define if you have malloc.h */
#define HAVE_MALLOC_H 1

/* Define if you have a working mmap system call */
#define HAVE_MMAP 1

/* Define if you have a working mprotect system call */
#define HAVE_MPROTECT 1

/* Define if you have a mallopt function */
#define HAVE_MALLOPT 1

/* Define inline keyword */
/* #undef inline */

/* Define if you don't want to use machine registers */
/* #undef NO_USE_REGS */

/* Define if you don't want to use the ebp register on ix86 */
#define NO_USE_EBP 1

/* Define if you don't want to fast call on ix86 */
/* #undef NO_USE_FAST_CALL */

/* Define if you don't want to include line editor facility */
/* #undef NO_USE_LINEDIT */

/* Define if you don't want consult/1 launches pl2wam with pipe on its input */
/* #undef NO_USE_PIPED_STDIN_FOR_CONSULT */

/* Define if you don't want to use the win32 GUI console */
#define NO_USE_GUI_CONSOLE 1

/* Define if you don't want to include sockets facility */
/* #undef NO_USE_SOCKETS */

/* Define if you don't want to include the FD constraint solver */
/* #undef NO_USE_FD_SOLVER */




/* Define if the cpu is a mips */
/* #undef M_mips */

/* Define if the cpu is an alpha */
/* #undef M_alpha */

/* Define if the cpu is a sparc */
/* #undef M_sparc */

/* Define if the cpu is a ix86 */
/* #undef M_ix86 */

/* Define if the cpu is a powerpc */
/* #undef M_powerpc */

/* Define if the cpu is a x86-64 */
#define M_x86_64 1


/* Define if the OS is an SGI IRIX */
/* #undef M_irix */

/* Define if the OS is an DEC OSF1 */
/* #undef M_osf */

/* Define if the OS is a sunos */
/* #undef M_sunos */

/* Define if the OS is a solaris */
/* #undef M_solaris */

/* Define if the OS is a linux */
#define M_linux 1

/* Define if the OS is a darwin */
/* #undef M_darwin */

/* Define if the OS is a WinXX based on Cygwin */
/* #undef M_cygwin */

/* Define if the OS is a WIN32 */
/* #undef M_win32 */

/* Define if the OS is a SCO */
/* #undef M_sco */

/* Define if the OS is a (Free/Open/Net)BSD */
/* #undef M_bsd */


/* Define if the system is an mips/irix */
/* #undef M_mips_irix */

/* Define if the system is an alpha/linux */
/* #undef M_alpha_linux */

/* Define if the system is an alpha/OSF1 */
/* #undef M_alpha_osf */

/* Define if the system is a ix86/linux */
/* #undef M_ix86_linux */

/* Define if the system is a ix86/sco */
/* #undef M_ix86_sco */

/* Define if the system is a ix86/freebsd or openbsd or netbsd */
/* #undef M_ix86_bsd */

/* Define if the system is a ix86/cygwin */
/* #undef M_ix86_cygwin */

/* Define if the system is a ix86/mingw */
/* #undef M_ix86_mingw */

/* Define if the system is a ix86/win32 */
/* #undef M_ix86_win32 */

/* Define if the system is a ix86/darwin */
/* #undef M_ix86_darwin */

/* Define if the system is a ix86/solaris */
/* #undef M_ix86_solaris */

/* Define if the system is a sparc/solaris */
/* #undef M_sparc_solaris */

/* Define if the system is a sparc/sunos */
/* #undef M_sparc_sunos */

/* Define if the system is a sparc/bsd */
/* #undef M_sparc_bsd */

/* Define if the system is a powerpc/linux */
/* #undef M_powerpc_linux */

/* Define if the system is a powerpc/darwin */
/* #undef M_powerpc_darwin */

/* Define if the system is a powerpc/bsd */
/* #undef M_powerpc_bsd */

/* Define if the system is a x86-64/linux */
#define M_x86_64_linux 1

/* Define if the system is a x86-64/solaris */
/* #undef M_x86_64_solaris */

/* Define if the system is a x86-64/bsd */
/* #undef M_x86_64_bsd */


/* Constant definitions */

#define PROLOG_NAME1 "gprolog"
#define PROLOG_NAME "GNU Prolog"
#define PROLOG_VERSION "1.3.1"
#define PROLOG_DATE "Feb 10 2009"
#define PROLOG_COPYRIGHT "Copyright (C) 1999-2009 Daniel Diaz"

#define TOP_LEVEL "gprolog"
#define GPLC "gplc"
#define HEXGPLC "hexgplc"
#define ENV_VARIABLE "PL_PATH"

#define M_VENDOR "unknown"
#define M_CPU "x86_64"
#define M_OS "linux-gnu"

#define CC "gcc"
#define CFLAGS_PREFIX_REG "-ffixed-%s"
#define CFLAGS "-g -Wall"
#define CFLAGS_MACHINE ""
#define LDFLAGS ""
#define LDLIBS "-lm"
#define AS "as"
#define STRIP "strip"

#define ASM_SUFFIX ".s"
#define OBJ_SUFFIX ".o"
#define EXE_SUFFIX ""
#define CC_OBJ_NAME_OPT "-o "
#define CC_EXE_NAME_OPT "-o "


#define DLL_W32GUICONS "w32guicons.dll"
#define LIB_LINEDIT "liblinedit.a"
#define LIB_ENGINE_PL "libengine_pl.a"
#define LIB_BIPS_PL "libbips_pl.a"
#define LIB_ENGINE_FD "libengine_fd.a"
#define LIB_BIPS_FD "libbips_fd.a"


#define SIZEOF_LONG 8
#define WORD_SIZE                  (8 * SIZEOF_LONG)

/* Define if socklen_t is not defined */
/* #undef socklen_t */

/* Define if linux needs asm/sigcontext.h */
/* #undef LINUX_NEEDS_ASM_SIGCONTEXT */

#include "arch_dep.h"

#endif /* !_GP_CONFIG_H */
