/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LENGTH_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LENGTH */
Q_LENGTH CAST_Int_to_Q_LENGTH_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length_int */kcg_int q_length_int)
{
  /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ Q_LENGTH q_length;
  
  IfBlock1_clock = q_length_int ==
    INT_Q_LENGTH_no_info_available_TM_conversions;
  if (IfBlock1_clock) {
    q_length = ENUM_Q_LENGTH_no_info_available_TM_conversions;
  }
  else {
    _2_else_clock_IfBlock1 = q_length_int ==
      INT_Q_LENGTH_confimed_by_device_TM_conversions;
    if (_2_else_clock_IfBlock1) {
      q_length = ENUM_Q_LENGTH_confimed_by_device_TM_conversions;
    }
    else {
      _1_else_clock_IfBlock1 = q_length_int ==
        INT_Q_LENGTH_confimed_by_driver_TM_conversions;
      if (_1_else_clock_IfBlock1) {
        q_length = ENUM_Q_LENGTH_confimed_by_driver_TM_conversions;
      }
      else {
        else_clock_IfBlock1 = q_length_int ==
          INT_Q_LENGTH_integrity_lost_TM_conversions;
        if (else_clock_IfBlock1) {
          q_length = ENUM_Q_LENGTH_integrity_lost_TM_conversions;
        }
        else {
          q_length = ENUM_Q_LENGTH_integrity_lost_TM_conversions;
        }
      }
    }
  }
  return q_length;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LENGTH_TM_conversions.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

