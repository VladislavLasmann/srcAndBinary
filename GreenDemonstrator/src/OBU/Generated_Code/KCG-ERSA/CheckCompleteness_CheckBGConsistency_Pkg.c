/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CheckCompleteness */
void CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */ BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool *isSingleBG,
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg *lastTelegram)
{
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L1 */ kcg_bool _L1_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L5 */ kcg_int _L5_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*bgMessage).numberBalises == 1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    *isComplete = kcg_false;
    *isSingleBG = /* 1 */
      CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
        &(*bgMessage).Telegrams[0]);
    kcg_copy_Telegram_T_BG_Types_Pkg(lastTelegram, &(*bgMessage).Telegrams[0]);
  }
  else {
    else_clock_IfBlock1 = !((*bgMessage).numberBalises > /* 1 */
        N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
          (*bgMessage).Telegrams[0].telegramheader.n_total)) &
      ((*bgMessage).numberBalises > 0);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      *isSingleBG = kcg_false;
      /* 1 */
      CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
        &(*bgMessage).Telegrams,
        &_L1_IfBlock1,
        lastTelegram,
        &_L5_IfBlock1);
      *isComplete = _L1_IfBlock1 & (_L5_IfBlock1 == (*bgMessage).numberBalises);
    }
    else {
      *isSingleBG = kcg_false;
      *isComplete = kcg_false;
      kcg_copy_Telegram_T_BG_Types_Pkg(
        lastTelegram,
        (Telegram_T_BG_Types_Pkg *) &cTelegram_CheckBGConsistency_Pkg);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckCompleteness_CheckBGConsistency_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

