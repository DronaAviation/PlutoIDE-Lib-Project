/*******************************************************************************
 #  SPDX-License-Identifier: GPL-3.0-or-later                                  #
 #  SPDX-FileCopyrightText: 2025 Drona Aviation                                #
 #  -------------------------------------------------------------------------  #
 #  Copyright (c) 2025 Drona Aviation                                          #
 #  All rights reserved.                                                       #
 #  -------------------------------------------------------------------------  #
 #  Author: Ashish Jaiswal (MechAsh) <AJ>                                      #
 #  Project: MagisV2                                                           #
 #  File: \src\main\API\PlutoPilot.h                                           #
 #  Created Date: Sat, 22nd Feb 2025                                           #
 #  Brief:                                                                     #
 #  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  #
 #  Last Modified: Sun, 7th Sep 2025                                           #
 #  Modified By: AJ                                                            #
 #  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  #
 #  HISTORY:                                                                   #
 #  Date      	By	Comments                                                   #
 #  ----------	---	---------------------------------------------------------  #
*******************************************************************************/

#ifndef _PlutoPilot_H_
#define _PlutoPilot_H_

#include "RxConfig.h"
#include "Peripherals.h"
#include "Status-LED.h"
#include "Motor.h"
#include "BMS.h"
#include "FC-Data.h"
#include "RC-Interface.h"
#include "FC-Control.h"
#include "FC-Config.h"
#include "Scheduler-Timer.h"
#include "Debugging.h"
#include "Serial-IO.h"

void plutoRxConfig ( void );

void plutoInit ( void );

void onLoopStart ( void );

void plutoLoop ( void );

void onLoopFinish ( void );

#endif
