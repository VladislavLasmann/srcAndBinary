/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_MN_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_MN_to_int */
kcg_int CAST_NID_MN_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_MN_to_int::nid_mn */NID_MN nid_mn)
{
  /* TM_conversions::CAST_NID_MN_to_int::nid_mn_int */
  static kcg_int nid_mn_int;
  
  nid_mn_int = nid_mn;
  return nid_mn_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_MN_to_int_TM_conversions.c
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

