/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateSafeTrainLength_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::CalculateSafeTrainLength */
void CalculateSafeTrainLength_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::safeTrainLength */ L_TRAININT *safeTrainLength,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::minSafeRearEnd */ kcg_int *minSafeRearEnd)
{
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L20 */
  static kcg_int _L20;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L24 */
  static kcg_int _L24;
  
  /* 1 */ if ((*trainPosition).valid) {
    _L24 = (*trainPosition).minSafeFrontEndPosition - (*trainProps).l_train;
  }
  else {
    _L24 = cMinSafeRearEnd_ProvidePositionReport_Pkg;
  }
  _L20 = _L24 - (*trainPosition).estimatedFrontEndPosition;
  /* 2 */ if (0 <= _L24) {
    *minSafeRearEnd = _L24;
  }
  else {
    *minSafeRearEnd = - _L24;
  }
  /* 2 */ if (0 <= _L20) {
    *safeTrainLength = _L20;
  }
  else {
    *safeTrainLength = - _L20;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateSafeTrainLength_ProvidePositionReport_Pkg.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

