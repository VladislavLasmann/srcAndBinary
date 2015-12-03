/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

void Balise_352_1_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  /* 1 */
  Packets_BG352_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_1_Context_1);
  /* 1 */ Balise_Localisation_reset_InfraLib(&outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_352_1 */
void Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_352_1::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_352_1::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_352_1::PIG_nom */kcg_int PIG_nom,
  outC_Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  B_data_internal_T_InfraLib tmp;
  
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L23, Header);
  outC->_L20 = PIG_nom;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L19, Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L15, B_data_in);
  /* 1 */
  Balise_Localisation_InfraLib(
    &outC->_L15,
    &outC->_L19,
    outC->_L20,
    &outC->Context_1);
  outC->_L21 = outC->Context_1.PIG_0_out;
  outC->_L2 = outC->Context_1.TrainPass;
  outC->tmp = outC->_L2;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L5, B_data_in);
  if (outC->tmp) {
    /* 1 */
    Packets_BG352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
      &outC->_L23,
      &outC->_L5,
      &outC->_1_Context_1);
    kcg_copy_B_data_internal_T_InfraLib(
      &tmp,
      &outC->_1_Context_1.Balise_data_out);
    kcg_copy_B_data_internal_T_InfraLib(&outC->_L4, &tmp);
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&outC->_L4, &outC->_L5);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L17, &outC->_L4);
  if (kcg_true) {
    outC->_L17.pig_nom_0 = outC->_L21;
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->B_data_out, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

