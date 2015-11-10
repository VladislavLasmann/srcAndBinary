/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _Write_P005_TM_trackside_H_
#define _Write_P005_TM_trackside_H_

#include "kcg_types.h"
#include "SEND_WriteBaliseMessageHeader_T.h"
#include "SEND_MessageData_TM_lib_interna.h"
#include "C_P005_tracksim_compr_TM_conver.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_trackside::Write_P005 */
extern void Write_P005_TM_trackside(
  /* TM_trackside::Write_P005::Packet05 */ P005_trackside_int_T_TM *Packet05,
  /* TM_trackside::Write_P005::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_trackside::Write_P005::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P005::RadioPacketsOut */ CompressedPackets_T_Common_Type *RadioPacketsOut);

#endif /* _Write_P005_TM_trackside_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P005_TM_trackside.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
