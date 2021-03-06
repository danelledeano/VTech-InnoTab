/******************************************************************************
 *
 * Copyright(c) 2007 - 2010 Realtek Corporation. All rights reserved.
 *                                        
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#ifndef _RTL871X_HT_H_
#define _RTL871X_HT_H_

#include <drv_conf.h>
#include <osdep_service.h>
#include "wifi.h"

struct ht_priv
{
	unsigned int	ht_option;	
	unsigned int	ampdu_enable;//for enable Tx A-MPDU
	//unsigned char	baddbareq_issued[16];	
	unsigned int	tx_amsdu_enable;//for enable Tx A-MSDU
	unsigned int	tx_amdsu_maxlen; // 1: 8k, 0:4k ; default:8k, for tx
	unsigned int	rx_ampdu_maxlen; //for rx reordering ctrl win_sz, updated when join_callback.
	
	unsigned char	bwmode;//
	unsigned char ch_offset;//PRIME_CHNL_OFFSET
	unsigned char sgi;//short GI
	
	//for processing Tx A-MPDU
	unsigned char		agg_enable_bitmap;
	//unsigned char		ADDBA_retry_count;
	unsigned char		candidate_tid_bitmap;
	
	struct ieee80211_ht_cap ht_cap;
	
};

#endif	//_RTL871X_HT_H_

