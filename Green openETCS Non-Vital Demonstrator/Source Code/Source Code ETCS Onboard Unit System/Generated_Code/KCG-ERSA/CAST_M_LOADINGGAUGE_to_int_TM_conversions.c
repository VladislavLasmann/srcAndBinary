/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_LOADINGGAUGE_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_LOADINGGAUGE_to_int */
kcg_int CAST_M_LOADINGGAUGE_to_int_TM_conversions(
  /* TM_conversions::CAST_M_LOADINGGAUGE_to_int::m_loadinggauge */ M_LOADINGGAUGE m_loadinggauge)
{
  /* TM_conversions::CAST_M_LOADINGGAUGE_to_int::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOADINGGAUGE_to_int::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOADINGGAUGE_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOADINGGAUGE_to_int::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOADINGGAUGE_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_LOADINGGAUGE_to_int::m_loadinggauge_int */
  static kcg_int m_loadinggauge_int;
  
  IfBlock1_clock = m_loadinggauge == ENUM_M_LOADINGGAUGE_G1_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_loadinggauge_int = INT_M_LOADINGGAUGE_G1_TM_conversions;
  }
  else {
    _3_else_clock_IfBlock1 = m_loadinggauge ==
      ENUM_M_LOADINGGAUGE_GA_TM_conversions;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_loadinggauge_int = INT_M_LOADINGGAUGE_GA_TM_conversions;
    }
    else {
      _2_else_clock_IfBlock1 = m_loadinggauge ==
        ENUM_M_LOADINGGAUGE_GB_TM_conversions;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_loadinggauge_int = INT_M_LOADINGGAUGE_GB_TM_conversions;
      }
      else {
        _1_else_clock_IfBlock1 = m_loadinggauge ==
          ENUM_M_LOADINGGAUGE_GC_TM_conversions;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_loadinggauge_int = INT_M_LOADINGGAUGE_GC_TM_conversions;
        }
        else {
          else_clock_IfBlock1 = m_loadinggauge ==
            ENUM_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_loadinggauge_int = INT_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          }
          else {
            m_loadinggauge_int = INT_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          }
        }
      }
    }
  }
  return m_loadinggauge_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_LOADINGGAUGE_to_int_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

