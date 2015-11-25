/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
void CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool *errorUnlinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */ NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */ NID_C *nid_c)
{
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse */ kcg_int tmp2;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse */ kcg_int tmp1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse */ ReceivedMessage_T_Common_Types_Pkg tmp;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isComplete */ kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isSingle */ kcg_bool isSingle;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::lastTelegram */ Telegram_T_BG_Types_Pkg lastTelegram;
  
  /* 1 */
  CheckCompleteness_CheckBGConsistency_Pkg(
    &(*trackSideForCheck).telegramHeaders,
    &IfBlock1_clock,
    &isSingle,
    &lastTelegram);
  isComplete = IfBlock1_clock ^ isSingle;
  IfBlock1_clock = isComplete & isSingle;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    *applyServiceBrake = kcg_false;
    /* 1 */
    BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
      trackSideForCheck,
      q_nvlocacc,
      passedBG_out);
    (*passedBG_out).BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    *nid_errorBG = 16383;
    *nid_c = 0;
  }
  else /* ck_anon_activ */ if (isComplete) {
    *applyServiceBrake = kcg_false;
    tmp2 = /* 16 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        lastTelegram.telegramheader.n_pig);
    tmp1 = /* 17 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.n_pig);
    /* 2 */
    BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
      trackSideForCheck,
      q_nvlocacc,
      &tmp);
    /* 1 */
    WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
      (kcg_bool) (tmp2 > tmp1),
      &tmp,
      passedBG_out);
    *nid_errorBG = 16383;
    *nid_c = 0;
  }
  else {
    *applyServiceBrake = kcg_true;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      passedBG_out,
      (ReceivedMessage_T_Common_Types_Pkg *)
        &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
    *nid_errorBG =
      (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_bg;
    *nid_c =
      (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_c;
  }
  *errorUnlinkedBG = *applyServiceBrake;
  *badBaliseMessageToDMI = *applyServiceBrake;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingNotInUse_CheckBGConsistency_Pkg.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

