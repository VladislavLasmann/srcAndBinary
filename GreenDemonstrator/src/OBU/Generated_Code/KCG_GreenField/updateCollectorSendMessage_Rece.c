/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSendMessage_Rece.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage */
void updateCollectorSendMessage_Rece(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::inCollector */ BGCollector_T_Receive_TrackSide *inCollector,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::outCollector */ BGCollector_T_Receive_TrackSide *outCollector)
{
  (*outCollector).badBaliseFlag = (*inCollector).badBaliseFlag;
  (*outCollector).BGMessageSent = kcg_true;
  (*outCollector).C_ID = (*inCollector).C_ID;
  (*outCollector).BG_ID = (*inCollector).BG_ID;
  kcg_copy_centerOfBalisePosition(
    &(*outCollector).balisePosition,
    &(*inCollector).balisePosition);
  kcg_copy_centerOfBalisePosition(
    &(*outCollector).positionFirstContact,
    &(*inCollector).positionFirstContact);
  (*outCollector).collectedTelegrams = (*inCollector).collectedTelegrams;
  (*outCollector).totalTelegrams = (*inCollector).totalTelegrams;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** updateCollectorSendMessage_Rece.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

