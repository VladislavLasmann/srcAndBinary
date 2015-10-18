/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_NVOVTRP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_NVOVTRP */
T_NVOVTRP CAST_Int_to_T_NVOVTRP_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_NVOVTRP::t_nvovtrp_int */ kcg_int t_nvovtrp_int)
{
  /* TM_conversions::CAST_Int_to_T_NVOVTRP::t_nvovtrp */
  static T_NVOVTRP t_nvovtrp;
  
  t_nvovtrp = t_nvovtrp_int;
  return t_nvovtrp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_NVOVTRP_TM_conversions.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

