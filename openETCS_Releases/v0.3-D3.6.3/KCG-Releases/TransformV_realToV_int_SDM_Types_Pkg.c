/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_realToV_int_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_realToV_int */
V_internal_Type_Obu_BasicTypes_Pkg TransformV_realToV_int_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformV_realToV_int::v_real */ V_internal_real_Type_SDM_Types_Pkg v_real)
{
  /* SDM_Types_Pkg::TransformV_realToV_int::v_int */
  static V_internal_Type_Obu_BasicTypes_Pkg v_int;
  
  v_int = (kcg_int) (v_real * 3.6);
  return v_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_realToV_int_SDM_Types_Pkg.c
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

