/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _Write_P003V1_TM_trackside_base
#define _Write_P003V1_TM_trackside_base

#include "kcg_types.h"
#include "SEND_WriteBaliseMessageHeader_T.h"
#include "SEND_MessageData_TM_lib_interna.h"
#include "C_P003V1_tracksim_compr_TM_conv.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_trackside_baseline2::Write_P003V1 */
extern void Write_P003V1_TM_trackside_basel(
  /* TM_trackside_baseline2::Write_P003V1::Packet003V1 */ P003V1_trackside_int_T_TM_basel *Packet003V1,
  /* TM_trackside_baseline2::Write_P003V1::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_trackside_baseline2::Write_P003V1::Error */ kcg_bool *Error,
  /* TM_trackside_baseline2::Write_P003V1::RadioPacketsOut */ CompressedPackets_T_Common_Type *RadioPacketsOut);

#endif /* _Write_P003V1_TM_trackside_base */
/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P003V1_TM_trackside_basel.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

