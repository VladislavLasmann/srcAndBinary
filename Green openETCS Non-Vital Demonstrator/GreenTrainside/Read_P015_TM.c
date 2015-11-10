/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P015_TM.h"

/* TM::Read_P015 */
void Read_P015_TM(
  /* TM::Read_P015::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM::Read_P015::received */ kcg_bool *received,
  /* TM::Read_P015::P015_OBU_out */ P015_OBU_T_TM *P015_OBU_out)
{
  /* TM::Read_P015::_L30 */
  static MetadataElement_T_Common_Types_ _L30;
  /* TM::Read_P015::_L5 */
  static CompressedPacketData_T_Common_T _L5;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_interna(
    Message_IN,
    15032000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    received);
  /* 1 */ C_P015_compr_onboard_TM_convers(&_L5, &_L30, P015_OBU_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P015_TM.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

