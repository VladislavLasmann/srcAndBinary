/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */
#ifndef _v_release_TargetLimits_Pkg_H_
#define _v_release_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "v_ReleaseOnboardIterator_TargetLimits_Pkg.h"
#include "d_tripEOA_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::v_release */
extern void v_release_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_release::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_release::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_release::D_EOA */ L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::v_release::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::v_release::V_ura */ V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::v_release::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::v_release::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::v_release::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_release::V_release */ V_internal_real_Type_SDM_Types_Pkg *V_release,
  /* TargetLimits_Pkg::v_release::valid */ kcg_bool *valid);

#endif /* _v_release_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** v_release_TargetLimits_Pkg.h
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */

