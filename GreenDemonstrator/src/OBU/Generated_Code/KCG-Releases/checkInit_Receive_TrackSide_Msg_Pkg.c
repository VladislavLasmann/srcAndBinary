/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkInit_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::checkInit */
void checkInit_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkInit::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkInit::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  /* Receive_TrackSide_Msg_Pkg::checkInit::isDefined */
  static kcg_bool isDefined;
  
  isDefined = (*inCollector).totalTelegrams > 0;
  /* ck_isDefined */ if (isDefined) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, inCollector);
  }
  else {
    /* 1 */
    initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      newTelegram,
      outCollector);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkInit_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

