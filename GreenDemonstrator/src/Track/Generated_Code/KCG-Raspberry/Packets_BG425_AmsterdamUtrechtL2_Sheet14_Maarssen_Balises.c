/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG425_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Packets_BG425 */
void Packets_BG425_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Packets_BG425::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Packets_BG425::Balise_data_in */B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Packets_BG425::Balise_data_out */B_data_internal_T_InfraLib *Balise_data_out)
{
  kcg_copy_B_data_internal_T_InfraLib(Balise_data_out, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&(*Balise_data_out).header, Header);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &(*Balise_data_in).packets,
    (P255_trackside_int_T_TM *) &BGxxx_P255_Packets426,
    &(*Balise_data_out).packets);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Packets_BG425_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

