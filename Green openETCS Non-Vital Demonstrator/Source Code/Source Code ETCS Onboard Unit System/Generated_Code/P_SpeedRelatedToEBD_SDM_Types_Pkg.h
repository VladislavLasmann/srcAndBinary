/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _P_SpeedRelatedToEBD_SDM_Types_Pkg_H_
#define _P_SpeedRelatedToEBD_SDM_Types_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */


/* SDM_Types_Pkg::P_SpeedRelatedToEBD */
extern void P_SpeedRelatedToEBD_SDM_Types_Pkg(
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::d_maxSafefront */L_internal_real_Type_SDM_Types_Pkg d_maxSafefront,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::d_maxSafefrontEBDtarget */L_internal_real_Type_SDM_Types_Pkg d_maxSafefrontEBDtarget,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::v_est */V_internal_real_Type_SDM_Types_Pkg v_est,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::ebdParabola */ParabolaCurve_T_CalcBrakingCurves_types *ebdParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::guiParabola */ParabolaCurve_T_CalcBrakingCurves_types *guiParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::t_bs2 */T_internal_real_Type_SDM_Types_Pkg t_bs2,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::v_target */V_internal_real_Type_SDM_Types_Pkg v_target,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::d_bec */L_internal_real_Type_SDM_Types_Pkg d_bec,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::v_bec */V_internal_real_Type_SDM_Types_Pkg v_bec,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::p_speed */V_internal_real_Type_SDM_Types_Pkg *p_speed,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::valid */kcg_bool *valid);

#endif /* _P_SpeedRelatedToEBD_SDM_Types_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** P_SpeedRelatedToEBD_SDM_Types_Pkg.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

