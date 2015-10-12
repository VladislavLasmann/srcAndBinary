/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _Read_P015_TM_H_
#define _Read_P015_TM_H_

#include "kcg_types.h"
#include "C_P015_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P015 */
extern void Read_P015_TM(
  /* TM::Read_P015::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P015::received */ kcg_bool *received,
  /* TM::Read_P015::P015_OBU_out */ P015_OBU_T_TM *P015_OBU_out);

#endif /* _Read_P015_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P015_TM.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

