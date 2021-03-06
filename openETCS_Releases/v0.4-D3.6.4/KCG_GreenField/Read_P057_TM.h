/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */
#ifndef _Read_P057_TM_H_
#define _Read_P057_TM_H_

#include "kcg_types.h"
#include "C_P057_compr_onboard_TM_convers.h"
#include "RECV_ReadPackets_TM_lib_interna.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM::Read_P057 */
extern void Read_P057_TM(
  /* TM::Read_P057::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P057::received */ kcg_bool *received,
  /* TM::Read_P057::P057_OBU_out */ P57_MovementAuthorityRequestPar *P057_OBU_out);

#endif /* _Read_P057_TM_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P057_TM.h
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

