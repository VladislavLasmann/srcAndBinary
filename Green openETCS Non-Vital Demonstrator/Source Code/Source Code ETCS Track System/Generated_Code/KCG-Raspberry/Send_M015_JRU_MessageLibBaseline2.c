/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M015_JRU_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_M015_JRU */
void Send_M015_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M015_JRU::M015 */M_015_int_T_TM_radio_messages *M015,
  /* MessageLibBaseline2::Send_M015_JRU::Message_Out */M_TrackTrain_Radio_T_TM_radio_messages *Message_Out)
{
  /* 1 */ C_M015_int_to_header_TM_RBC_conversions(M015, Message_Out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M015_JRU_MessageLibBaseline2.c
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

