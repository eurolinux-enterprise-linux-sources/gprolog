/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : Prolog buit-in predicates                                       *
 * File  : bc_supp.h                                                       *
 * Descr.: byte-Code support - header file                                 *
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

/* $Id: bc_supp.h,v 1.13 2009/01/23 11:24:13 diaz Exp $ */

/*---------------------------------*
 * Constants                       *
 *---------------------------------*/

/*---------------------------------*
 * Type Definitions                *
 *---------------------------------*/


/*---------------------------------*
 * Global Variables                *
 *---------------------------------*/

#ifdef BC_SUPP_FILE

int pl_byte_len;

#else

extern int pl_byte_len;

#endif

				/* defined as this to avoid to force the   */
				/* inclusion of bc_supp.o if not needed    */
				/* (dynam_supp.c uses pl_byte_code)           */
unsigned *pl_byte_code;



/*---------------------------------*
 * Function Prototypes             *
 *---------------------------------*/

WamCont Pl_BC_Emulate_Pred(int func, DynPInf *dyn);
