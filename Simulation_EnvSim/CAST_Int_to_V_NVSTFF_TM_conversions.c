/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVSTFF_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVSTFF */
V_NVSTFF CAST_Int_to_V_NVSTFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVSTFF::v_nvstff_int */kcg_int v_nvstff_int)
{
  /* TM_conversions::CAST_Int_to_V_NVSTFF::v_nvstff */
  static V_NVSTFF v_nvstff;
  
  v_nvstff = v_nvstff_int * 5;
  return v_nvstff;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_NVSTFF_TM_conversions.c
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

