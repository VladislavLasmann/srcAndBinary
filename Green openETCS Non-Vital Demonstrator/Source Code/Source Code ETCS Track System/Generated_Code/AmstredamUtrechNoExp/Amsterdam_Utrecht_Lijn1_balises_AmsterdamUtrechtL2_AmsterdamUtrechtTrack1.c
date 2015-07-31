/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises */
void Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::TrainPosSim_in */kcg_real TrainPosSim_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::BaliseMessage */CompressedBaliseMessage_TM *BaliseMessage)
{
  static TrackSectionData_T_InfraLib tmp1;
  static TrackSectionData_T_InfraLib tmp;
  
  /* 1 */ TrackInit_InfraLib(TrainPosSim_in, 0, &tmp);
  /* 1 */ TrackDiscontinuity_InfraLib(&tmp, 104775, 105650, &tmp1);
  /* 1 */
  Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &tmp1,
    &tmp);
  /* 2 */ TrackDiscontinuity_InfraLib(&tmp, 1659 - 400, 32962, &tmp1);
  /* 1 */
  Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &tmp1,
    &tmp);
  /* 1 */
  Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(&tmp, &tmp1);
  /* 1 */
  Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &tmp1,
    &tmp);
  /* 1 */
  Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(&tmp, &tmp1);
  /* 1 */
  Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(&tmp1, &tmp);
  /* 1 */
  Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    &tmp1);
  /* 1 */
  Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp1,
    &tmp);
  /* 1 */
  Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    &tmp1);
  /* 1 */
  Balises0010_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &tmp1,
    &tmp);
  /* 1 */
  Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(&tmp, &tmp1);
  /* 1 */
  Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &tmp1,
    &tmp);
  /* 1 */ TrackClose_InfraLib(&tmp, BaliseMessage);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

