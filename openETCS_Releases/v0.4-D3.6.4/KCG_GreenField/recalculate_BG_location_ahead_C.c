/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_location_ahead_C.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
void recalculate_BG_location_ahead_C(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_in */ positionedBG_T_TrainPosition_Ty *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::prevLinkedBG */ positionedBG_T_TrainPosition_Ty *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::refBG */ positionedBG_T_TrainPosition_Ty *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::sumOfBestDistances */ LocWithInAcc_T_Obu_BasicTypes_P *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_out */ positionedBG_T_TrainPosition_Ty *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp3;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp2;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::_L165 */
  static kcg_bool _L165;
  
  _L165 = (*BG_in).valid & (*prevLinkedBG).valid & (*refBG).valid;
  kcg_copy_positionedBG_T_TrainPo(BG_out, BG_in);
  /* 6 */ if (_L165 & ((*BG_in).q_link == Q_LINK_Linked)) {
    /* 1 */ calculateLocalBGInaccuracies_Ca(BG_in, trainProperties, &tmp3);
    /* 3 */
    add_2_Distances_BasicLocationFu(
      &(*refBG).location,
      sumOfBestDistances,
      &tmp2);
    /* 4 */ add_2_Distances_BasicLocationFu(&tmp3, &tmp2, &(*BG_out).location);
  }
  else /* 7 */ if (_L165 & (*BG_in).infoFromPassing.valid &
    (*prevLinkedBG).infoFromPassing.valid) {
    /* 2 */
    sub_2_odoDistances_BasicLocatio(
      &(*BG_in).infoFromPassing.BG_Header.bgPosition.odo,
      &(*prevLinkedBG).infoFromPassing.BG_Header.bgPosition.odo,
      &tmp);
    /* 5 */
    add_2_Distances_BasicLocationFu(
      &(*BG_in).infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura,
      &tmp,
      &tmp1);
    /* 6 */
    add_2_Distances_BasicLocationFu(
      &tmp1,
      &(*prevLinkedBG).location,
      &(*BG_out).location);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_Bas(&(*BG_out).location, &(*BG_in).location);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_location_ahead_C.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

