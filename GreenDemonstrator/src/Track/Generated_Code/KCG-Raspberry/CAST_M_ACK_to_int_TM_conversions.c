/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ACK_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_ACK_to_int */
kcg_int CAST_M_ACK_to_int_TM_conversions(
  /* TM_conversions::CAST_M_ACK_to_int::m_ack */M_ACK m_ack)
{
  /* TM_conversions::CAST_M_ACK_to_int::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ACK_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_ACK_to_int::m_ack_int */ kcg_int m_ack_int;
  
  IfBlock1_clock = m_ack == ENUM_M_ACK_acknowledgement_TM_conversions;
  if (IfBlock1_clock) {
    m_ack_int = INT_M_ACK_acknowledgement_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = m_ack == ENUM_M_ACK_no_acknowledgement_TM_conversions;
    if (else_clock_IfBlock1) {
      m_ack_int = INT_M_ACK_no_acknowledgement_TM_conversions;
    }
    else {
      m_ack_int = INT_M_ACK_acknowledgement_TM_conversions;
    }
  }
  return m_ack_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_ACK_to_int_TM_conversions.c
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

