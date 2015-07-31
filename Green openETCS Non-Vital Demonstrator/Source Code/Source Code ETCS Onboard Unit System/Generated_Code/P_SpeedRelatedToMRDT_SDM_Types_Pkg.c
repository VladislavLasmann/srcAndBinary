/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "P_SpeedRelatedToMRDT_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::P_SpeedRelatedToMRDT */
V_internal_real_Type_SDM_Types_Pkg P_SpeedRelatedToMRDT_SDM_Types_Pkg(
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_p_ebd */V_internal_real_Type_SDM_Types_Pkg v_p_ebd,
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_p_sdb */V_internal_real_Type_SDM_Types_Pkg v_p_sdb,
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_target1 */V_internal_real_Type_SDM_Types_Pkg v_target1,
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_p_ebd_valid */kcg_bool v_p_ebd_valid)
{
  static V_internal_real_Type_SDM_Types_Pkg tmp;
  /* SDM_Types_Pkg::P_SpeedRelatedToMRDT::v_p_mrdt */
  static V_internal_real_Type_SDM_Types_Pkg v_p_mrdt;
  
  if (v_p_ebd_valid) {
    tmp = v_p_ebd;
  }
  else {
    tmp = 0.0;
  }
  v_p_mrdt = /* 1 */ Max3_math_V_internal_real_Type(tmp, v_p_sdb, v_target1);
  return v_p_mrdt;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** P_SpeedRelatedToMRDT_SDM_Types_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
