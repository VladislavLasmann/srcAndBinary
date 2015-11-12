/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "replaceTelegram_Receive_TrackSi.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */
void replaceTelegram_Receive_TrackSi(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::inTelegramArray */ Telegram_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::cont */ kcg_bool *cont,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::outTelegrams */ Telegram_T_BG_Types_Pkg *outTelegrams,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::outIsDuplicate */ kcg_bool *outIsDuplicate)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::doReplace */
  static kcg_bool doReplace;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L11 */
  static kcg_bool _L11;
  
  doReplace = (*inTelegramArray).valid &
    ((*inTelegramArray).telegramheader.n_pig ==
      (*newTelegram).telegramheader.n_pig);
  _L11 = !doReplace;
  /* 1 */ if (_L11) {
    kcg_copy_Telegram_T_BG_Types_Pk(outTelegrams, inTelegramArray);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pk(outTelegrams, newTelegram);
  }
  *cont = (*inTelegramArray).valid & _L11;
  /* ck_doReplace */ if (doReplace) {
    *outIsDuplicate = /* 1 */
      compareTelegrams_Receive_TrackS(newTelegram, inTelegramArray);
  }
  else {
    *outIsDuplicate = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** replaceTelegram_Receive_TrackSi.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

