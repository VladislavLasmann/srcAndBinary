/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES */
Q_NVDRIVER_ADHES CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::q_nvdriver_adhes_int */ kcg_int q_nvdriver_adhes_int)
{
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::q_nvdriveradhes */ Q_NVDRIVER_ADHES q_nvdriveradhes;
  
  IfBlock1_clock = q_nvdriver_adhes_int ==
    INT_Q_NVDRIVER_ADHES_Allowed_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_nvdriveradhes = ENUM_Q_NVDRIVER_ADHES_Allowed_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_nvdriver_adhes_int ==
      INT_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_nvdriveradhes = ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions;
    }
    else {
      q_nvdriveradhes = ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions;
    }
  }
  return q_nvdriveradhes;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

