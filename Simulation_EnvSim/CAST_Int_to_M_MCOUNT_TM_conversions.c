/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MCOUNT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_MCOUNT */
M_MCOUNT CAST_Int_to_M_MCOUNT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount_int */kcg_int m_mcount_int)
{
  /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount */
  static M_MCOUNT m_mcount;
  
  m_mcount = m_mcount_int;
  return m_mcount;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_MCOUNT_TM_conversions.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

