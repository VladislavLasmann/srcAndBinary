/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG */
kcg_bool CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::telegram_in */ Telegram_T_BG_Types_Pkg *telegram_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */ kcg_bool isSingleBG;
  
  IfBlock1_clock = ((*telegram_in).telegramheader.n_total ==
      N_TOTAL_1_balise_in_the_group) & (*telegram_in).valid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    isSingleBG = /* 2 */
      CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(telegram_in) &
      ((*telegram_in).telegramheader.n_pig == N_PIG_I_am_the_1st) &
      ((*telegram_in).telegramheader.m_dup == M_DUP_No_duplicates);
  }
  else {
    else_clock_IfBlock1 = ((*telegram_in).telegramheader.n_total ==
        N_TOTAL_2_balises_in_the_group) & (*telegram_in).valid;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      isSingleBG = /* 6 */
        CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(telegram_in) &
        ((((*telegram_in).telegramheader.n_pig == N_PIG_I_am_the_1st) &
            ((*telegram_in).telegramheader.m_dup ==
              M_DUP_This_balise_is_a_duplicate_of_the_next_balise)) |
          (((*telegram_in).telegramheader.n_pig == N_PIG_I_am_the_2nd) &
            ((*telegram_in).telegramheader.m_dup ==
              M_DUP_This_balise_is_a_duplicate_of_the_previous_balise)));
    }
    else {
      isSingleBG = kcg_false;
    }
  }
  return isSingleBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

