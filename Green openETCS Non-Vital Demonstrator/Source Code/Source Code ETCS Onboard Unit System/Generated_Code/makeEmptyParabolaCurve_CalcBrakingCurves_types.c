/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::makeEmptyParabolaCurve */
void makeEmptyParabolaCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::Curve */ParabolaCurve_T_CalcBrakingCurves_types *Curve)
{
  static kcg_int i;
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::_L14 */
  static array_real_25 _L14;
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::_L16 */
  static array_bool_25 _L16;
  
  for (i = 0; i < 25; i++) {
    _L16[i] = kcg_false;
    _L14[i] = 0.0;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*Curve).speeds,
    &_L14);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*Curve).accelerations,
    &(*Curve).speeds);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &(*Curve).distances,
    &_L14);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&(*Curve).valid, &_L16);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** makeEmptyParabolaCurve_CalcBrakingCurves_types.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
