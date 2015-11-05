/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_TRACKCOND_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_TRACKCOND_to_int */
kcg_int CAST_M_TRACKCOND_to_int_TM_conversions(
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond */ M_TRACKCOND m_trackcond)
{
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_TRACKCOND_to_int::m_trackcond_int */
  static kcg_int m_trackcond_int;
  
  IfBlock1_clock = m_trackcond == ENUM_M_TRACKCOND_Air_tightness_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_trackcond_int = INT_M_TRACKCOND_Air_tightness_TM_conversions;
  }
  else {
    _9_else_clock_IfBlock1 = m_trackcond ==
      ENUM_M_TRACKCOND_Non_stopping_area_TM_conversions;
    /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
      m_trackcond_int = INT_M_TRACKCOND_Non_stopping_area_TM_conversions;
    }
    else {
      _8_else_clock_IfBlock1 = m_trackcond ==
        ENUM_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions;
      /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
        m_trackcond_int =
          INT_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions;
      }
      else {
        _7_else_clock_IfBlock1 = m_trackcond ==
          ENUM_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions;
        /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
          m_trackcond_int =
            INT_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions;
        }
        else {
          _6_else_clock_IfBlock1 = m_trackcond ==
            ENUM_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions;
          /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
            m_trackcond_int =
              INT_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions;
          }
          else {
            _5_else_clock_IfBlock1 = m_trackcond ==
              ENUM_M_TRACKCOND_Sound_horn_TM_conversions;
            /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
              m_trackcond_int = INT_M_TRACKCOND_Sound_horn_TM_conversions;
            }
            else {
              _4_else_clock_IfBlock1 = m_trackcond ==
                ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions;
              /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                m_trackcond_int =
                  INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions;
              }
              else {
                _3_else_clock_IfBlock1 = m_trackcond ==
                  ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions;
                /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                  m_trackcond_int =
                    INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions;
                }
                else {
                  _2_else_clock_IfBlock1 = m_trackcond ==
                    ENUM_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions;
                  /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                    m_trackcond_int =
                      INT_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions;
                  }
                  else {
                    _1_else_clock_IfBlock1 = m_trackcond ==
                      ENUM_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions;
                    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                      m_trackcond_int =
                        INT_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions;
                    }
                    else {
                      else_clock_IfBlock1 = m_trackcond ==
                        ENUM_M_TRACKCOND_Tunnel_stopping_area_TM_conversions;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        m_trackcond_int =
                          INT_M_TRACKCOND_Tunnel_stopping_area_TM_conversions;
                      }
                      else {
                        m_trackcond_int =
                          INT_M_TRACKCOND_Non_stopping_area_TM_conversions;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return m_trackcond_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_TRACKCOND_to_int_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

