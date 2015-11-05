/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_EMERGENCYSTOP_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int */
kcg_int CAST_Q_EMERGENCYSTOP_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::q_emergencystop */ Q_EMERGENCYSTOP q_emergencystop)
{
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int::q_emergencystop_int */
  static kcg_int q_emergencystop_int;
  
  IfBlock1_clock = q_emergencystop ==
    ENUM_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_emergencystop_int =
      INT_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions;
  }
  else {
    _2_else_clock_IfBlock1 = q_emergencystop ==
      ENUM_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      q_emergencystop_int =
        INT_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions;
    }
    else {
      _1_else_clock_IfBlock1 = q_emergencystop ==
        ENUM_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        q_emergencystop_int =
          INT_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions;
      }
      else {
        else_clock_IfBlock1 = q_emergencystop ==
          ENUM_Q_EMERGENCYSTOP_rejected_TM_conversions;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          q_emergencystop_int = INT_Q_EMERGENCYSTOP_rejected_TM_conversions;
        }
        else {
          q_emergencystop_int = INT_Q_EMERGENCYSTOP_rejected_TM_conversions;
        }
      }
    }
  }
  return q_emergencystop_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_EMERGENCYSTOP_to_int_TM_conversions.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

