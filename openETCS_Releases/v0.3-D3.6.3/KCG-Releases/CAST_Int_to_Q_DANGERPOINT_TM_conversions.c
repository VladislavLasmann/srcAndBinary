/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DANGERPOINT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT */
Q_DANGERPOINT CAST_Int_to_Q_DANGERPOINT_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_DANGERPOINT::q_dangerpoint_int */ kcg_int q_dangerpoint_int)
{
  /* TM_conversions::CAST_Int_to_Q_DANGERPOINT::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DANGERPOINT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_DANGERPOINT::q_dangerpoint */
  static Q_DANGERPOINT q_dangerpoint;
  
  IfBlock1_clock = q_dangerpoint_int ==
    INT_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_dangerpoint = ENUM_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_dangerpoint_int ==
      INT_Q_DANGERPOINT_dangerpoint_info_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_dangerpoint = ENUM_Q_DANGERPOINT_dangerpoint_info_TM_conversions;
    }
    else {
      q_dangerpoint = ENUM_Q_DANGERPOINT_dangerpoint_info_TM_conversions;
    }
  }
  return q_dangerpoint;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_DANGERPOINT_TM_conversions.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

