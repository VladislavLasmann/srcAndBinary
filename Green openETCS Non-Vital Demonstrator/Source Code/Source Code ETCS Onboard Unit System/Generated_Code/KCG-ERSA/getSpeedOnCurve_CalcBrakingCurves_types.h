/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */
#ifndef _getSpeedOnCurve_CalcBrakingCurves_types_H_
#define _getSpeedOnCurve_CalcBrakingCurves_types_H_

#include "kcg_types.h"
#include "getSpeedOnCurveArc_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_types::getSpeedOnCurve */
extern void getSpeedOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getSpeedOnCurve::position */ L_internal_real_Type_SDM_Types_Pkg position,
  /* CalcBrakingCurves_types::getSpeedOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getSpeedOnCurve::speed */ V_internal_real_Type_SDM_Types_Pkg *speed);

#endif /* _getSpeedOnCurve_CalcBrakingCurves_types_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedOnCurve_CalcBrakingCurves_types.h
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */
