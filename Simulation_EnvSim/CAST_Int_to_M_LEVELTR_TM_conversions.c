/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LEVELTR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_LEVELTR */
M_LEVELTR CAST_Int_to_M_LEVELTR_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_LEVELTR::m_leveltr_int */kcg_int m_leveltr_int)
{
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::m_leveltr */
  static M_LEVELTR m_leveltr;
  
  IfBlock1_clock = m_leveltr_int == INT_M_LEVELTR_Level_0_TM_conversions;
  if (IfBlock1_clock) {
    m_leveltr = ENUM_M_LEVELTR_Level_0_TM_conversions;
  }
  else {
    _3_else_clock_IfBlock1 = m_leveltr_int ==
      INT_M_LEVELTR_Level_1_TM_conversions;
    if (_3_else_clock_IfBlock1) {
      m_leveltr = ENUM_M_LEVELTR_Level_1_TM_conversions;
    }
    else {
      _2_else_clock_IfBlock1 = m_leveltr_int ==
        INT_M_LEVELTR_Level_2_TM_conversions;
      if (_2_else_clock_IfBlock1) {
        m_leveltr = ENUM_M_LEVELTR_Level_2_TM_conversions;
      }
      else {
        _1_else_clock_IfBlock1 = m_leveltr_int ==
          INT_M_LEVELTR_Level_3_TM_conversions;
        if (_1_else_clock_IfBlock1) {
          m_leveltr = ENUM_M_LEVELTR_Level_3_TM_conversions;
        }
        else {
          else_clock_IfBlock1 = m_leveltr_int ==
            INT_M_LEVELTR_Level_NTC_TM_conversions;
          if (else_clock_IfBlock1) {
            m_leveltr = ENUM_M_LEVELTR_Level_NTC_TM_conversions;
          }
          else {
            m_leveltr = ENUM_M_LEVELTR_Level_NTC_TM_conversions;
          }
        }
      }
    }
  }
  return m_leveltr;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_LEVELTR_TM_conversions.c
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

