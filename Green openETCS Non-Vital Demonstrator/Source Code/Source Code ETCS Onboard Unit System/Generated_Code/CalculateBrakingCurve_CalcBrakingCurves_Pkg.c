/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateBrakingCurve_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
void CalculateBrakingCurve_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Target */ Target_real_T_TargetManagement_types *Target,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::d_est_front */ L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::cond */ kcg_bool *cond,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::BC */ ParabolaCurve_T_CalcBrakingCurves_types *BC)
{
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
  static BCAccumulator_type_CalcBrakingCurves_Pkg acc;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L19 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L19;
  
  *cond = invalid_TargetManagement_types != (*Target).targetType;
  if (*cond) {
    /* InitalValues */
    InitalValues_CalcBrakingCurves_Pkg_internalOperators(Target, Asafe, &_L19);
    for (i = 0; i < 113; i++) {
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&acc, &_L19);
      /* 1 */
      BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators(
        i,
        &acc,
        Asafe,
        d_est_front,
        &cond_iterw,
        &_L19);
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    /* emptyBCAcc */ emptyBCAcc_CalcBrakingCurves_Pkg(&_L19);
  }
  /* SortByDistances */
  SortByDistances_CalcBrakingCurves_Pkg_internalOperators(&_L19.BC, BC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateBrakingCurve_CalcBrakingCurves_Pkg.c
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

