/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ADHESION_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_ADHESION_to_int */
kcg_int CAST_M_ADHESION_to_int_TM_conversions(
  /* TM_conversions::CAST_M_ADHESION_to_int::m_adhesion */M_ADHESION m_adhesion)
{
  /* TM_conversions::CAST_M_ADHESION_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ADHESION_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_ADHESION_to_int::m_adhesion_int */
  static kcg_int m_adhesion_int;
  
  IfBlock1_clock = m_adhesion == ENUM_M_ADHESION_slippery_rail_TM_conversions;
  if (IfBlock1_clock) {
    m_adhesion_int = INT_M_ADHESION_slippery_rail_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = m_adhesion ==
      ENUM_M_ADHESION_no_slippery_rail_TM_conversions;
    if (else_clock_IfBlock1) {
      m_adhesion_int = INT_M_ADHESION_no_slippery_rail_TM_conversions;
    }
    else {
      m_adhesion_int = INT_M_ADHESION_slippery_rail_TM_conversions;
    }
  }
  return m_adhesion_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_ADHESION_to_int_TM_conversions.c
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

