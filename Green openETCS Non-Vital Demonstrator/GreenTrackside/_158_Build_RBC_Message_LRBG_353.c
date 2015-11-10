/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_158_Build_RBC_Message_LRBG_353.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00319_2_M032 */
void _158_Build_RBC_Message_LRBG_353(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00319_2_M032::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00319_2_M032::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  kcg_copy_R_data_internal_T_Infr(R_data_out, RadiaDataIn);
  /* 1 */
  No_Radio_Packets_RadioLib(&(*RadiaDataIn).packets, &(*R_data_out).packets);
  /* 1 */
  Send_M032_JRU_MessageLibBaselin(
    (M_032_int_T_TM_radio_messages *) &LRBG_353_D_00319_2_M032_Message,
    &(*R_data_out).message);
  (*R_data_out).message_sent = kcg_true;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _158_Build_RBC_Message_LRBG_353.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

