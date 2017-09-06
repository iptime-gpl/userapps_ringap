#ifndef QDSP5LPMMSGI_H
#define QDSP5LPMMSGI_H

/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*

    L P M   I N T E R N A L   M E S S A G E S

GENERAL DESCRIPTION
  This file contains defintions of format blocks of commands
  that are accepted by LPM Task

REFERENCES
  None

EXTERNALIZED FUNCTIONS
  None

Copyright(c) 1992 - 2008 by QUALCOMM, Incorporated.

This software is licensed under the terms of the GNU General Public
License version 2, as published by the Free Software Foundation, and
may be copied, distributed, and modified under those terms.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/
/*===========================================================================

                      EDIT HISTORY FOR FILE

This section contains comments describing changes made to this file.
Notice that changes are listed in reverse chronological order.

$Header: /usr/kcvsrep/MT762X_SDK_4300/RT288x_SDK/source/linux-2.6.36.x/drivers/staging/dream/include/mach/qdsp5/qdsp5lpmmsg.h,v 1.1.1.1 2015/01/14 09:44:42 mt7620 Exp $ $DateTime: 2014/05/07 23:03:57 $ $Author: mt7620 $
Revision History:

when       who     what, where, why
--------   ---     ----------------------------------------------------------
06/12/08   sv      initial version
===========================================================================*/

/*
 * Message to acknowledge CMD_LPM_IDLE command
 */

#define	LPM_MSG_IDLE_ACK	0x0000
#define	LPM_MSG_IDLE_ACK_LEN	sizeof(lpm_msg_idle_ack)

typedef struct {
} __attribute__((packed)) lpm_msg_idle_ack;


/*
 * Message to acknowledge CMD_LPM_START command
 */


#define	LPM_MSG_START_ACK	0x0001
#define	LPM_MSG_START_ACK_LEN	sizeof(lpm_msg_start_ack)


typedef struct {
} __attribute__((packed)) lpm_msg_start_ack;


/*
 * Message to notify the ARM that LPM processing is complete
 */

#define	LPM_MSG_DONE		0x0002
#define	LPM_MSG_DONE_LEN	sizeof(lpm_msg_done)

typedef struct {
} __attribute__((packed)) lpm_msg_done;


#endif
