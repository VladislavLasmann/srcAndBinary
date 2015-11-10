/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

void Balise_Group_352_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  /* 1 */ Balise_Group_Close_reset_InfraLib(&outC->_3_Context_1);
  /* 1 */
  Balise_352_1_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Balise_352_0_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_1_Context_1);
  /* 1 */ Balise_Group_Init_reset_InfraLib(&outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352 */
void Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352::TrainPos */kcg_real TrainPos,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  kcg_bool noname;
  
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L29, BG_message_in);
  outC->_L28 = TrainPos;
  kcg_copy_BaliseGroupData_TM(&outC->_L19, Engineering_Data);
  /* 1 */ Balise_Group_Init_InfraLib(outC->_L28, &outC->_L19, &outC->Context_1);
  kcg_copy_B_data_internal_T_InfraLib(
    &outC->_L11,
    &outC->Context_1.BG_internal_out);
  kcg_copy_B_data_internal_T_InfraLib(&outC->BaliseDataIn, &outC->_L11);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L9, &outC->BaliseDataIn);
  outC->_L20 = 0;
  /* 1 */
  Balise_352_0_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_L9,
    (BaliseTelegramHeader_int_T_TM *) &BG352_header_B0_Balises426,
    outC->_L20,
    &outC->_1_Context_1);
  kcg_copy_B_data_internal_T_InfraLib(
    &outC->_L8,
    &outC->_1_Context_1.B_data_out);
  outC->_L21 = 1;
  /* 1 */
  Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_L8,
    (BaliseTelegramHeader_int_T_TM *) &BG352_header_B1_Balises426,
    outC->_L21,
    &outC->_2_Context_1);
  kcg_copy_B_data_internal_T_InfraLib(
    &outC->_L7,
    &outC->_2_Context_1.B_data_out);
  kcg_copy_B_data_internal_T_InfraLib(&outC->BaliseDataOut, &outC->_L7);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L16, &outC->BaliseDataOut);
  /* 1 */
  Balise_Group_Close_InfraLib(&outC->_L16, &outC->_L29, &outC->_3_Context_1);
  outC->_L14 = outC->_3_Context_1.Error_out;
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->_3_Context_1.BG_message_out);
  noname = outC->_L14;
  kcg_copy_CompressedBaliseMessage_TM(&outC->BG_message_out, &outC->_L13);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

