/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

void Build_RBC_LRBG_354_D_0027_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  /* 1 */ Send_M003_JRU_reset_MessageLibBaseline2(&outC->_1_Context_1);
  /* 1 */
  SendRadioPackets_LRBG_354_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003 */
void Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  outC->_L44 = kcg_true;
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, RadiaDataIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L38,
    &outC->_L1.packets);
  /* 1 */
  SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L38,
    &outC->Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_1.Radio_packets_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L39, &outC->_L1);
  if (kcg_true) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L39.packets,
      &outC->_L3);
  }
  /* 1 */
  Send_M003_JRU_MessageLibBaseline2(
    (M_003_int_T_TM_radio_messages *) &LRBG_354_D_00275_3_M003_Messages_426,
    &outC->_1_Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L42,
    &outC->_1_Context_1.Message_Out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L40, &outC->_L39);
  if (kcg_true) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L40.message,
      &outC->_L42);
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L43, &outC->_L40);
  if (kcg_true) {
    outC->_L43.message_sent = outC->_L44;
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L43);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

