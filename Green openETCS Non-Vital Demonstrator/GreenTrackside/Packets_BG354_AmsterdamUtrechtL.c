/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG354_AmsterdamUtrechtL.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG354 */
void Packets_BG354_AmsterdamUtrechtL(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG354::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG354::Balise_data_in */ B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG354::Balise_data_out */ B_data_internal_T_InfraLib *Balise_data_out)
{
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG354 */
  static CompressedPackets_T_Common_Type tmp1;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG354 */
  static CompressedPackets_T_Common_Type tmp;
  
  kcg_copy_B_data_internal_T_Infr(Balise_data_out, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_i(&(*Balise_data_out).header, Header);
  /* 1 */
  Send_P042_MessageLibBaseline2(
    &(*Balise_data_in).packets,
    (P042_trackside_int_T_TM *) &BG354_P042_Packets426,
    &tmp);
  /* 1 */
  Send_P046_MessageLibBaseline2(
    &tmp,
    (P046_trackside_int_T_TM *) &BG354_P046_N_Packets426,
    &tmp1);
  /* 2 */
  Send_P046_MessageLibBaseline2(
    &tmp1,
    (P046_trackside_int_T_TM *) &BG354_P046_R_Packets426,
    &tmp);
  /* 1 */
  Send_P003V1_MessageLibBaseline2(
    &tmp,
    (P003V1_trackside_int_T_TM_basel *) &BG354_P003_Packets426,
    &tmp1);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &tmp1,
    (P255_trackside_int_T_TM *) &BGXXX_P255_Packets426,
    &(*Balise_data_out).packets);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Packets_BG354_AmsterdamUtrechtL.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

