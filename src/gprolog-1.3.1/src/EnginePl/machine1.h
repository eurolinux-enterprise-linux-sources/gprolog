/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : Prolog engine + Compiler                                        *
 * File  : machine1.h                                                      *
 * Descr.: machine dependent features - Header file                        *
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

/* $Id: machine1.h,v 1.14 2009/01/23 11:24:14 diaz Exp $ */

#include <stdio.h>

/*---------------------------------*
 * Constants                       *
 *---------------------------------*/

#define M_OS_UNIX                  0
#define M_OS_WINDOWS               1
#define M_OS_WINDOWS_NT            2




/*---------------------------------*
 * Type Definitions                *
 *---------------------------------*/

/*---------------------------------*
 * Global Variables                *
 *---------------------------------*/

#ifdef MACHINE1_FILE

int pl_m_os_type;
char pl_m_architecture[32];
char pl_m_os_version[256];

#else

extern int pl_m_os_type;
extern char pl_m_architecture[];
extern char pl_m_os_version[];

#endif




/*---------------------------------*
 * Function Prototypes             *
 *---------------------------------*/

void Pl_Init_Machine1(void);

char **Pl_M_Create_Shell_Command(char *cmd);

char **Pl_M_Cmd_Line_To_Argv(char *cmd, int *argc);

int Pl_M_Shell(char *cmd);

int Pl_M_Spawn(char *arg[]);

int Pl_M_Spawn_Redirect(char *arg[], int detach,
		     FILE **f_in, FILE **f_out, FILE **f_err);

int Pl_M_Get_Status(int pid);



char *Pl_M_Mktemp(char *tmp_template);

char *Pl_M_Tempnam(char *dir, char *pfx);



#define   DBGPRINTF             printf
