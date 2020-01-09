/*-------------------------------------------------------------------------* 
 * GNU Prolog                                                              * 
 *                                                                         * 
 * Part  : Prolog buit-in predicates                                       * 
 * File  : le_interf.pl                                                    * 
 * Descr.: linedit interface management                                    * 
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

/* $Id: le_interf.pl,v 1.14 2009/01/23 11:24:13 diaz Exp $ */

:-	built_in.

'$use_le_interf'.


get_linedit_prompt(Prompt) :-
	set_bip_name(get_linedit_prompt, 1),
	'$call_c_test'('Pl_Get_Linedit_Prompt_1'(Prompt)).




'$get_linedit_prompt'(Prompt) :-
	'$call_c_test'('Pl_Get_Linedit_Prompt_1'(Prompt)).




set_linedit_prompt(Prompt) :-
	set_bip_name(set_linedit_prompt, 1),
	'$call_c'('Pl_Set_Linedit_Prompt_1'(Prompt)).




'$set_linedit_prompt'(Prompt) :-
	'$call_c'('Pl_Set_Linedit_Prompt_1'(Prompt)).




add_linedit_completion(Compl) :-
	set_bip_name(add_linedit_completion, 1),
	'$call_c_test'('Pl_Add_Linedit_Completion_1'(Compl)).




find_linedit_completion(Prefix, Compl) :-
	set_bip_name(find_linedit_completion, 2),
	'$call_c_test'('Pl_Find_Linedit_Completion_2'(Prefix, Compl)).



'$find_linedit_completion_alt' :-   % used by C code to create a choice-point
	'$call_c_test'('Pl_Find_Linedit_Completion_Alt_0').
