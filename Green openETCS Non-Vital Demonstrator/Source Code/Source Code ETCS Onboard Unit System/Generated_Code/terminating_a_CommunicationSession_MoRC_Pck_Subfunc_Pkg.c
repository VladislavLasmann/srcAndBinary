/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg.h"

void terminating_a_CommunicationSession_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession */
void terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::initiateTermination */kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::aSessionIsEstablished */kcg_bool aSessionIsEstablished,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::acknowledgementOfTerminationOfCommunicationSessionReceived */kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::aSessionIsCurrentlyBeingEstablished */kcg_bool aSessionIsCurrentlyBeingEstablished,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::actualTime */time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::establishingACommunicationSessionAborted */kcg_bool establishingACommunicationSessionAborted,
  outC_terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::WaitForAcknowledgementMessage */
  static kcg_bool WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM;
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::WaitForAcknowledgementMessage */
  static kcg_bool br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage;
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::EstablishingACommunicationSessionAborted */
  static kcg_bool EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM;
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
  static SSM_ST_TerminateTheCommunicationSession_SM TerminateTheCommunicationSession_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
  static SSM_ST_TerminateTheCommunicationSession_SM TerminateTheCommunicationSession_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
  static kcg_bool TerminateTheCommunicationSession_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
  static SSM_TR_TerminateTheCommunicationSession_SM TerminateTheCommunicationSession_SM_fired_strong;
  
  WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM =
    initiateTermination & aSessionIsCurrentlyBeingEstablished;
  if (outC->init) {
    outC->init = kcg_false;
    TerminateTheCommunicationSession_SM_state_sel =
      SSM_st_Idle_TerminateTheCommunicationSession_SM;
  }
  else {
    TerminateTheCommunicationSession_SM_state_sel =
      outC->TerminateTheCommunicationSession_SM_state_nxt;
  }
  switch (TerminateTheCommunicationSession_SM_state_sel) {
    case SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_state_act =
        SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_fired_strong =
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_reset_act = kcg_false;
      outC->abortEstablishingACommunicationSession = kcg_false;
      break;
    case SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_state_act =
        SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_fired_strong =
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_reset_act = kcg_false;
      outC->abortEstablishingACommunicationSession = kcg_false;
      break;
    case SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_state_act =
        SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_fired_strong =
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_reset_act = kcg_false;
      outC->abortEstablishingACommunicationSession = kcg_false;
      break;
    case SSM_st_Idle_TerminateTheCommunicationSession_SM :
      EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM =
        initiateTermination & aSessionIsEstablished;
      if (EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM) {
        TerminateTheCommunicationSession_SM_state_act =
          SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
        TerminateTheCommunicationSession_SM_fired_strong =
          SSM_TR_Idle_1_TerminateTheCommunicationSession_SM;
        TerminateTheCommunicationSession_SM_reset_act = kcg_true;
        outC->abortEstablishingACommunicationSession = kcg_false;
      }
      else {
        TerminateTheCommunicationSession_SM_reset_act =
          WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM;
        if (WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM) {
          TerminateTheCommunicationSession_SM_state_act =
            SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
          TerminateTheCommunicationSession_SM_fired_strong =
            SSM_TR_Idle_2_TerminateTheCommunicationSession_SM;
          outC->abortEstablishingACommunicationSession = kcg_true;
        }
        else {
          TerminateTheCommunicationSession_SM_state_act =
            SSM_st_Idle_TerminateTheCommunicationSession_SM;
          TerminateTheCommunicationSession_SM_fired_strong =
            SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
          outC->abortEstablishingACommunicationSession = kcg_false;
        }
      }
      break;
    
  }
  switch (TerminateTheCommunicationSession_SM_state_act) {
    case SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->communicationSessionTerminated = kcg_false;
      EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM =
        TerminateTheCommunicationSession_SM_fired_strong !=
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      if (EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM) {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      else if (establishingACommunicationSessionAborted) {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
      }
      else {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      break;
    case SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->communicationSessionTerminated = kcg_true;
      outC->TerminateTheCommunicationSession_SM_state_nxt =
        SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      break;
    case SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM =
        TerminateTheCommunicationSession_SM_fired_strong !=
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_true;
      outC->communicationSessionTerminated = kcg_false;
      if (TerminateTheCommunicationSession_SM_reset_act) {
        /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer_MoRC_Pck_Utils(
        actualTime,
        kcg_false,
        kcg_false,
        cTerminationOfCommunicationSessionRepetitionInterval_MoRC_Pck,
        cTerminationOfCommunicationSession_MaxNoOfRepetitions_MoRC_Pck,
        &outC->Context_1);
      if (WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM) {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      else {
        br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage =
          acknowledgementOfTerminationOfCommunicationSessionReceived |
          outC->Context_1.elapsed;
        if (br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage) {
          outC->TerminateTheCommunicationSession_SM_state_nxt =
            SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
          outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
        }
        else {
          outC->TerminateTheCommunicationSession_SM_state_nxt =
            SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
          outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
        }
      }
      outC->sendATerminationOfCommunicationMessage =
        outC->Context_1.triggerAction;
      break;
    case SSM_st_Idle_TerminateTheCommunicationSession_SM :
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->communicationSessionTerminated = kcg_false;
      outC->TerminateTheCommunicationSession_SM_state_nxt =
        SSM_st_Idle_TerminateTheCommunicationSession_SM;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
