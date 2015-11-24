/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_SBI1 */
void d_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_SBI1::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::d_SBI1::V */ V_internal_real_Type_SDM_Types_Pkg V,
  /* TargetLimits_Pkg::d_SBI1::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_SBI1::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_SBI1::D_SBD1 */ L_internal_real_Type_SDM_Types_Pkg *D_SBD1)
{
  /* TargetLimits_Pkg::d_SBI1::_L5 */ L_internal_real_Type_SDM_Types_Pkg _L5;
  
  /* 1 */ getLocationOnCurve_CalcBrakingCurves_types(SBDcurve, V, valid, &_L5);
  *D_SBD1 = _L5 - V * (*T).bs1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_SBI1_TargetLimits_Pkg.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

