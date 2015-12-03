/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Icon_group_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_Icon_group_to_int */
Icon_group_INT_T_DATA CAST_Icon_group_to_int_DATA_Variables(
  /* DATA::Variables::CAST_Icon_group_to_int::Input1 */ Icon_group_T_DMI_Types_Pkg Input1)
{
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_group_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_Icon_group_to_int::Output1 */
  static Icon_group_INT_T_DATA Output1;
  
  IfBlock1_clock = Input1 == ENUM_Icon_group_T_level_symbol;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    Output1 = INT_Icon_group_T_level_symbol;
  }
  else {
    _5_else_clock_IfBlock1 = Input1 == ENUM_Icon_group_T_mode_symbols;
    /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
      Output1 = INT_Icon_group_T_mode_symbols;
    }
    else {
      _4_else_clock_IfBlock1 = Input1 == ENUM_Icon_group_T_navigation_symbols;
      /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
        Output1 = INT_Icon_group_T_navigation_symbols;
      }
      else {
        _3_else_clock_IfBlock1 = Input1 ==
          ENUM_Icon_group_T_order_an_announcements_symbols;
        /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
          Output1 = INT_Icon_group_T_order_an_announcements_symbols;
        }
        else {
          _2_else_clock_IfBlock1 = Input1 ==
            ENUM_Icon_group_T_planning_information_symbols;
          /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
            Output1 = INT_Icon_group_T_planning_information_symbols;
          }
          else {
            _1_else_clock_IfBlock1 = Input1 ==
              ENUM_Icon_group_T_settings_symbols;
            /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
              Output1 = INT_Icon_group_T_settings_symbols;
            }
            else {
              else_clock_IfBlock1 = Input1 == ENUM_Icon_group_T_status_symbols;
              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                Output1 = INT_Icon_group_T_status_symbols;
              }
              else {
                Output1 = INT_Icon_group_T_status_symbols;
              }
            }
          }
        }
      }
    }
  }
  return Output1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Icon_group_to_int_DATA_Variables.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

