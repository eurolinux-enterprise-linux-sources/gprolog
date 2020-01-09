/*-------------------------------------------------------------------------* 
 * GNU Prolog                                                              * 
 *                                                                         * 
 * Part  : Prolog buit-in predicates                                       * 
 * File  : print.pl                                                        * 
 * Descr.: term print management                                           * 
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

/* $Id: print.pl,v 1.16 2009/01/23 11:24:14 diaz Exp $ */

:-	built_in.

'$use_print'.


print(Term) :-
	set_bip_name(print, 1),
	'$call_c'('Pl_Print_1'(Term)).

print(SorA, Term) :-
	set_bip_name(print, 2),
	'$call_c'('Pl_Print_2'(SorA, Term)).




'$try_portray'(Term) :-
	'$current_predicate'(portray / 1),
	g_assign('$portray_ok', 0),
	'$catch'((portray(Term), !), Err, (format(top_level_output, 'exception from portray/1: ~q~n', [Err]), fail), portray, 1, false),
	g_assign('$portray_ok', 1),
	fail.

'$try_portray'(_) :-
	g_read('$portray_ok', 1).
	



get_print_stream(Stream) :-
	set_bip_name(get_print_stream, 1),
	'$check_stream_or_var'(Stream, Stm),
	'$call_c'('Pl_Get_Print_Stm_1'(Stm)).
