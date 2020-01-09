/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : Prolog buit-in predicates                                       *
 * File  : pred_supp.h                                                     *
 * Descr.: predicate management support - header file                      *
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

/* $Id: pred_supp.h,v 1.12 2009/01/23 11:24:14 diaz Exp $ */

/*---------------------------------*
 * Constants                       *
 *---------------------------------*/

					  /* if modified -> modif wam2ma.c */
#define MASK_PRED_NATIVE_CODE      1
#define MASK_PRED_DYNAMIC          2
#define MASK_PRED_PUBLIC           4
#define MASK_PRED_BUILTIN          8
#define MASK_PRED_BUILTIN_FD       16

#define MASK_PRED_ANY_BUILTIN      (MASK_PRED_BUILTIN | MASK_PRED_BUILTIN_FD)




/*---------------------------------*
 * Type Definitions                *
 *---------------------------------*/

/*---------------------------------*
 * Global Variables                *
 *---------------------------------*/

/*---------------------------------*
 * Function Prototypes             *
 *---------------------------------*/

char *Pl_Detect_If_Aux_Name(int func);

int Pl_Father_Pred_Of_Aux(int func, int *father_arity);

int Pl_Pred_Without_Aux(int func, int arity, int *arity1);

int Pl_Make_Aux_Name(int func, int arity, int aux_nb);
