/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_DOUBTOVER_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_DOUBTOVER */
L_DOUBTOVER CAST_Int_to_L_DOUBTOVER_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_DOUBTOVER::l_doubtiver_int */kcg_int l_doubtiver_int)
{
  /* TM_conversions::CAST_Int_to_L_DOUBTOVER::l_doubtover */
  static L_DOUBTOVER l_doubtover;
  
  l_doubtover = l_doubtiver_int;
  return l_doubtover;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_L_DOUBTOVER_TM_conversions.c
** Generation date: 2015-11-23T09:24:24
*************************************************************$ */

