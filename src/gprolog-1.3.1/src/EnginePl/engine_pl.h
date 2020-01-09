/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : Prolog engine                                                   *
 * File  : engine_pl.h                                                     *
 * Descr.: general header file                                             *
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

/* $Id: engine_pl.h,v 1.12 2009/01/23 11:24:14 diaz Exp $ */

#include "gp_config.h"
#include "pl_params.h"
#include "hash.h"
#include "bool.h"
#include "wam_regs.h"
#include "wam_archi.h"
#include "engine.h"
#include "atom.h"
#include "pred.h"
#include "misc.h"
#include "oper.h"
#include "machine1.h"
#include "machine.h"
#include "obj_chain.h"
#include "wam_inst.h"
#include "if_no_fd.h"
