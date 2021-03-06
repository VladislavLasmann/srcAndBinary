/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_NVOVTRP_TM_conver.h"

/* TM_conversions::CAST_Int_to_T_NVOVTRP */
T_NVOVTRP CAST_Int_to_T_NVOVTRP_TM_conver(
  /* TM_conversions::CAST_Int_to_T_NVOVTRP::t_nvovtrp_int */ kcg_int t_nvovtrp_int)
{
  /* TM_conversions::CAST_Int_to_T_NVOVTRP::t_nvovtrp */
  static T_NVOVTRP t_nvovtrp;
  
  t_nvovtrp = t_nvovtrp_int;
  return t_nvovtrp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_NVOVTRP_TM_conver.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

