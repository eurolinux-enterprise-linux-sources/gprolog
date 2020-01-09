/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : WAM to mini-assembler translator                                *
 * File  : wam_parser.h                                                    *
 * Descr.: parser - header file                                            *
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

/* $Id: wam_parser.h,v 1.13 2009/01/23 11:24:15 diaz Exp $ */

/*---------------------------------*
 * Constants                       *
 *---------------------------------*/

/*---------------------------------*
 * Type Definitions                *
 *---------------------------------*/

typedef enum
{				/* skip 256 to specify a given char */
  ATOM = 256,			/* an atom */
  INTEGER,			/* an integer */
  FLOAT,			/* a double */
  X_Y,				/* x(X) or y(Y) */
  F_N,				/* a ATOM / INTEGER */
  LABEL,			/* a label */
  ANY				/* ATOM or INTEGER or F_N or FLOAT or X_Y */
}
ArgTyp;


#define L1(t)                  L2(t, 0)
#define L2(t1, t2)             ((t1 << 16) | (t2))
#define DECODE_L2(a, t1, t2)   t1 = (a) >> 16; t2 = (a) & ((1 << 16) - 1)

typedef double ArgVal;		/* to ensure double alignment */




/*---------------------------------*
 * Global Variables                *
 *---------------------------------*/

/*---------------------------------*
 * Function Prototypes             *
 *---------------------------------*/

int Parse_Wam_File(char *file_name_in, int comment);

void Syntax_Error(char *s);



#define Add_Arg(ptr, type, val)   (*((type *) (ptr)) = (val) , (ptr)++)

#define Get_Arg(ptr, type, val)   ((val) = *((type *) (ptr)) , (ptr)++)
