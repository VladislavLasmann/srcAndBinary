/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_Icon_group_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_Icon_group */
Icon_group_T_DMI_Types_Pkg CAST_int_to_Icon_group_DATA_Variables(
  /* DATA::Variables::CAST_int_to_Icon_group::Output1 */Icon_group_INT_T_DATA Output1)
{
  /* DATA::Variables::CAST_int_to_Icon_group::IfBlock1::else */ kcg_bool _5_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Icon_group::IfBlock1::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Icon_group::IfBlock1::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Icon_group::IfBlock1::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Icon_group::IfBlock1::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Icon_group::IfBlock1::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Icon_group::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_Icon_group::Input1 */ Icon_group_T_DMI_Types_Pkg Input1;
  
  IfBlock1_clock = Output1 == INT_Icon_group_T_level_symbol;
  if (IfBlock1_clock) {
    Input1 = ENUM_Icon_group_T_level_symbol;
  }
  else {
    _5_else_clock_IfBlock1 = Output1 == INT_Icon_group_T_mode_symbols;
    if (_5_else_clock_IfBlock1) {
      Input1 = ENUM_Icon_group_T_mode_symbols;
    }
    else {
      _4_else_clock_IfBlock1 = Output1 == INT_Icon_group_T_navigation_symbols;
      if (_4_else_clock_IfBlock1) {
        Input1 = ENUM_Icon_group_T_navigation_symbols;
      }
      else {
        _3_else_clock_IfBlock1 = Output1 ==
          INT_Icon_group_T_order_an_announcements_symbols;
        if (_3_else_clock_IfBlock1) {
          Input1 = ENUM_Icon_group_T_order_an_announcements_symbols;
        }
        else {
          _2_else_clock_IfBlock1 = Output1 ==
            INT_Icon_group_T_planning_information_symbols;
          if (_2_else_clock_IfBlock1) {
            Input1 = ENUM_Icon_group_T_planning_information_symbols;
          }
          else {
            _1_else_clock_IfBlock1 = Output1 ==
              INT_Icon_group_T_settings_symbols;
            if (_1_else_clock_IfBlock1) {
              Input1 = ENUM_Icon_group_T_settings_symbols;
            }
            else {
              else_clock_IfBlock1 = Output1 == INT_Icon_group_T_status_symbols;
              if (else_clock_IfBlock1) {
                Input1 = ENUM_Icon_group_T_status_symbols;
              }
              else {
                Input1 = ENUM_Icon_group_T_status_symbols;
              }
            }
          }
        }
      }
    }
  }
  return Input1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_Icon_group_DATA_Variables.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

