/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_381_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h"

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_381 */
void Balise_Group_381_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_381::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_381::TrainPos */kcg_real _2_TrainPos,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_381::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_381::BG_message_out */CompressedBaliseMessage_TM *BG_message_out)
{
  static B_data_internal_T_InfraLib tmp1;
  static B_data_internal_T_InfraLib tmp;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_381::_L14 */
  static kcg_bool _L14;
  
  /* 1 */ Balise_Group_Init_InfraLib(_2_TrainPos, Engineering_Data, &tmp1);
  /* 1 */
  Balise_381_1_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (BaliseTelegramHeader_int_T_TM *) &BG381_header_B1_Balises426,
    0,
    &tmp);
  /* 1 */
  Balise_381_0_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (BaliseTelegramHeader_int_T_TM *) &BG381_header_B0_Balises426,
    1,
    &tmp1);
  /* 1 */
  Balise_Group_Close_InfraLib(&tmp1, BG_message_in, &_L14, BG_message_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_381_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

