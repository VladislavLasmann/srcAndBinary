/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M032_JRU_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_M032_JRU */
void Send_M032_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M032_JRU::M032 */M_032_int_T_TM_radio_messages *M032,
  /* MessageLibBaseline2::Send_M032_JRU::Message_Out */M_TrackTrain_Radio_T_TM_radio_messages *Message_Out)
{
  /* 1 */ C_M032_int_to_header_TM_radio_messages(M032, Message_Out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M032_JRU_MessageLibBaseline2.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

