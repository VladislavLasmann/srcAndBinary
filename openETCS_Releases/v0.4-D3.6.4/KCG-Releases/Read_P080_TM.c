/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P080_TM.h"

/* TM::Read_P080 */
void Read_P080_TM(
  /* TM::Read_P080::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P080::received */ kcg_bool *received,
  /* TM::Read_P080::P080_OBU_out */ P080_OBU_T_TM *P080_OBU_out)
{
  /* TM::Read_P080::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM::Read_P080::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    80032000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P080_compr_onboard_TM_conversions(&_L5, &_L30, P080_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P080_TM.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

