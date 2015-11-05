/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _CompletenessFirstCheck_CheckBG
#define _CompletenessFirstCheck_CheckBG

#include "kcg_types.h"
#include "Check2Telegrams_CheckBGConsiste.h"
#include "CheckFirstTelDup_CheckBGConsist.h"
#include "CheckFirstTelNotDup_CheckBGCons.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
extern void CompletenessFirstCheck_CheckBGC(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */ TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */ kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */ Telegram_T_BG_Types_Pkg *lastTelegram,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::inDex */ kcg_int *inDex);

#endif /* _CompletenessFirstCheck_CheckBG */
/* $**************** KCG Version 6.4 (build i21) ****************
** CompletenessFirstCheck_CheckBGC.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
