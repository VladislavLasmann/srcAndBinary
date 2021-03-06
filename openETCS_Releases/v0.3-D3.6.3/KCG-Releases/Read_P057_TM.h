/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */
#ifndef _Read_P057_TM_H_
#define _Read_P057_TM_H_

#include "kcg_types.h"
#include "C_P057_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P057 */
extern void Read_P057_TM(
  /* TM::Read_P057::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P057::received */ kcg_bool *received,
  /* TM::Read_P057::P057_OBU_out */ P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *P057_OBU_out);

#endif /* _Read_P057_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P057_TM.h
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

