/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T13:23:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_CYCRQST_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_CYCRQST */
T_CYCRQST CAST_Int_to_T_CYCRQST_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_CYCRQST::t_cycloc_int */kcg_int t_cycloc_int)
{
  /* TM_conversions::CAST_Int_to_T_CYCRQST::t_cycloc */
  static T_CYCRQST t_cycloc;
  
  t_cycloc = t_cycloc_int;
  return t_cycloc;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_T_CYCRQST_TM_conversions.c
** Generation date: 2015-11-20T13:23:30
*************************************************************$ */

