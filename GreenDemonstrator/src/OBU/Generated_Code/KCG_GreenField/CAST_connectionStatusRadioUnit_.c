/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_connectionStatusRadioUnit_.h"

/* DATA::Variables::CAST_connectionStatusRadioUnit_to_int */
connectionStatusRadioUnit_INT_T CAST_connectionStatusRadioUnit_(
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::connectionStatusRadioUnit_ct */ connectionStatusRadioUnit_T_API connectionStatusRadioUnit_ct)
{
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::connectionStatusRadioUnit_int */
  static connectionStatusRadioUnit_INT_T connectionStatusRadioUnit_int;
  
  IfBlock1_clock = connectionStatusRadioUnit_ct ==
    _103_ENUM_connectionStatusRadio;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    connectionStatusRadioUnit_int = _100_INT_connectionStatusRadioU;
  }
  else {
    _2_else_clock_IfBlock1 = connectionStatusRadioUnit_ct ==
      _102_ENUM_connectionStatusRadio;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      connectionStatusRadioUnit_int = INT_connectionStatusRadioUnit_T;
    }
    else {
      _1_else_clock_IfBlock1 = connectionStatusRadioUnit_ct ==
        _101_ENUM_connectionStatusRadio;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        connectionStatusRadioUnit_int = _98_INT_connectionStatusRadioUn;
      }
      else {
        else_clock_IfBlock1 = connectionStatusRadioUnit_ct ==
          ENUM_connectionStatusRadioUnit_;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          connectionStatusRadioUnit_int = _99_INT_connectionStatusRadioUn;
        }
        else {
          connectionStatusRadioUnit_int = _100_INT_connectionStatusRadioU;
        }
      }
    }
  }
  return connectionStatusRadioUnit_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_connectionStatusRadioUnit_.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

