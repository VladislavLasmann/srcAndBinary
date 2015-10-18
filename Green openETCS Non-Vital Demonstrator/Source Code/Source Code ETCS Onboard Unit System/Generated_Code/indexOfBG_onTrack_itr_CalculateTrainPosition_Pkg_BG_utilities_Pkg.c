/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr */
void indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::prevIndex */ kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::BG_asElementFromBGs */ positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::indexOfBG */ kcg_int *indexOfBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::stopIteration */
  static kcg_bool stopIteration;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::invalidateIndex */
  static kcg_bool invalidateIndex;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L38 */
  static kcg_bool _L38;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L47 */
  static kcg_bool _L47;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L52 */
  static kcg_bool _L52;
  
  invalidateIndex = !(*BG).valid;
  _L47 = (*BG).missed | (*BG).infoFromPassing.valid;
  _L52 = (*BG_asElementFromBGs).missed |
    (*BG_asElementFromBGs).infoFromPassing.valid;
  _L38 = !_L52;
  stopIteration = invalidateIndex | !(*BG_asElementFromBGs).valid |
    ((*BG).valid & (*BG_asElementFromBGs).valid & _L47 & _L52 &
      ((*BG).seqNoOnTrack <= (*BG_asElementFromBGs).seqNoOnTrack)) |
    ((*BG).valid & (*BG_asElementFromBGs).valid & _L47 & _L38) | ((*BG).valid &
      (*BG_asElementFromBGs).valid & !_L47 & _L38 & ((*BG).location.nominal <=
        (*BG_asElementFromBGs).location.nominal));
  /* 1 */ if (invalidateIndex) {
    *indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  else /* 2 */ if (stopIteration) {
    *indexOfBG = iteratorIndex;
  }
  else {
    *indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  *cont = !stopIteration;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

