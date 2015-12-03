/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DIRLRBG_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_DIRLRBG_to_int */
kcg_int CAST_Q_DIRLRBG_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg */Q_DIRLRBG q_dirlrbg)
{
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_int */ kcg_int q_dirlrbg_int;
  
  IfBlock1_clock = q_dirlrbg == ENUM_Q_DIRLRBG_nominal_TM_conversions;
  if (IfBlock1_clock) {
    q_dirlrbg_int = INT_Q_DIRLRBG_nominal_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = q_dirlrbg == ENUM_Q_DIRLRBG_reverse_TM_conversions;
    if (_1_else_clock_IfBlock1) {
      q_dirlrbg_int = INT_Q_DIRLRBG_reverse_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = q_dirlrbg == ENUM_Q_DIRLRBG_unknown_TM_conversions;
      if (else_clock_IfBlock1) {
        q_dirlrbg_int = INT_Q_DIRLRBG_unknown_TM_conversions;
      }
      else {
        q_dirlrbg_int = INT_Q_DIRLRBG_unknown_TM_conversions;
      }
    }
  }
  return q_dirlrbg_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_DIRLRBG_to_int_TM_conversions.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

