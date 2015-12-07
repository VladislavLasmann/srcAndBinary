/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dV_ebi_for_V_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::dV_ebi_for_V */
V_internal_real_Type_SDM_Types_Pkg dV_ebi_for_V_SDM_Types_Pkg(
  /* SDM_Types_Pkg::dV_ebi_for_V::V_input */ V_internal_real_Type_SDM_Types_Pkg V_input)
{
  /* SDM_Types_Pkg::dV_ebi_for_V::_L8 */
  static kcg_real _L8;
  /* SDM_Types_Pkg::dV_ebi_for_V::dv_ebi */
  static V_internal_real_Type_SDM_Types_Pkg dv_ebi;
  
  _L8 = (V_input - V_ebi_min_SDM_Types_Pkg) * ((dV_ebi_max_SDM_Types_Pkg -
        dV_ebi_min_SDM_Types_Pkg) / (V_ebi_max_SDM_Types_Pkg -
        V_ebi_min_SDM_Types_Pkg)) + dV_ebi_min_SDM_Types_Pkg;
  /* 1 */ if (V_input > V_ebi_min_SDM_Types_Pkg) {
    /* 1 */ if (_L8 <= dV_ebi_max_SDM_Types_Pkg) {
      dv_ebi = _L8;
    }
    else {
      dv_ebi = dV_ebi_max_SDM_Types_Pkg;
    }
  }
  else {
    dv_ebi = dV_ebi_min_SDM_Types_Pkg;
  }
  return dv_ebi;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dV_ebi_for_V_SDM_Types_Pkg.c
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

