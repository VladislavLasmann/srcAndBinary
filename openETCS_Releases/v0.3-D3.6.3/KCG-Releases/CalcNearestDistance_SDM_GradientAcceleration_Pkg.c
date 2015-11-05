/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcNearestDistance_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::CalcNearestDistance */
void CalcNearestDistance_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::oneValid */ kcg_bool *oneValid,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::NearestDistance */ kcg_real *NearestDistance,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::nearestDistanceIsFrontend */ kcg_bool *nearestDistanceIsFrontend)
{
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L5 */
  static L_internal_real_Type_SDM_Types_Pkg _L5;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L6 */
  static kcg_bool _L6;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L9 */
  static L_internal_real_Type_SDM_Types_Pkg _L9;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L10 */
  static kcg_bool _L10;
  
  /* DistanceToNextStep */
  DistanceToNextStep_SDM_GradientAcceleration_Pkg(
    (*Accu).frontPos,
    (*Accu).frontIndex,
    GradientProfile,
    &_L5,
    &_L6);
  /* 1 */
  DistanceToNextStep_SDM_GradientAcceleration_Pkg(
    (*Accu).rearPos,
    (*Accu).rearIndex,
    GradientProfile,
    &_L9,
    &_L10);
  *nearestDistanceIsFrontend = (_L5 < _L9) & _L6;
  /* 1 */ if (*nearestDistanceIsFrontend) {
    *NearestDistance = _L5;
  }
  else {
    *NearestDistance = _L9;
  }
  *oneValid = _L6 | _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcNearestDistance_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

