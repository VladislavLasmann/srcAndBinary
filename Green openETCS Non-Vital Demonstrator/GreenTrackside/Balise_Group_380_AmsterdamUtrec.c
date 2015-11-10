/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_380_AmsterdamUtrec.h"

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_380 */
void Balise_Group_380_AmsterdamUtrec(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_380::BG_message_in */ CompressedBaliseMessage_TM *BG_message_in,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_380::TrainPos */ kcg_real TrainPos,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_380::Engineering_Data */ BaliseGroupData_TM *Engineering_Data,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_380::BG_message_out */ CompressedBaliseMessage_TM *BG_message_out)
{
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_380 */
  static B_data_internal_T_InfraLib tmp1;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_380 */
  static B_data_internal_T_InfraLib tmp;
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_380::_L14 */
  static kcg_bool _L14;
  
  /* 1 */ Balise_Group_Init_InfraLib(TrainPos, Engineering_Data, &tmp1);
  /* 1 */
  Balise_380_1_AmsterdamUtrechtL2(
    &tmp1,
    (BaliseTelegramHeader_int_T_TM *) &BG380_header_B1_Balises426,
    0,
    &tmp);
  /* 1 */
  Balise_380_0_AmsterdamUtrechtL2(
    &tmp,
    (BaliseTelegramHeader_int_T_TM *) &BG380_header_B0_Balises426,
    1,
    &tmp1);
  /* 1 */
  Balise_Group_Close_InfraLib(&tmp1, BG_message_in, &_L14, BG_message_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_380_AmsterdamUtrec.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
