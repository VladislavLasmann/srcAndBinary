/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "emptyBCAcc_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::emptyBCAcc */
void emptyBCAcc_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::emptyBCAcc::Output1 */ BCAccumulator_type_CalcBrakingCurves_Pkg *Output1)
{
  (*Output1).distance = 0.0;
  (*Output1).speed = 0.0;
  (*Output1).distanceIndex = 0;
  (*Output1).speedIndex = 0;
  /* 2 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&(*Output1).BC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** emptyBCAcc_CalcBrakingCurves_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

