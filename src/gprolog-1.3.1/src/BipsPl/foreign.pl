/*-------------------------------------------------------------------------* 
 * GNU Prolog                                                              * 
 *                                                                         * 
 * Part  : Prolog buit-in predicates                                       * 
 * File  : foreign.pl                                                      * 
 * Descr.: foreign interface                                               * 
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

/* $Id: foreign.pl,v 1.13 2009/01/23 11:24:13 diaz Exp $ */

:-	built_in.

       % $force_foreign_link is used by pl2wam to force the link of
       % foreign.o and then foreign_supp.o needed by Ma2Asm for translations
       % using foreign_long[] and foreign_double[] indirectly via registers

'$force_foreign_link'.




'$pl_query_recover_alt' :-          % used by C code to create a choice-point
	'$call_c'('Pl_Query_Recover_Alt_0'),
	fail.
