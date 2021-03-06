/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "popLeadingArc_CalcBrakingCurves.h"

/* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc */
void popLeadingArc_CalcBrakingCurves(
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::oldBC */ ParabolaCurve_T_CalcBrakingCurv *oldBC,
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::newBC */ ParabolaCurve_T_CalcBrakingCurv *newBC)
{
  kcg_copy_array_real_113(
    &(*newBC).distances[0],
    (array_real_113 *) &(*oldBC).distances[1]);
  (&(*newBC).distances[113])[0] = 0.0;
  kcg_copy_array_real_113(
    &(*newBC).speeds[0],
    (array_real_113 *) &(*oldBC).speeds[1]);
  (&(*newBC).speeds[113])[0] = 0.0;
  kcg_copy_array_real_113(
    &(*newBC).accelerations[0],
    (array_real_113 *) &(*oldBC).accelerations[1]);
  (&(*newBC).accelerations[113])[0] = 0.0;
  kcg_copy_array_bool_113(
    &(*newBC).valid[0],
    (array_bool_113 *) &(*oldBC).valid[1]);
  (&(*newBC).valid[113])[0] = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** popLeadingArc_CalcBrakingCurves.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

