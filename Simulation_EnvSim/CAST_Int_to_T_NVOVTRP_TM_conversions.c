/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_NVOVTRP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_NVOVTRP */
T_NVOVTRP CAST_Int_to_T_NVOVTRP_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_NVOVTRP::t_nvovtrp_int */kcg_int t_nvovtrp_int)
{
  /* TM_conversions::CAST_Int_to_T_NVOVTRP::t_nvovtrp */
  static T_NVOVTRP t_nvovtrp;
  
  t_nvovtrp = t_nvovtrp_int;
  return t_nvovtrp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_T_NVOVTRP_TM_conversions.c
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

