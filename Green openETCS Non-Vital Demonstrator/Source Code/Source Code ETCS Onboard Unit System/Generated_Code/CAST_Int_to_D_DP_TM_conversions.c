/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_DP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_DP */
D_DP CAST_Int_to_D_DP_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_DP::d_dp_int */kcg_int d_dp_int)
{
  /* TM_conversions::CAST_Int_to_D_DP::d_dp */
  static D_DP d_dp;
  
  d_dp = d_dp_int;
  return d_dp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_DP_TM_conversions.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

