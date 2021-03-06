/*
 * include/configs/eagle.h
 *     This file is Eagle board configuration.
 *
 * Copyright (C) 2015 Renesas Electronics Corporation
 *
 * SPDX-License-Identifier: GPL-2.0+
 */

#ifndef __EAGLE_H
#define __EAGLE_H

#undef DEBUG

#include "rcar-gen3-common.h"

/* Ethernet RAVB */
#define CONFIG_BITBANGMII
#define CONFIG_BITBANGMII_MULTI

/* Environment compatibility */
#undef CONFIG_ENV_SIZE_REDUND
#undef CONFIG_ENV_SECT_SIZE
#define CONFIG_ENV_SECT_SIZE	(256 * 1024)
#define CONFIG_ENV_OFFSET	0x700000

/* Board Clock */
/* XTAL_CLK : 33.33MHz */
#define CONFIG_SYS_CLK_FREQ	33333333u

/* Generic Timer Definitions (use in assembler source) */
#define COUNTER_FREQUENCY	0xFE502A	/* 16.66MHz from CPclk */

#endif /* __EAGLE_H */
