/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : Prolog engine                                                   *
 * File  : atom.h                                                          *
 * Descr.: atom table management - header file                             *
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

/* $Id: atom.h,v 1.15 2009/01/23 11:24:14 diaz Exp $ */

#if 1
#define OPTIM_1_CHAR_ATOM
#endif




/*---------------------------------*
 * Constants                       *
 *---------------------------------*/

	  /* Character Classification */

#define LA                         1	/* layout character      */
#define SC                         2	/* solo character        */
#define QT                         4	/* quote                 */
#define DQ                         8	/* double quote          */
#define BQ                        16	/* back quote            */
#define GR                        32	/* graphic char          */
#define PC                        64	/* punctuation character */
#define DI                       128	/* digit                 */
#define UL                       256	/* underline             */
#define CL                       512	/* capital letter        */
#define SL                      1024	/* small letter          */
#define CM                      2048	/* comment character (%) */
#define EX                      4096	/* extended character    */




#define ATOM_NIL                  1766



	  /* Atom Type */

#define IDENTIFIER_ATOM            0
#define GRAPHIC_ATOM               1
#define SOLO_ATOM                  2
#define OTHER_ATOM                 3




#define Is_Valid_Code(c)           ((unsigned long) (c)-1 <256-1)     /* 1<= c <256 */
#define Is_Valid_Byte(c)           ((unsigned long) (c) <256)	/* 0=< c <256 */
#define Is_Valid_Atom(a)           ((unsigned long) (a)<MAX_ATOM && \
                                    pl_atom_tbl[(a)].name!=NULL)



/*---------------------------------*
 * Type Definitions                *
 *---------------------------------*/


typedef struct			/* Atom properties                */
{				/* ------------------------------ */
  unsigned length:16;		/* its length (in characters)     */
  unsigned op_mask:4;		/* operator defined for the atom  */
  unsigned type:2;		/* IDENTIFIER GRAPHIC SOLO OTHER  */
  unsigned needs_quote:1;	/* needs ' around it ?            */
  unsigned needs_scan:1;	/* contains ' or control char ?   */
}
AtomProp;




typedef struct			/* Atom information               */
{				/* ------------------------------ */
  char *name;			/* key is <name> (the string)     */
  AtomProp prop;		/* associated properties          */
}
AtomInf;




/*---------------------------------*
 * Global Variables                *
 *---------------------------------*/

#ifdef ATOM_FILE

AtomInf pl_atom_tbl[MAX_ATOM];
int pl_nb_atom;

int pl_atom_void;
int pl_atom_curly_brackets;

int pl_atom_false;
int pl_atom_true;

int pl_atom_end_of_file;

#ifndef OPTIM_1_CHAR_ATOM
int atom_char[256];
#endif

    /* int     pl_char_type[256];                    see definition in atom.c */
char pl_char_conv[256];


    /* char    pl_escape_symbol[];                   see definition in atom.c */
    /* char    pl_escape_char  [];                   see definition in atom.c */

#else

extern AtomInf pl_atom_tbl[];
extern int pl_nb_atom;

extern int pl_atom_void;
extern int pl_atom_curly_brackets;

extern int pl_atom_false;
extern int pl_atom_true;

extern int pl_atom_end_of_file;

#ifndef OPTIM_1_CHAR_ATOM
extern int atom_char[];
#endif

extern char pl_char_conv[];
extern int pl_char_type[];

extern char pl_escape_symbol[];
extern char pl_escape_char[];

#endif




/*---------------------------------*
 * Function Prototypes             *
 *---------------------------------*/

void Pl_Init_Atom(void);

int Pl_Create_Allocate_Atom(char *name);

int Pl_Create_Atom(char *name);

WamWord FC Pl_Create_Atom_Tagged(char *name);

int Pl_Find_Atom(char *name);

int Pl_Gen_New_Atom(char *prefix, int hash);

int Pl_Find_Next_Atom(int last_atom);



#ifdef OPTIM_1_CHAR_ATOM

#define ATOM_CHAR(c)            ((int) (unsigned char) (c))

#else

#define ATOM_CHAR(c)            (atom_char[(int) (unsigned char) (c)])

#endif
