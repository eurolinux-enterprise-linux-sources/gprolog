/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : configuration                                                   *
 * File  : bool.h                                                          *
 * Descr.: boolean type definition - header file                           *
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

/* $Id: bool.h,v 1.12 2009/01/23 11:24:14 diaz Exp $ */

#ifndef _BOOL_H
#define _BOOL_H

#ifdef FALSE

#    if FALSE != 0
#        error "FALSE already defined with a value != 0"
#    endif
#else

#define FALSE 0

#endif

#ifdef TRUE

#    if TRUE != 1
#        error "TRUE already defined with a value != 1"
#    endif
#else

#define TRUE 1

#endif

#ifndef Bool
typedef int Bool;
#endif

#endif /* !_BOOL_H */
