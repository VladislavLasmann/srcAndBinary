/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG402_AmsterdamUtrechtL.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402 */
void Packets_BG402_AmsterdamUtrechtL(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::Balise_data_in */ B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::Balise_data_out */ B_data_internal_T_InfraLib *Balise_data_out)
{
  kcg_copy_B_data_internal_T_Infr(Balise_data_out, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_i(&(*Balise_data_out).header, Header);
  kcg_copy_CompressedPackets_T_Co(
    &(*Balise_data_out).packets,
    &(*Balise_data_in).packets);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Packets_BG402_AmsterdamUtrechtL.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

