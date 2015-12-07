/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_M129_to_header_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_M129_to_header */
void C_M129_to_header_TM_RBC_conversions(
  /* TM_RBC_conversions::C_M129_to_header::Message_Data_in */ M_129_T_TM_radio_messages *Message_Data_in,
  /* TM_RBC_conversions::C_M129_to_header::Message_Header_Out */ M_TrainTrack_MessageHd_T_TM_radio_messages *Message_Header_Out)
{
  (*Message_Header_Out).valid = (*Message_Data_in).valid;
  (*Message_Header_Out).field1 = 0;
  (*Message_Header_Out).field2 = 0;
  (*Message_Header_Out).field3 = 0;
  (*Message_Header_Out).nid_message = /* 1 */
    CAST_NID_MESSAGE_to_int_TM_conversions((*Message_Data_in).nid_message);
  (*Message_Header_Out).l_message = /* 1 */
    CAST_L_MESSAGE_to_int_TM_conversions((*Message_Data_in).l_message);
  (*Message_Header_Out).t_train = /* 1 */
    CAST_T_TRAIN_to_int_TM_conversions((*Message_Data_in).t_train);
  (*Message_Header_Out).nid_engine = /* 1 */
    CAST_NID_ENGINE_to_int_TM_conversions((*Message_Data_in).nid_engine);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_M129_to_header_TM_RBC_conversions.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

