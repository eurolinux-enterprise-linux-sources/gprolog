/*-------------------------------------------------------------------------* 
 * GNU Prolog                                                              * 
 *                                                                         * 
 * Part  : Prolog buit-in predicates                                       * 
 * File  : random.pl                                                       * 
 * Descr.: random number generator management                              * 
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

/* $Id: random.pl,v 1.14 2009/01/23 11:24:14 diaz Exp $ */

:-	built_in.

'$use_random'.



randomize :-
	'$call_c'('Pl_M_Randomize').




set_seed(Seed) :-
	set_bip_name(set_seed, 1),
	'$call_c'('Pl_Set_Seed_1'(Seed)).




get_seed(Seed) :-
	set_bip_name(get_seed, 1),
	'$call_c_test'('Pl_Get_Seed_1'(Seed)).




random(N) :-
	set_bip_name(random, 1),
	'$call_c'('Pl_Random_1'(N)).




random(L, U, N) :-
	set_bip_name(random, 3),
	'$call_c_test'('Pl_Random_3'(L, U, N)).
