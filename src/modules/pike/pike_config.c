/*
 * PIKE module
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Kamailio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/*!
 * \file
 * \brief PIKE :: Configuration
 * \ingroup pike
 */


#include "../../core/cfg/cfg.h"

#include "pike_config.h"
#include "ip_tree.h"

/* clang-format off */
struct cfg_group_pike default_pike_cfg = {
	2,	/* sampling_time_unit */
	30,	/* reqs_density_per_unit */
	120	/* remove_latency */
};

void *pike_cfg = &default_pike_cfg;

cfg_def_t pike_cfg_def[] = {
	{"sampling_time_unit",    CFG_VAR_INT | CFG_ATOMIC, 0, 0, 0, 0,
		"Time unit (in seconds) used for sampling the incoming hits."},
	{"reqs_density_per_unit", CFG_VAR_INT | CFG_ATOMIC, 0, 0, 0, 0,
		"Number of requests per sampling time unit that triggers the HOT/WARM state."},
	{"remove_latency",        CFG_VAR_INT | CFG_ATOMIC, 0, 0, 0, 0,
		"Time (in seconds) after which an unused leaf/node is removed from the tree."},
	{0, 0, 0, 0, 0, 0}
};
/* clang-format on */
