/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

/* TM_conversions::CASTLIB_BaliseHeaders */
void CASTLIB_BaliseHeaders_TM_conversions(
  /* TM_conversions::CASTLIB_BaliseHeaders::In */ BaliseTelegramHeader_int_T_TM *In,
  /* TM_conversions::CASTLIB_BaliseHeaders::Out */ TelegramHeader_T_BG_Types_Pkg *Out)
{
  (*Out).q_updown = /* 1 */ CAST_Int_to_Q_UPDOWN_TM_conversions((*In).q_updown);
  (*Out).m_version = /* 1 */
    CAST_Int_to_M_VERSION_TM_conversions((*In).m_version);
  (*Out).q_media = /* 1 */ CAST_Int_to_Q_MEDIA_TM_conversions((*In).q_media);
  (*Out).n_pig = /* 1 */ CAST_Int_to_N_PIG_TM_conversions((*In).n_pig);
  (*Out).n_total = /* 1 */ CAST_Int_to_N_TOTAL_TM_conversions((*In).n_total);
  (*Out).m_dup = /* 1 */ CAST_Int_to_M_DUP_TM_conversions((*In).m_dup);
  (*Out).m_mcount = /* 1 */ CAST_Int_to_M_MCOUNT_TM_conversions((*In).m_mcount);
  (*Out).nid_c = /* 1 */ CAST_Int_to_NID_C_TM_conversions((*In).nid_c);
  (*Out).nid_bg = /* 1 */ CAST_Int_to_NID_BG_TM_conversions((*In).nid_bg);
  (*Out).q_link = /* 1 */ CAST_Int_to_Q_LINK_TM_conversions((*In).q_link);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CASTLIB_BaliseHeaders_TM_conversions.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

