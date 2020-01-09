/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : Prolog buit-in predicates                                       *
 * File  : write_supp.h                                                    *
 * Descr.: term writing support - header file                              *
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

/* $Id: write_supp.h,v 1.14 2009/01/23 11:24:14 diaz Exp $ */

/*---------------------------------*
 * Constants                       *
 *---------------------------------*/

#define WRITE_QUOTED                1
#define WRITE_IGNORE_OP             2
#define WRITE_NUMBER_VARS           4
#define WRITE_NAME_VARS             8
#define WRITE_SPACE_ARGS           16
#define WRITE_PORTRAYED            32




/*---------------------------------*
 * Type Definitions                *
 *---------------------------------*/

/*---------------------------------*
 * Global Variables                *
 *---------------------------------*/

#ifdef WRITE_SUPP_FILE

int pl_last_writing;

#else

extern int pl_last_writing;

#endif




/*---------------------------------*
 * Function Prototypes             *
 *---------------------------------*/

void Pl_Write_Term(StmInf *pstm, int depth, int prec, int mask,
		WamWord term_word);

void Pl_Write_Simple(WamWord term_word);

void Pl_Write_A_Char(StmInf *pstm, int c);

char *Pl_Float_To_String(double d);

int Get_Print_Stm(void);
