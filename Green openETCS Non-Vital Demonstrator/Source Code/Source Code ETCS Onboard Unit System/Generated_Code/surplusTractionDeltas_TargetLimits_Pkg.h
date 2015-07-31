/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _surplusTractionDeltas_TargetLimits_Pkg_H_
#define _surplusTractionDeltas_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "limitPositive_SDM_Types_Pkg.h"
#include "splitT_bs_TargetLimits_Pkg.h"
#include "calcBec_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::surplusTractionDeltas */
extern void surplusTractionDeltas_TargetLimits_Pkg(
  /* TargetLimits_Pkg::surplusTractionDeltas::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::surplusTractionDeltas::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_b */t_Brake_t_SDMConversionModelPkg *T_b,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_part */T_trac_t_TargetLimits_Pkg *T_part,
  /* TargetLimits_Pkg::surplusTractionDeltas::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_est */V_internal_real_Type_SDM_Types_Pkg *V_est,
  /* TargetLimits_Pkg::surplusTractionDeltas::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_ura */V_internal_real_Type_SDM_Types_Pkg *V_ura);

#endif /* _surplusTractionDeltas_TargetLimits_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** surplusTractionDeltas_TargetLimits_Pkg.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

