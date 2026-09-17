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


#ifndef _PIKE_CONFIG_H
#define _PIKE_CONFIG_H

#include "../../core/cfg/cfg.h"

struct cfg_group_pike
{
	int sampling_time_unit;
	int reqs_density_per_unit;
	int remove_latency;
};

extern struct cfg_group_pike default_pike_cfg;
extern void *pike_cfg;
extern cfg_def_t pike_cfg_def[];

#endif
