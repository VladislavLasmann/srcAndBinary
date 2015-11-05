/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LGTLOC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LGTLOC */
Q_LGTLOC CAST_Int_to_Q_LGTLOC_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LGTLOC::q_lgtloc_int */ kcg_int q_lgtloc_int)
{
  /* TM_conversions::CAST_Int_to_Q_LGTLOC::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LGTLOC::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LGTLOC::q_lgtloc */
  static Q_LGTLOC q_lgtloc;
  
  IfBlock1_clock = q_lgtloc_int ==
    INT_Q_LGTLOC_max_safe_front_end_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_lgtloc = ENUM_Q_LGTLOC_max_safe_front_end_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_lgtloc_int ==
      INT_Q_LGTLOC_min_safe_rear_end_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_lgtloc = ENUM_Q_LGTLOC_min_safe_rear_end_TM_conversions;
    }
    else {
      q_lgtloc = ENUM_Q_LGTLOC_max_safe_front_end_TM_conversions;
    }
  }
  return q_lgtloc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LGTLOC_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

