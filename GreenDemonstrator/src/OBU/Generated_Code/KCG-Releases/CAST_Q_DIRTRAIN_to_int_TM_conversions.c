/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DIRTRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_DIRTRAIN_to_int */
kcg_int CAST_Q_DIRTRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::q_dirltrain */ Q_DIRTRAIN q_dirltrain)
{
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::q_dirltrain_int */
  static kcg_int q_dirltrain_int;
  
  IfBlock1_clock = q_dirltrain == ENUM_Q_DIRTRAIN_nominal_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_dirltrain_int = INT_Q_DIRTRAIN_nominal_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = q_dirltrain ==
      ENUM_Q_DIRTRAIN_reverse_TM_conversions;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_dirltrain_int = INT_Q_DIRTRAIN_reverse_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = q_dirltrain ==
        ENUM_Q_DIRTRAIN_unknown_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_dirltrain_int = INT_Q_DIRTRAIN_unknown_TM_conversions;
      }
      else {
        q_dirltrain_int = INT_Q_DIRTRAIN_unknown_TM_conversions;
      }
    }
  }
  return q_dirltrain_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_DIRTRAIN_to_int_TM_conversions.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

