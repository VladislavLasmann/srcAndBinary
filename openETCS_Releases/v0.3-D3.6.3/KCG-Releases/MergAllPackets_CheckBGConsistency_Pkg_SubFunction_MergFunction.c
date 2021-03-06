/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets */
void MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegramACC */ Telegram_T_BG_Types_Pkg *telegramACC,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram */ Telegram_T_BG_Types_Pkg *telegram,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::go_on */ kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ Telegram_T_BG_Types_Pkg *telegram_out)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L17 */
  static CompressedPacketData_T_Common_Types_Pkg _L17_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L13 */
  static kcg_int _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L11 */
  static kcg_int _L11_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L12 */
  static kcg_int _L12_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::diff */
  static kcg_int diff;
  static kcg_int i;
  
  *go_on = (*telegram).valid;
  diff = /* 4 */
    N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
      (*telegramACC).telegramheader.n_pig) - /* 3 */
    N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
      (*telegram).telegramheader.n_pig);
  IfBlock1_clock = (diff == - 1) & (((*telegramACC).telegramheader.m_dup ==
        M_DUP_This_balise_is_a_duplicate_of_the_next_balise) &
      ((*telegram).telegramheader.m_dup ==
        M_DUP_This_balise_is_a_duplicate_of_the_previous_balise)) & *go_on;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram);
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &(*telegram_out).packets.PacketData,
      &(*telegramACC).packets.PacketData);
  }
  else {
    else_clock_IfBlock1 = (diff == 1) & (((*telegramACC).telegramheader.m_dup ==
          M_DUP_This_balise_is_a_duplicate_of_the_previous_balise) &
        ((*telegram).telegramheader.m_dup ==
          M_DUP_This_balise_is_a_duplicate_of_the_next_balise)) & *go_on;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram);
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &(*telegram_out).packets.PacketData,
        &(*telegramACC).packets.PacketData);
    }
    else /* ck_anon_activ */ if (*go_on) {
      /* 1 */
      FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &(*telegramACC).packets.PacketHeaders,
        &_L11_IfBlock1,
        &_L12_IfBlock1);
      _L13_IfBlock1 = _L12_IfBlock1 + 1;
      kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram);
      /* 1 */
      Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &(*telegramACC).packets.PacketHeaders,
        telegram,
        &(*telegram_out).packets.PacketHeaders);
      for (i = 0; i < 500; i++) {
        _L17_IfBlock1[i] = _L13_IfBlock1;
      }
      /* 1 */
      Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &(*telegramACC).packets.PacketData,
        &_L17_IfBlock1,
        &(*telegram).packets.PacketData,
        &(*telegram_out).packets.PacketData);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegramACC);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

