/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

void SendRadioPackets_LRBG_354_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  /* 1 */ Send_P065_reset_MessageLibBaseline2(&outC->_6_Context_1);
  /* 1 */ Send_P041_reset_MessageLibBaseline2(&outC->_5_Context_1);
  /* 1 */ Send_P005_reset_MessageLibBaseline2(&outC->_4_Context_1);
  /* 1 */ Send_P003V1_reset_MessageLibBaseline2(&outC->_3_Context_1);
  /* 1 */ Send_P027V1_reset_MessageLibBaseline2(&outC->_2_Context_1);
  /* 1 */ Send_P021_reset_MessageLibBaseline2(&outC->_1_Context_1);
  /* 1 */ Send_P015_reset_MessageLibBaseline2(&outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003 */
void SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L32, Radio_packets_in);
  /* 1 */
  Send_P015_MessageLibBaseline2(
    &outC->_L32,
    (P015_trackside_int_T_TM *) &LRBG354_P015_1_Packets426,
    &outC->Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->Context_1.B_data_out);
  /* 1 */
  Send_P021_MessageLibBaseline2(
    &outC->_L11,
    (P021_trackside_int_T_TM *) &LRBG354_P021_1_Packets426,
    &outC->_1_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->_1_Context_1.B_data_out);
  /* 1 */
  Send_P027V1_MessageLibBaseline2(
    &outC->_L2,
    (P027V1_trackside_int_T_TM_baseline2 *) &LRBG354_P027_1_Packets426,
    &outC->_2_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->_2_Context_1.B_data_out);
  /* 1 */
  Send_P003V1_MessageLibBaseline2(
    &outC->_L3,
    (P003V1_trackside_int_T_TM_baseline2 *) &LRBG354_P003_1_Packets426,
    &outC->_3_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->_3_Context_1.B_data_out);
  /* 1 */
  Send_P005_MessageLibBaseline2(
    &outC->_L4,
    (P005_trackside_int_T_TM *) &LRBG354_P005_1_Packets426,
    &outC->_4_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L5,
    &outC->_4_Context_1.B_data_out);
  /* 1 */
  Send_P041_MessageLibBaseline2(
    &outC->_L5,
    (P041_trackside_int_T_TM *) &LRBG354_P041_1_Packets426,
    &outC->_5_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L6,
    &outC->_5_Context_1.B_data_out);
  /* 1 */
  Send_P065_MessageLibBaseline2(
    &outC->_L6,
    (P065_trackside_int_T_TM *) &LRBG354_P065_1_Packets426,
    &outC->_6_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L7,
    &outC->_6_Context_1.B_data_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Radio_packets_out,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

