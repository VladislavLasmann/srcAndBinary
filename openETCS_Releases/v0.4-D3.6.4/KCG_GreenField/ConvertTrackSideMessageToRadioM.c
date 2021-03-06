/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertTrackSideMessageToRadioM.h"

/* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage */
void ConvertTrackSideMessageToRadioM(
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::TrackSideMessage */ TrackSide_ForCheck_T_Common_Typ *TrackSideMessage,
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::ReceivedMessage */ ReceivedMessage_T_Common_Types_ *ReceivedMessage)
{
  (*ReceivedMessage).valid = (*TrackSideMessage).valid &
    ((*TrackSideMessage).radio_Msg.present &
      !(*TrackSideMessage).radio_Msg.consistencyError);
  (*ReceivedMessage).source = (*TrackSideMessage).msg_type;
  kcg_copy_RadioMetadata_T_Common(
    &(*ReceivedMessage).radioMetadata,
    &(*TrackSideMessage).radio_Msg.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_P(
    &(*ReceivedMessage).BG_Common_Header,
    (BG_Header_T_BG_Types_Pkg *) &cEmptyBG_Header_BG_Types_Pkg);
  kcg_copy_CompressedPackets_T_Co(
    &(*ReceivedMessage).packets,
    &(*TrackSideMessage).radio_Msg.packets);
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*ReceivedMessage).sendingRBC,
    &(*TrackSideMessage).radio_Msg.sendingRBC);
  kcg_copy_Radio_TrackTrain_Heade(
    &(*ReceivedMessage).Radio_Common_Header,
    &(*TrackSideMessage).radio_Msg.header);
  (*ReceivedMessage).Radio_Common_Header.receivedSystemTime =
    (*TrackSideMessage).systemTime;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertTrackSideMessageToRadioM.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

