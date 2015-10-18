/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_MARQSTREASON_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_MARQSTREASON_to_int */
kcg_int CAST_Q_MARQSTREASON_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason */ Q_MARQSTREASON q_marqstreason)
{
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int q_marqstreason_int;
  
  IfBlock1_clock = q_marqstreason == ENUM_Q_MARQSTREASON_driver_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_marqstreason_int = INT_Q_MARQSTREASON_driver_TM_conversions;
  }
  else {
    _3_else_clock_IfBlock1 = q_marqstreason ==
      ENUM_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      q_marqstreason_int =
        INT_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions;
    }
    else {
      _2_else_clock_IfBlock1 = q_marqstreason ==
        ENUM_Q_MARQSTREASON_section_timer_TM_conversions;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        q_marqstreason_int = INT_Q_MARQSTREASON_section_timer_TM_conversions;
      }
      else {
        _1_else_clock_IfBlock1 = q_marqstreason ==
          ENUM_Q_MARQSTREASON_track_description_deleted_TM_conversions;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          q_marqstreason_int =
            INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
        }
        else {
          else_clock_IfBlock1 = q_marqstreason ==
            ENUM_Q_MARQSTREASON_TAF_TM_conversions;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            q_marqstreason_int =
              INT_Q_MARQSTREASON_track_description_deleted_TM_conversions;
          }
          else {
            q_marqstreason_int = INT_Q_MARQSTREASON_driver_TM_conversions;
          }
        }
      }
    }
  }
  return q_marqstreason_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_MARQSTREASON_to_int_TM_conversions.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

