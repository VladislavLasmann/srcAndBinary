/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurveArc_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurveArc */
V_internal_real_Type_SDM_Types_Pkg getSpeedOnCurveArc_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::arc */ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::location */L_internal_real_Type_SDM_Types_Pkg location)
{
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::speed */
  static V_internal_real_Type_SDM_Types_Pkg speed;
  
  speed = /* 1 */
    SqrtR_mathext(
      (*arc).speed * (*arc).speed + ((*arc).distance - location) *
      ((*arc).acceleration + (*arc).acceleration));
  return speed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getSpeedOnCurveArc_CalcBrakingCurves_types.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
