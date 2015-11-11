/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_M003_int__to_header_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_M003_int__to_header */
void C_M003_int__to_header_TM_RBC_conversions(
  /* TM_RBC_conversions::C_M003_int__to_header::Message_Data_in */M_003_int_T_TM_radio_messages *Message_Data_in,
  /* TM_RBC_conversions::C_M003_int__to_header::Message_Header_Out */M_TrackTrain_Radio_T_TM_radio_messages *Message_Header_Out)
{
  (*Message_Header_Out).valid = (*Message_Data_in).valid;
  (*Message_Header_Out).nid_message = (*Message_Data_in).nid_message;
  (*Message_Header_Out).l_message = (*Message_Data_in).l_message;
  (*Message_Header_Out).t_train = (*Message_Data_in).t_train;
  (*Message_Header_Out).field1 = (*Message_Data_in).m_ack;
  (*Message_Header_Out).field2 = (*Message_Data_in).nid_lrbg;
  (*Message_Header_Out).field3 = 0;
  (*Message_Header_Out).field4 = 0;
  (*Message_Header_Out).field5 = 0;
  (*Message_Header_Out).field6 = 0;
  (*Message_Header_Out).field7 = 0;
  (*Message_Header_Out).field8 = 0;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_M003_int__to_header_TM_RBC_conversions.c
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

