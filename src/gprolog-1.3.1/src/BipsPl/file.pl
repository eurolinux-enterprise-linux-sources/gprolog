/*-------------------------------------------------------------------------* 
 * GNU Prolog                                                              * 
 *                                                                         * 
 * Part  : Prolog buit-in predicates                                       * 
 * File  : file.pl                                                         * 
 * Descr.: file name management                                            * 
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

/* $Id: file.pl,v 1.14 2009/01/23 11:24:13 diaz Exp $ */

:-	built_in.

'$use_file'.


absolute_file_name(F1, F2) :-
	set_bip_name(absolute_file_name, 2),
	'$call_c_test'('Pl_Absolute_File_Name_2'(F1, F2)).




decompose_file_name(Path, Dir, Prefix, Suffix) :-
	set_bip_name(decompose_file_name, 4),
	'$call_c_test'('Pl_Decompose_File_Name_4'(Path, Dir, Prefix, Suffix)).




prolog_file_name(PlFile, PlFile1) :-
	set_bip_name(prolog_file_name, 2),
	'$call_c_test'('Pl_Prolog_File_Name_2'(PlFile, PlFile1)).
