/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */
#ifndef _getLocationOnCurve_CalcBraking
#define _getLocationOnCurve_CalcBraking

#include "kcg_types.h"
#include "getLocationOnCurveArc_CalcBraki.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_types::getLocationOnCurve */
extern void getLocationOnCurve_CalcBrakingC(
  /* CalcBrakingCurves_types::getLocationOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurv *curve,
  /* CalcBrakingCurves_types::getLocationOnCurve::speed */ V_internal_real_Type_SDM_Types_ speed,
  /* CalcBrakingCurves_types::getLocationOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getLocationOnCurve::location */ L_internal_real_Type_SDM_Types_ *location);

#endif /* _getLocationOnCurve_CalcBraking */
/* $**************** KCG Version 6.4 (build i21) ****************
** getLocationOnCurve_CalcBrakingC.h
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */

