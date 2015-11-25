/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BTM_Toolbox_TrainModules.h"

/* Toolbox::TrainModules::BTM */
void BTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::BTM::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::BTM::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* Toolbox::TrainModules::BTM::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::BTM::TelegramHeader */ TelegramHeader_T_BG_Types_Pkg *TelegramHeader,
  /* Toolbox::TrainModules::BTM::TrackMessage */ API_TrackSideInput_T_API_Msg_Pkg *TrackMessage)
{
  /* Toolbox::TrainModules::BTM::_L23 */ kcg_bool _L23;
  
  (*TrackMessage).systemTimeMsgReceived = systemTime;
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(
    &(*TrackMessage).rtm_msg,
    (API_RadioMsgHeader_T_API_Msg_Pkg *) &cEmptyRadioMsgHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*TrackMessage).packets,
    Packets);
  _L23 = (*TelegramHeader).nid_c != 0;
  (*TrackMessage).valid = _L23;
  /* 1 */ if (_L23) {
    (*TrackMessage).msg_type = msrc_Eurobalise_Common_Types_Pkg;
  }
  else {
    (*TrackMessage).msg_type = msrc_undefined_Common_Types_Pkg;
  }
  (*TrackMessage).btm_msg.present = _L23;
  (*TrackMessage).btm_msg.checkResult = kcg_true;
  (*TrackMessage).btm_msg.api_bad_balise_received = kcg_false;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &(*TrackMessage).btm_msg.api_header,
    TelegramHeader);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &(*TrackMessage).btm_msg.centerOfBalisePosition.odometerOfBaliseDetection,
    odometry);
  /* 1 */
  ODO_doLocInacc_Toolbox_Functions(
    - 10,
    10,
    &(*TrackMessage).btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BTM_Toolbox_TrainModules.c
** Generation date: 2015-11-25T14:46:15
*************************************************************$ */

