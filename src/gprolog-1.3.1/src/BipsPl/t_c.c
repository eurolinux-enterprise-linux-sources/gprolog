/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : Prolog buit-in predicates                                       *
 * File  : t_c.c                                                           *
 * Descr.: test - C part                                                   *
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

/* $Id: t_c.c,v 1.14 2002/05/07 17:45:47 diaz Exp $ */

#include <stdio.h>

#if 0
#include "engine_pl.h"
#include "bips_pl.h"
#endif



/*---------------------------------*
 * Constants                       *
 *---------------------------------*/

/*---------------------------------*
 * Type Definitions                *
 *---------------------------------*/

/*---------------------------------*
 * Global Variables                *
 *---------------------------------*/

/*---------------------------------*
 * Function Prototypes             *
 *---------------------------------*/

/*-------------------------------------------------------------------------*
 *                                                                         *
 *                                                                         *
 *-------------------------------------------------------------------------*/

#if 0

#include <gprolog.h>
#include <stdlib.h>

Bool segfault( char *in, PlTerm out )
{
        if( strcmp(in,"yes") == 0 ) {
                printf("Calling system error\n");
                Pl_Err_System(Pl_Create_Atom("segfault_system_error_test"));
                printf("return\n");
                return FALSE;
        } else {
                printf("unifying\n");
                Pl_Un_String_Check("Hello, World!", out);
                printf("return\n");
                return TRUE;
        }
        return FALSE;
}

#endif


#if 0
#include "gprolog.h"


int i=0;
Bool malloc_test(int size)
{
  void * tmp;
  i++;
  tmp = malloc(size);
  if (tmp == NULL)
    {
      printf("FAILED AT %d MB\n", i);
      exit(1);
    }
  printf("OK at: %lx\n", tmp);
  return TRUE;
}

#endif


#if 0
#include "gprolog.h"
int i=0;
Bool malloc_test(int size)
{
  void * tmp;

  i++;
  tmp = malloc(size);
  if (tmp == NULL)
    {
      Pl_Err_System(Pl_Create_Atom("malloc_test exception"));
    }
  printf("OK at: %p\n", tmp);
  return TRUE;
}

#endif

#if 0
int i=0;
Bool malloc_test(int size)
{
  Pl_Err_System(Pl_Create_Atom("malloc_test exception"));
  return TRUE;
}
#endif


#if 0
#include <string.h>
#include "gprolog.h" 
Bool
calling_c(PlTerm In,PlTerm* Out)
{
  PlTerm arg[2];
  int i;
  
  for(i=0;i<2;i++)
    arg[i]=X(1);

  Pl_Query_Begin(TRUE);
  Pl_Query_Call(Pl_Find_Atom("write"),1,&In);
  Pl_Query_End(PL_RECOVER);


  for(i=0;i<2;i++)
    X(1)=arg[i];

  *Out = Pl_Mk_Atom(atom_nil);

  return PL_SUCCESS; 
} 




Bool 
Is_Kbd_Empty(void)
{
  /* to put in stream_supp.c
  if (tty_ptr != NULL && *tty_ptr != '\0')
    return FALSE;
  */
  int result = !Pl_LE_Kbd_Is_Not_Empty();
  printf("result: %d\n", result);
  return result;
}
#endif
