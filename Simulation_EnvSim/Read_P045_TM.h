/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:56
*************************************************************$ */
#ifndef _Read_P045_TM_H_
#define _Read_P045_TM_H_

#include "kcg_types.h"
#include "C_P045_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* TM::Read_P045 */
extern void Read_P045_TM(
  /* TM::Read_P045::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P045::received */kcg_bool *received,
  /* TM::Read_P045::P045_OBU_out */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *P045_OBU_out);

#endif /* _Read_P045_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P045_TM.h
** Generation date: 2015-11-12T10:46:56
*************************************************************$ */

