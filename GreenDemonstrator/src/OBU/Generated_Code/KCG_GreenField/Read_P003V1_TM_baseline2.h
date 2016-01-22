/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _Read_P003V1_TM_baseline2_H_
#define _Read_P003V1_TM_baseline2_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_interna.h"
#include "C_P003V1_compr_onboard_TM_conve.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_baseline2::Read_P003V1 */
extern void Read_P003V1_TM_baseline2(
  /* TM_baseline2::Read_P003V1::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_baseline2::Read_P003V1::received */ kcg_bool *received,
  /* TM_baseline2::Read_P003V1::P003V1_OBU_out */ P003V1_OBU_T_TM_baseline2 *P003V1_OBU_out);

#endif /* _Read_P003V1_TM_baseline2_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P003V1_TM_baseline2.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
