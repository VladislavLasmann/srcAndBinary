/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessGeneralMessage_RBC_.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessGeneralMessage_init(outC_RBC__ProcessGeneralMessage *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->invalidAck = kcg_true;
  outC->validAck = kcg_true;
  outC->ackRequired = kcg_true;
  outC->init = kcg_true;
  outC->radioTrackTrainMessageWasSentTi = 0;
  outC->GENERAL_MESSAGE_SM_state_nxt = SSM_st_IDLE_GENERAL_MESSAGE_SM;
  outC->outTriggeredRadioTrackTrainMess.Header.radioDevice = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.receivedSystemTime = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.nid_message = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.t_train = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.m_ack = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.nid_lrbg = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.t_train_reference = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.nid_em = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.q_scale = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.d_sr = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.t_sh_rqst = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.d_ref = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.q_dir = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.d_emergencystop = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].nid_packet =
      0;
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].startAddress =
      0;
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketData[i] = 0;
  }
  outC->outRadioTrainTrackMessage.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.nid_message = 0;
  outC->outRadioTrainTrackMessage.header.t_train = 0;
  outC->outRadioTrainTrackMessage.header.nid_engine = 0;
  outC->outRadioTrainTrackMessage.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_b;
  outC->outRadioTrainTrackMessage.header.xT_TRAIN = 0;
  outC->outRadioTrainTrackMessage.header.xNID_EM = 0;
  outC->outRadioTrainTrackMessage.header.xQ_EMERGENCYSTOP =
    _7_Q_EMERGENCYSTOP_Conditional_;
  outC->outRadioTrainTrackMessage.header.xNID_TEXTMESSAGE = 0;
  outC->outRadioTrainTrackMessage.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.D_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_inf;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_TRAININT = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.V_TRAIN = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_NTC = 0;
  outC->outRadioTrainTrackMessage.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.D_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_inf;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_TRAININT = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.V_TRAIN = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_NTC = 0;
  outC->outRadioTrainTrackMessage.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p3.number = 0;
  outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[0].telephoneNumber[i] =
      0;
  }
  outC->outRadioTrainTrackMessage.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p4.m_error =
    M_ERROR_Balise_group_linking_co;
  outC->outRadioTrainTrackMessage.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p5.TrainRunningNumber = 0;
  outC->outRadioTrainTrackMessage.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p9.transitionInformation = 0;
  outC->outRadioTrainTrackMessage.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->outRadioTrainTrackMessage.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_;
  outC->outRadioTrainTrackMessage.packets.p11.l_train = 0;
  outC->outRadioTrainTrackMessage.packets.p11.v_maxtrain = 0;
  outC->outRadioTrainTrackMessage.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_n;
  outC->outRadioTrainTrackMessage.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrackMessage.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrackMessage.packets.p11.n_axle = 0;
  outC->outRadioTrainTrackMessage.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[i].nid_ctraction =
      0;
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[i] = 0;
  }
  outC->outDataBus.session.m_TrainData.nid_engine = 0;
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[0].valid =
    kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[0].telephoneNumber[i] =
      0;
  }
  outC->outDataBus.session.m_TrainData.t_train_ref = 0;
  outC->outDataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->outDataBus.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_;
  outC->outDataBus.session.m_TrainData.l_train = 0;
  outC->outDataBus.session.m_TrainData.v_maxtrain = 0;
  outC->outDataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_n;
  outC->outDataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outDataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outDataBus.session.m_TrainData.n_axle = 0;
  for (i = 0; i < 4; i++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i].nid_ctraction =
      0;
  }
  for (i = 0; i < 5; i++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[i] = 0;
  }
  outC->outDataBus.session.m_TrainData.nid_operational = 0;
  outC->outDataBus.session.m_PosData.nid_lrbg = 0;
  outC->outDataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.session.m_PosData.d_lrbg = 0;
  outC->outDataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outDataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outDataBus.session.m_PosData.l_doubtover = 0;
  outC->outDataBus.session.m_PosData.l_doubtunder = 0;
  outC->outDataBus.session.m_PosData.q_length = Q_LENGTH_No_train_integrity_inf;
  outC->outDataBus.session.m_PosData.l_trainint = 0;
  outC->outDataBus.session.m_PosData.v_train = 0;
  outC->outDataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outDataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outDataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outDataBus.session.m_PosData.nid_ntc = 0;
  outC->outDataBus.session.m_PosData.nid_prvlrbg = 0;
  outC->outDataBus.config.m_version = M_VERSION_Previous_versions_acc;
  outC->outDataBus.config.m_NationalParams.nid_c = 0;
  outC->outDataBus.config.m_NationalParams.v_nvshunt = 0;
  outC->outDataBus.config.m_NationalParams.v_nvstff = 0;
  outC->outDataBus.config.m_NationalParams.v_nvonsight = 0;
  outC->outDataBus.config.m_NationalParams.v_nvunfit = 0;
  outC->outDataBus.config.m_NationalParams.v_nvrel = 0;
  outC->outDataBus.config.m_NationalParams.t_nvcontact = 0;
  outC->outDataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_MAReqParams.t_mar = 0;
  outC->outDataBus.config.m_MAReqParams.t_timeoutrqst = 0;
  outC->outDataBus.config.m_MAReqParams.t_cycrqst = 0;
  outC->outDataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.config.m_PosRepParams.t_cycloc = 0;
  outC->outDataBus.config.m_PosRepParams.d_cycloc = 0;
  outC->outDataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->outDataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesA = 0;
  for (i = 0; i < 32; i++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualif[i].d_loc =
      0;
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualif[i].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (i = 0; i < 16; i++) {
    outC->outDataBus.diagnostic[i].valid = kcg_true;
    outC->outDataBus.diagnostic[i].count = 0;
    outC->outDataBus.diagnostic[i].timestamp = 0;
    outC->outDataBus.diagnostic[i].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnos;
    outC->outDataBus.diagnostic[i].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnost;
    outC->outDataBus.diagnostic[i].diagText = DIAG_MSG_Empty_RBC_Diagnostic_P;
  }
  for (i = 0; i < 8; i++) {
    outC->outDataBus.messageQueue.m_Entries[i].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.radioDevice = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.receivedSystemTime =
      0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.nid_message = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.t_train = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.m_ack = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.nid_lrbg = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.t_train_reference =
      0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.nid_em = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.q_scale = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.d_sr = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.t_sh_rqst = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.d_ref = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.q_dir = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.d_emergencystop =
      0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.m_version = 0;
    for (i1 = 0; i1 < 30; i1++) {
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].nid_packet =
        0;
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].startAddress =
        0;
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].endAddress =
        0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketData[i1] =
        0;
    }
  }
  outC->outDataBus.clockk.m_Value = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.radioDevice = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.receivedSystemTime = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_message = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_ack = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_lrbg = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train_reference = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_em = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_scale = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_sr = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_ref = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_dir = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_emergencystop = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].nid_packet =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].startAddress =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[i] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessGeneralMessage_rese(outC_RBC__ProcessGeneralMessage *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
void RBC__ProcessGeneralMessage_RBC_(
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessGeneralMessage *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
  static NID_MESSAGE tmp5;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
  static Radio_TrainTrack_Header_T_Radio tmp4;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
  static M_ACK tmp3;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
  static _6_Radio_TrackTrain_Header_T_TM tmp2;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
  static NID_MESSAGE tmp1;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
  static RadioTrackTrainMessageQueueEntr tmp;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L3 */
  static _6_Radio_TrackTrain_Header_T_TM _L3_GENERAL_MESSAGE_SM_AWAIT_AC;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L23 */
  static _6_Radio_TrackTrain_Header_T_TM _L23_GENERAL_MESSAGE_SM_TRY_PRO;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_GENERAL_MESSAGE_;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN last_radioTrackTrainMessageWasS;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::ackRequired */
  static kcg_bool last_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_state_act;
  
  kcg_copy_CompressedRadioMessage(
    &outC->outTriggeredRadioTrackTrainMess,
    inTriggeredRadioTrackTrainMessa);
  kcg_copy_Radio_TrainTrack_Messa(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  /* 7 */
  RadioTrackTrainMessage__GetHead(inTriggeredRadioTrackTrainMessa, &tmp2);
  tmp1 = /* 5 */ _100_RadioTrackTrainHeader__Get(&tmp2);
  /* 6 */ RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp4);
  tmp5 = /* 2 */ _148_RadioTrainTrackHeader__Get(&tmp4);
  /* last_init_ck_radioTrackTrainMessageWasSentTimestamp */ if (outC->init) {
    IfBlock1_clock_GENERAL_MESSAGE_ = kcg_false;
    last_invalidAck = kcg_false;
    GENERAL_MESSAGE_SM_state_sel = SSM_st_IDLE_GENERAL_MESSAGE_SM;
    last_ackRequired = kcg_false;
    outC->init = kcg_false;
    last_radioTrackTrainMessageWasS = T_TRAIN_MIN;
  }
  else {
    last_invalidAck = outC->invalidAck;
    GENERAL_MESSAGE_SM_state_sel = outC->GENERAL_MESSAGE_SM_state_nxt;
    IfBlock1_clock_GENERAL_MESSAGE_ = outC->validAck;
    last_ackRequired = outC->ackRequired;
    last_radioTrackTrainMessageWasS = outC->radioTrackTrainMessageWasSentTi;
  }
  /* sel_GENERAL_MESSAGE_SM */ switch (GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      if (tmp1 == 24) {
        GENERAL_MESSAGE_SM_state_act = SSM_st_SEND_GENERAL_MESSAGE_GEN;
      }
      else {
        GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GEN :
      if (last_ackRequired & (tmp5 == 146)) {
        GENERAL_MESSAGE_SM_state_act = _33_SSM_st_TRY_PROCESS_ACKNOWLE;
      }
      else if (last_ackRequired & (tmp5 != 146)) {
        GENERAL_MESSAGE_SM_state_act = SSM_st_AWAIT_ACKNOWLEDGEMENT_GE;
      }
      else if (last_ackRequired) {
        GENERAL_MESSAGE_SM_state_act = SSM_st_SEND_GENERAL_MESSAGE_GEN;
      }
      else {
        GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GE :
      if (tmp5 == 146) {
        GENERAL_MESSAGE_SM_state_act = _33_SSM_st_TRY_PROCESS_ACKNOWLE;
      }
      else {
        GENERAL_MESSAGE_SM_state_act = SSM_st_AWAIT_ACKNOWLEDGEMENT_GE;
      }
      break;
    case _33_SSM_st_TRY_PROCESS_ACKNOWLE :
      if (IfBlock1_clock_GENERAL_MESSAGE_ & (tmp1 == 24)) {
        GENERAL_MESSAGE_SM_state_act = SSM_st_SEND_GENERAL_MESSAGE_GEN;
      }
      else if (IfBlock1_clock_GENERAL_MESSAGE_) {
        GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      else if (last_invalidAck & (tmp5 == 146)) {
        GENERAL_MESSAGE_SM_state_act = _33_SSM_st_TRY_PROCESS_ACKNOWLE;
      }
      else if (last_invalidAck) {
        GENERAL_MESSAGE_SM_state_act = SSM_st_AWAIT_ACKNOWLEDGEMENT_GE;
      }
      else {
        GENERAL_MESSAGE_SM_state_act = _33_SSM_st_TRY_PROCESS_ACKNOWLE;
      }
      break;
    
  }
  kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
  /* act_GENERAL_MESSAGE_SM */ switch (GENERAL_MESSAGE_SM_state_act) {
    case _33_SSM_st_TRY_PROCESS_ACKNOWLE :
      /* 5 */
      RadioTrackTrainMessage__GetHead(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L23_GENERAL_MESSAGE_SM_TRY_PRO);
      tmp5 = /* 4 */
        _100_RadioTrackTrainHeader__Get(&_L23_GENERAL_MESSAGE_SM_TRY_PRO);
      /* 5 */ if (tmp5 == 24) {
        outC->radioTrackTrainMessageWasSentTi = /* 3 */
          RadioTrackTrainHeader__Get_T_TR(&_L23_GENERAL_MESSAGE_SM_TRY_PRO);
      }
      else {
        outC->radioTrackTrainMessageWasSentTi = last_radioTrackTrainMessageWasS;
      }
      /* 5 */ RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp4);
      IfBlock1_clock_GENERAL_MESSAGE_ = /* 2 */
        _151_RadioTrainTrackHeader__Get(&tmp4) ==
        outC->radioTrackTrainMessageWasSentTi;
      /* ck_IfBlock1 */ if (IfBlock1_clock_GENERAL_MESSAGE_) {
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      outC->ackRequired = last_ackRequired;
      outC->GENERAL_MESSAGE_SM_state_nxt = _33_SSM_st_TRY_PROCESS_ACKNOWLE;
      kcg_copy__9_RadioTrackTrainMess(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GE :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      outC->ackRequired = last_ackRequired;
      /* 4 */
      RadioTrackTrainMessage__GetHead(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L3_GENERAL_MESSAGE_SM_AWAIT_AC);
      tmp1 = /* 3 */
        _100_RadioTrackTrainHeader__Get(&_L3_GENERAL_MESSAGE_SM_AWAIT_AC);
      /* 4 */ if (tmp1 == 24) {
        outC->radioTrackTrainMessageWasSentTi = /* 2 */
          RadioTrackTrainHeader__Get_T_TR(&_L3_GENERAL_MESSAGE_SM_AWAIT_AC);
      }
      else {
        outC->radioTrackTrainMessageWasSentTi = last_radioTrackTrainMessageWasS;
      }
      outC->GENERAL_MESSAGE_SM_state_nxt = SSM_st_AWAIT_ACKNOWLEDGEMENT_GE;
      kcg_copy__9_RadioTrackTrainMess(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GEN :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      /* 10 */
      RadioTrackTrainMessage__GetHead(inTriggeredRadioTrackTrainMessa, &tmp2);
      tmp3 = /* 2 */ RadioTrackTrainHeader__Get_M_AC(&tmp2);
      /* 6 */ if (tmp3 == M_ACK_Acknowledgement_required) {
        outC->ackRequired = kcg_true;
      }
      else {
        outC->ackRequired = kcg_false;
      }
      outC->radioTrackTrainMessageWasSentTi = last_radioTrackTrainMessageWasS;
      outC->GENERAL_MESSAGE_SM_state_nxt = SSM_st_SEND_GENERAL_MESSAGE_GEN;
      /* 1 */
      _73_RadioTrackTrainMessageQueue(inTriggeredRadioTrackTrainMessa, &tmp);
      /* 1 */
      _77_RadioTrackTrainMessageQueue(
        &(*inDataBus).messageQueue,
        &tmp,
        &outC->outDataBus.messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      outC->ackRequired = last_ackRequired;
      outC->radioTrackTrainMessageWasSentTi = last_radioTrackTrainMessageWasS;
      outC->GENERAL_MESSAGE_SM_state_nxt = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      kcg_copy__9_RadioTrackTrainMess(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessGeneralMessage_RBC_.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

