/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:15:59
*************************************************************$ */
#ifndef _CalcDriverOutput_SDM_Commands_Pkg_H_
#define _CalcDriverOutput_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CalcDriverOutput */
extern void CalcDriverOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDriverOutput::sdmType */ SDM_Types_T_SDM_Types_Pkg sdmType,
  /* SDM_Commands_Pkg::CalcDriverOutput::supVisStatus */ SupervisionStatus_T_SDM_Types_Pkg supVisStatus,
  /* SDM_Commands_Pkg::CalcDriverOutput::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcDriverOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_est */ V_odometry_Type_Obu_BasicTypes_Pkg *v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */ kcg_bool *valid_v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */ V_odometry_Type_Obu_BasicTypes_Pkg *v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */ kcg_bool *valid_v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_release */ V_odometry_Type_Obu_BasicTypes_Pkg *v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */ kcg_bool *valid_v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */ V_odometry_Type_Obu_BasicTypes_Pkg *v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */ kcg_bool *valid_v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */ V_odometry_Type_Obu_BasicTypes_Pkg *v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */ kcg_bool *valid_v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */ L_internal_Type_Obu_BasicTypes_Pkg *targetDistance,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */ kcg_bool *valid_targetDistance);

#endif /* _CalcDriverOutput_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDriverOutput_SDM_Commands_Pkg.h
** Generation date: 2015-12-10T15:15:59
*************************************************************$ */

