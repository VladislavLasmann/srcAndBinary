/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG351_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG351 */
void Packets_BG351_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG351::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG351::Balise_data_in */B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG351::Balise_data_out */B_data_internal_T_InfraLib *Balise_data_out)
{
  kcg_copy_B_data_internal_T_InfraLib(Balise_data_out, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&(*Balise_data_out).header, Header);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &(*Balise_data_in).packets,
    (P255_trackside_int_T_TM *) &BGXXX_P255_Packets426,
    &(*Balise_data_out).packets);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Packets_BG351_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

