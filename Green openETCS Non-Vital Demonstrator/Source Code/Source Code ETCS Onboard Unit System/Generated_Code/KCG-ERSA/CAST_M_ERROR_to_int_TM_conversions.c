/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ERROR_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_ERROR_to_int */
kcg_int CAST_M_ERROR_to_int_TM_conversions(
  /* TM_conversions::CAST_M_ERROR_to_int::m_error */M_ERROR m_error)
{
  /* TM_conversions::CAST_M_ERROR_to_int::IfBlock1::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ERROR_to_int::IfBlock1::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ERROR_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ERROR_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ERROR_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ERROR_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ERROR_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ERROR_to_int::IfBlock1::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ERROR_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_ERROR_to_int::m_error_int */
  static kcg_int m_error_int;
  
  IfBlock1_clock = m_error ==
    ENUM_M_ERROR_balise_group_linking_conistency_TM_conversions;
  if (IfBlock1_clock) {
    m_error_int = INT_M_ERROR_balise_group_linking_conistency_TM_conversions;
  }
  else {
    _7_else_clock_IfBlock1 = m_error ==
      ENUM_M_ERROR_Double_linking_error_TM_conversions;
    if (_7_else_clock_IfBlock1) {
      m_error_int = INT_M_ERROR_Double_linking_error_TM_conversions;
    }
    else {
      _6_else_clock_IfBlock1 = m_error ==
        ENUM_M_ERROR_Double_repositioning_error_TM_conversions;
      if (_6_else_clock_IfBlock1) {
        m_error_int = INT_M_ERROR_Double_repositioning_error_TM_conversions;
      }
      else {
        _5_else_clock_IfBlock1 = m_error ==
          ENUM_M_ERROR_Linked_balise_group_message_consistency_erro_TM_conversions;
        if (_5_else_clock_IfBlock1) {
          m_error_int =
            INT_M_ERROR_Linked_balise_group_message_consistency_error_TM_conversions;
        }
        else {
          _4_else_clock_IfBlock1 = m_error ==
            ENUM_M_ERROR_Radio_message_consistency_error_TM_conversions;
          if (_4_else_clock_IfBlock1) {
            m_error_int =
              INT_M_ERROR_Radio_message_consistency_error_TM_conversions;
          }
          else {
            _3_else_clock_IfBlock1 = m_error ==
              ENUM_M_ERROR_Radio_safe_radio_connection_error_TM_conversions;
            if (_3_else_clock_IfBlock1) {
              m_error_int =
                INT_M_ERROR_Radio_safe_radio_connection_error_TM_conversions;
            }
            else {
              _2_else_clock_IfBlock1 = m_error ==
                ENUM_M_ERROR_Radio_sequence_error_TM_conversions;
              if (_2_else_clock_IfBlock1) {
                m_error_int = INT_M_ERROR_Radio_sequence_error_TM_conversions;
              }
              else {
                _1_else_clock_IfBlock1 = m_error ==
                  ENUM_M_ERROR_Safety_critical_failure_TM_conversions;
                if (_1_else_clock_IfBlock1) {
                  m_error_int =
                    INT_M_ERROR_Safety_critical_failure_TM_conversions;
                }
                else {
                  else_clock_IfBlock1 = m_error ==
                    ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions;
                  if (else_clock_IfBlock1) {
                    m_error_int =
                      INT_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions;
                  }
                  else {
                    m_error_int =
                      INT_M_ERROR_Safety_critical_failure_TM_conversions;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return m_error_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_ERROR_to_int_TM_conversions.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

