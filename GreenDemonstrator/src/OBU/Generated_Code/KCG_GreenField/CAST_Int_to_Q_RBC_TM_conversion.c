/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_RBC_TM_conversion.h"

/* TM_conversions::CAST_Int_to_Q_RBC */
Q_RBC CAST_Int_to_Q_RBC_TM_conversion(
  /* TM_conversions::CAST_Int_to_Q_RBC::q_rbc_int */ kcg_int q_rbc_int)
{
  /* TM_conversions::CAST_Int_to_Q_RBC::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_RBC::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_RBC::q_rbc */
  static Q_RBC q_rbc;
  
  IfBlock1_clock = q_rbc_int == INT_Q_RBC_establish_TM_conversi;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_rbc = ENUM_Q_RBC_establish_TM_convers;
  }
  else {
    else_clock_IfBlock1 = q_rbc_int == INT_Q_RBC_terminate_TM_conversi;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_rbc = ENUM_Q_RBC_terminate_TM_convers;
    }
    else {
      q_rbc = ENUM_Q_RBC_terminate_TM_convers;
    }
  }
  return q_rbc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_RBC_TM_conversion.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

