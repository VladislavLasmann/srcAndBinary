/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:37
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
** Generation date: 2015-12-07T14:47:37
*************************************************************$ */

