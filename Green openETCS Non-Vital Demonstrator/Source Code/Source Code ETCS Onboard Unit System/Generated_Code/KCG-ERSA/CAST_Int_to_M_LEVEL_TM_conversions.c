/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LEVEL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_LEVEL */
M_LEVEL CAST_Int_to_M_LEVEL_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level_int */kcg_int m_level_int)
{
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */
  static M_LEVEL m_level;
  
  IfBlock1_clock = m_level_int == INT_M_LEVEL_Level_0_TM_conversions;
  if (IfBlock1_clock) {
    m_level = ENUM_M_LEVEL_Level_0_TM_conversions;
  }
  else {
    _3_else_clock_IfBlock1 = m_level_int == INT_M_LEVEL_Level_1_TM_conversions;
    if (_3_else_clock_IfBlock1) {
      m_level = ENUM_M_LEVEL_Level_1_TM_conversions;
    }
    else {
      _2_else_clock_IfBlock1 = m_level_int ==
        INT_M_LEVEL_Level_2_TM_conversions;
      if (_2_else_clock_IfBlock1) {
        m_level = ENUM_M_LEVEL_Level_2_TM_conversions;
      }
      else {
        _1_else_clock_IfBlock1 = m_level_int ==
          INT_M_LEVEL_Level_3_TM_conversions;
        if (_1_else_clock_IfBlock1) {
          m_level = ENUM_M_LEVEL_Level_3_TM_conversions;
        }
        else {
          else_clock_IfBlock1 = m_level_int ==
            INT_M_LEVEL_Level_NTC_TM_conversions;
          if (else_clock_IfBlock1) {
            m_level = ENUM_M_LEVEL_Level_NTC_TM_conversions;
          }
          else {
            m_level = ENUM_M_LEVEL_Level_NTC_TM_conversions;
          }
        }
      }
    }
  }
  return m_level;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_LEVEL_TM_conversions.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

