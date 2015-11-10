/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_412_0_AmsterdamUtrechtL2.h"

/* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_412_0 */
void Balise_412_0_AmsterdamUtrechtL2(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_412_0::B_data_in */ B_data_internal_T_InfraLib *B_data_in,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_412_0::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_412_0::PIG_nom */ kcg_int PIG_nom,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_412_0::B_data_out */ B_data_internal_T_InfraLib *B_data_out)
{
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_412_0::_L2 */
  static kcg_bool _L2;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_412_0::_L21 */
  static kcg_int _L21;
  
  /* 1 */ Balise_Localisation_InfraLib(B_data_in, Header, PIG_nom, &_L21, &_L2);
  /* ck__L2 */ if (_L2) {
    /* 1 */ Packets_BG412_AmsterdamUtrechtL(Header, B_data_in, B_data_out);
  }
  else {
    kcg_copy_B_data_internal_T_Infr(B_data_out, B_data_in);
  }
  (*B_data_out).pig_nom_0 = _L21;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_412_0_AmsterdamUtrechtL2.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

