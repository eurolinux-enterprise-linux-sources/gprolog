/*-------------------------------------------------------------------------* 
 * GNU Prolog                                                              * 
 *                                                                         * 
 * Part  : Prolog buit-in predicates                                       * 
 * File  : write.pl                                                        * 
 * Descr.: term output (write/1 and friends) management                    * 
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

/* $Id: write.pl,v 1.16 2009/01/23 11:24:14 diaz Exp $ */

:-	built_in.

'$use_write'.


/* warning: if you change this file check also definitions in const_io.pl */




write(Term) :-
	set_bip_name(write, 1),
	'$call_c'('Pl_Write_1'(Term)).

write(SorA, Term) :-
	set_bip_name(write, 2),
	'$call_c'('Pl_Write_2'(SorA, Term)).




writeq(Term) :-
	set_bip_name(writeq, 1),
	'$call_c'('Pl_Writeq_1'(Term)).

writeq(SorA, Term) :-
	set_bip_name(writeq, 2),
	'$call_c'('Pl_Writeq_2'(SorA, Term)).




write_canonical(Term) :-
	set_bip_name(write_canonical, 1),
	'$call_c'('Pl_Write_Canonical_1'(Term)).

write_canonical(SorA, Term) :-
	set_bip_name(write_canonical, 2),
	'$call_c'('Pl_Write_Canonical_2'(SorA, Term)).




display(Term) :-
	set_bip_name(display, 1),
	'$call_c'('Pl_Display_1'(Term)).

display(SorA, Term) :-
	set_bip_name(display, 2),
	'$call_c'('Pl_Display_2'(SorA, Term)).




          % see file print.pl for the definition of print/1-2




          % option mask in sys_var[0]: (see write_supp.h)
          %
          %    b5         b4        b3         b2           b1         b0
          %    0/1        0/1       0/1        0/1          0/1        0/1
          % portrayed  space_args  namevars  numbervars  ignore_ops  quoted
          %  0=false    0=false    0=false    0=false      0=false   0=false
          %  1=true     1=true     1=true     1=true       1=true    1=true
          %
          % max_depth in sys_var[1]
          % priority in sys_var[2]


write_term(Term, Options) :-
	set_bip_name(write_term, 2),
	'$set_write_defaults',
	'$get_write_options'(Options),
	'$call_c'('Pl_Write_Term_1'(Term)).


write_term(SorA, Term, Options) :-
	set_bip_name(write_term, 3),
	'$set_write_defaults',
	'$get_write_options'(Options),
	'$call_c'('Pl_Write_Term_2'(SorA, Term)).




'$set_write_defaults' :-
	'$sys_var_write'(0, 12),                               % default mask
	'$sys_var_write'(1, -1),
	'$sys_var_write'(2, 1200).




'$get_write_options'(Options) :-
	'$check_list'(Options),
	'$get_write_options1'(Options).


'$get_write_options1'([]).

'$get_write_options1'([X|Options]) :-
	'$get_write_options2'(X), !,
	'$get_write_options1'(Options).


'$get_write_options2'(X) :-
	var(X),
	'$pl_err_instantiation'.

'$get_write_options2'(quoted(X)) :-
	nonvar(X),
	(   X = false,
	    '$sys_var_reset_bit'(0, 0)
	;   X = true,
	    '$sys_var_set_bit'(0, 0)
	).

'$get_write_options2'(ignore_ops(X)) :-
	nonvar(X),
	(   X = false,
	    '$sys_var_reset_bit'(0, 1)
	;   X = true,
	    '$sys_var_set_bit'(0, 1)
	).

'$get_write_options2'(numbervars(X)) :-
	nonvar(X),
	(   X = false,
	    '$sys_var_reset_bit'(0, 2)
	;   X = true,
	    '$sys_var_set_bit'(0, 2)
	).

'$get_write_options2'(namevars(X)) :-
	nonvar(X),
	(   X = false,
	    '$sys_var_reset_bit'(0, 3)
	;   X = true,
	    '$sys_var_set_bit'(0, 3)
	).

'$get_write_options2'(space_args(X)) :-
	nonvar(X),
	(   X = false,
	    '$sys_var_reset_bit'(0, 4)
	;   X = true,
	    '$sys_var_set_bit'(0, 4)
	).

'$get_write_options2'(portrayed(X)) :-
	nonvar(X),
	(   X = false,
	    '$sys_var_reset_bit'(0, 5)
	;   X = true,
	    '$sys_var_set_bit'(0, 5)
	).

'$get_write_options2'(max_depth(X)) :-
	integer(X),
	'$sys_var_write'(1, X).

'$get_write_options2'(priority(X)) :-
	integer(X),
	'$sys_var_write'(2, X).

'$get_write_options2'(X) :-
	'$pl_err_domain'(write_option, X).




nl :-
	set_bip_name(nl, 0),
	'$call_c'('Pl_Nl_0').

nl(SorA) :-
	set_bip_name(nl, 1),
	'$call_c'('Pl_Nl_1'(SorA)).
