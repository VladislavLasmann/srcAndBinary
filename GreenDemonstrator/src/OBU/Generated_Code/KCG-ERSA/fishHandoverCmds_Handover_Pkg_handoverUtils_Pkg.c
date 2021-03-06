/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds */
void fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::dataFromTrack */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::dataFromHandingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p45_radioNetworkRegistrationOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p131_RBCTransitionOrder_decoced */ p131_q_rbcTransitionOrder_T_Handover_Pkg *p131_RBCTransitionOrder_decoced,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p131_RBCTransitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_RBCTransitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p42_terminateCmd_from_handingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::sessionCmdsFromTrack */ msgFromTrack_T_RCM_MsgTypes_Pkg *sessionCmdsFromTrack)
{
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L6 */ kcg_bool _L6;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L29 */ kcg_bool _L29;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L78 */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L78;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L79 */ P131_OBU_T_TM _L79;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L115 */ P42_SessionManagement_T_Packet_Types_Pkg _L115;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L102 */ kcg_bool _L102;
  
  (*p131_RBCTransitionOrder_decoced).source = (*dataFromTrack).source;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*p131_RBCTransitionOrder_decoced).location,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  /* 1 */ Read_P045_TM(&(*dataFromTrack).packets, &_L6, &_L78);
  /* 1 */ Read_P131_TM(&(*dataFromTrack).packets, &_L102, &_L79);
  (*p131_RBCTransitionOrder_decoced).contactLastKnownRBC =
    cNID_RBC_contactLastKnownRBC_MoRC_Pck_Coder_Pkg == _L79.nid_rbc;
  (*p131_RBCTransitionOrder_decoced).useTheShortNumberStoredOnboard =
    cNID_RADIO_useTheShortNumberStoredOnboard_MoRC_Pck_Coder_Pkg ==
    _L79.nid_radio;
  kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg(
    &(*p131_RBCTransitionOrder_decoced).order,
    &_L79);
  _L29 = (*dataFromTrack).valid & _L79.valid & _L102;
  (*p131_RBCTransitionOrder_decoced).valid = _L29;
  /* 1 */ if (msrc_Eurobalise_Common_Types_Pkg == (*dataFromTrack).source) {
    (*p131_RBCTransitionOrder_decoced).nid_lrbg = /* 1 */
      nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        (*dataFromTrack).BG_Common_Header.valid,
        (*dataFromTrack).BG_Common_Header.nid_c,
        (*dataFromTrack).BG_Common_Header.nid_bg);
  }
  else {
    (*p131_RBCTransitionOrder_decoced).nid_lrbg =
      (*dataFromTrack).Radio_Common_Header.nid_lrbg;
  }
  /* 1 */ Read_P042_TM(&(*dataFromHandingOverRBC).packets, &_L102, &_L115);
  /* 2 */ if ((*dataFromHandingOverRBC).valid &
    ((*dataFromHandingOverRBC).source == msrc_Euroradio_Common_Types_Pkg) &
    _L102 & (Q_RBC_Terminate_communication_session == _L115.q_rbc) &
    _L115.valid) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p42_terminateCmd_from_handingOverRBC,
      dataFromHandingOverRBC);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p42_terminateCmd_from_handingOverRBC,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
  /* 2 */ Read_P042_TM(&(*dataFromTrack).packets, &_L102, &_L115);
  /* 3 */ if (((*dataFromTrack).valid & _L102) | ((*dataFromTrack).valid &
      ((*dataFromTrack).source == msrc_Euroradio_Common_Types_Pkg) &
      (((*dataFromTrack).Radio_Common_Header.nid_message ==
          cm38_Initiation_of_a_Communication_Session_Id_Pkg) |
        ((*dataFromTrack).Radio_Common_Header.nid_message ==
          cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg) |
        ((*dataFromTrack).Radio_Common_Header.nid_message ==
          cm32_RBC_RIU_System_Version_Id_Pkg)))) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      sessionCmdsFromTrack,
      dataFromTrack);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      sessionCmdsFromTrack,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
  /* 4 */ if (_L6 & (*dataFromTrack).valid) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p45_radioNetworkRegistrationOrder,
      dataFromTrack);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p45_radioNetworkRegistrationOrder,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
  /* 5 */ if (_L29) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p131_RBCTransitionOrder,
      dataFromTrack);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p131_RBCTransitionOrder,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

