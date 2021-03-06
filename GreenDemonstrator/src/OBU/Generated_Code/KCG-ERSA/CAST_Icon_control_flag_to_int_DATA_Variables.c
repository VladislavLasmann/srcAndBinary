/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Icon_control_flag_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_Icon_control_flag_to_int */
Icon_control_flag_INT_T_DATA CAST_Icon_control_flag_to_int_DATA_Variables(
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Input1 */ Icon_control_flag_T_DMI_Types_Pkg Input1)
{
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_Icon_control_flag_to_int::Output1 */ Icon_control_flag_INT_T_DATA Output1;
  
  IfBlock1_clock = Input1 == ENUM_Icon_control_flag_T_show_icon_in_area;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    Output1 = INT_Icon_control_flag_T_show_icon_in_area;
  }
  else {
    _2_else_clock_IfBlock1 = Input1 == ENUM_Icon_control_flag_T_clear_area;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      Output1 = INT_Icon_control_flag_T_clear_area;
    }
    else {
      _1_else_clock_IfBlock1 = Input1 ==
        ENUM_Icon_control_flag_T_show_icon_flashing_in_area;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        Output1 = INT_Icon_control_flag_T_show_icon_flashing_in_area;
      }
      else {
        else_clock_IfBlock1 = Input1 ==
          ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          Output1 =
            INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
        }
        else {
          Output1 = INT_Icon_control_flag_T_show_icon_in_area;
        }
      }
    }
  }
  return Output1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Icon_control_flag_to_int_DATA_Variables.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

