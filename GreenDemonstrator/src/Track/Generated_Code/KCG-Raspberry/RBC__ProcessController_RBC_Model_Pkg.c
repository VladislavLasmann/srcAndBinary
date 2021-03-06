/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessController_RBC_Model_Pkg.h"

void RBC__ProcessController_reset_RBC_Model_Pkg(
  outC_RBC__ProcessController_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  outC->init10 = kcg_true;
  outC->init11 = kcg_true;
  /* 2 */ RBC__ProcessGeneralMessage_reset_RBC_Model_Pkg(&outC->Context_2);
  /* 1 */ RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(&outC->Context_1);
  /* 1 */
  RBC__ProcessRevocationOfEmergencyStop_reset_RBC_Model_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(&outC->_2_Context_1);
  /* 1 */
  RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(&outC->_4_Context_1);
  /* 1 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->_5_Context_1);
  /* 1 */ RBC__ProcessPositionReport_reset_RBC_Model_Pkg(&outC->_6_Context_1);
  /* 2 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->_7_Context_2);
}

/* RBC_Model_Pkg::RBC__ProcessController */
void RBC__ProcessController_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessController::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessController::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessController::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessController_RBC_Model_Pkg *outC)
{
  NID_MESSAGE tmp47;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp46;
  NID_MESSAGE tmp45;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp44;
  PosData_T tmp43;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg tmp42;
  outPackets_T_Common_Types_Pkg tmp41;
  PosData_T tmp40;
  PosData_T tmp39;
  RadioTrackTrainMessageQueueEntry_T tmp38;
  CompressedRadioMessage_TM tmp37;
  NID_LRBG tmp36;
  PosData_T tmp35;
  RadioTrackTrainMessageQueueEntry_T tmp34;
  CompressedRadioMessage_TM tmp33;
  NID_LRBG tmp32;
  PosData_T tmp31;
  P057_trackside_int_T_TM tmp30;
  Q_DIR tmp29;
  T_MAR tmp28;
  T_TIMEOUTRQST tmp27;
  T_CYCRQST tmp26;
  P058_trackside_int_T_TM tmp25;
  Q_DIR tmp24;
  Q_SCALE tmp23;
  T_CYCLOC tmp22;
  D_CYCLOC tmp21;
  M_LOC tmp20;
  N_ITER tmp19;
  array__47228 tmp18;
  SessionManagement_T tmp17;
  TrainData_T tmp16;
  TrainData_T tmp15;
  RadioTrackTrainMessageQueueEntry_T tmp14;
  CompressedRadioMessage_TM tmp13;
  NID_LRBG tmp12;
  T_TRAIN tmp11;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp10;
  TrainData_T tmp9;
  TrainData_T tmp8;
  TrainData_T tmp7;
  TrainData_T tmp6;
  NID_ENGINE tmp5;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp4;
  RadioTrackTrainMessageQueueEntry_T tmp3;
  CompressedRadioMessage_TM tmp2;
  M_VERSION tmp1;
  NID_MESSAGE tmp;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L16 */ SessionManagement_T _L16_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */ kcg_bool SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */ SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */ SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED SESSION_ESTABLISHED_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L12 */ MAReqParams_T _L12_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L23 */ PosRepParams_T _L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L6 */ Radio_TrackTrain_Header_T_TM _L6_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::IfBlock1 */ kcg_bool IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT */ kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */ SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS SEND_MA_AMD_POS_REP_PARAMS_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */ SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */ kcg_bool SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L44 */ Radio_TrackTrain_Header_T_TM _L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */ kcg_bool IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L20 */ Radio_TrackTrain_Header_T_TM _L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L14 */ PosData_T _L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::radioTrackTrainMessageWasSentTimestamp */ T_TRAIN last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */ SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA PROCESS_VALIDATED_TRAIN_DATA_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */ SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
  /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMAandPosRepParams */ kcg_bool last_invalidAckForMAandPosRepParams;
  /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMessage129 */ kcg_bool last_invalidAckForMessage129;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */ SSM_ST_CONTROLLER_SM CONTROLLER_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */ SSM_ST_CONTROLLER_SM CONTROLLER_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */ kcg_bool CONTROLLER_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessController::radioTrainTrackMessageId */ NID_MESSAGE radioTrainTrackMessageId;
  
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackMessage,
    &tmp4);
  radioTrainTrackMessageId = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &tmp4);
  if (outC->init11) {
    CONTROLLER_SM_state_sel = SSM_st_SESSION_TERMINATED_CONTROLLER_SM;
    last_invalidAckForMAandPosRepParams = kcg_false;
    br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT =
      kcg_false;
  }
  else {
    CONTROLLER_SM_state_sel = outC->CONTROLLER_SM_state_nxt;
    last_invalidAckForMAandPosRepParams = outC->paramsSent;
    br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT =
      outC->trainDataValidated;
  }
  switch (CONTROLLER_SM_state_sel) {
    case SSM_st_SESSION_TERMINATED_CONTROLLER_SM :
      CONTROLLER_SM_reset_act = radioTrainTrackMessageId == 155;
      if (CONTROLLER_SM_reset_act) {
        CONTROLLER_SM_state_act = SSM_st_SEND_RBC_VERSION_CONTROLLER_SM;
      }
      else {
        CONTROLLER_SM_state_act = SSM_st_SESSION_TERMINATED_CONTROLLER_SM;
      }
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROLLER_SM :
      CONTROLLER_SM_reset_act = kcg_true;
      if ((radioTrainTrackMessageId == 159) | (radioTrainTrackMessageId ==
          154)) {
        CONTROLLER_SM_state_act = SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM;
      }
      else {
        CONTROLLER_SM_state_act =
          SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM;
      }
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM :
      CONTROLLER_SM_reset_act = (radioTrainTrackMessageId == 159) |
        (radioTrainTrackMessageId == 154);
      if (CONTROLLER_SM_reset_act) {
        CONTROLLER_SM_state_act = SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM;
      }
      else {
        CONTROLLER_SM_state_act =
          SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM;
      }
      break;
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      CONTROLLER_SM_reset_act = radioTrainTrackMessageId == 156;
      if (CONTROLLER_SM_reset_act) {
        CONTROLLER_SM_state_act =
          SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
      }
      else {
        CONTROLLER_SM_state_act = SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM;
      }
      break;
    case SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM :
      CONTROLLER_SM_reset_act = kcg_true;
      if (radioTrainTrackMessageId == 155) {
        CONTROLLER_SM_state_act = SSM_st_SEND_RBC_VERSION_CONTROLLER_SM;
      }
      else {
        CONTROLLER_SM_state_act = SSM_st_SESSION_TERMINATED_CONTROLLER_SM;
      }
      break;
    
  }
  switch (CONTROLLER_SM_state_act) {
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      if (CONTROLLER_SM_reset_act) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        SESSION_ESTABLISHED_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED =
          SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
      }
      else {
        SESSION_ESTABLISHED_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED =
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
      }
      switch (SESSION_ESTABLISHED_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_true;
          SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (last_invalidAckForMAandPosRepParams) {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            last_invalidAckForMAandPosRepParams;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
            radioTrainTrackMessageId == 129;
          if (SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS) {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          last_invalidAckForMessage129 = radioTrainTrackMessageId == 159;
          IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT =
            radioTrainTrackMessageId == 154;
          if (last_invalidAckForMessage129) {
            SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              kcg_true;
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            if (IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT) {
              SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
                SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
            }
            else {
              SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
                SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
            }
            SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT;
          }
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            radioTrainTrackMessageId == 150;
          if (SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          break;
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT) {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT;
          break;
        case SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_true;
          if (radioTrainTrackMessageId == 129) {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          break;
        
      }
      switch (SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            outC->init10 = kcg_true;
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        outC->init8 = kcg_true;
        outC->init10 = kcg_true;
      }
      switch (SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            outC->init8 = kcg_true;
          }
          if (outC->init8) {
            SEND_MA_AMD_POS_REP_PARAMS_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
              SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
          }
          else {
            SEND_MA_AMD_POS_REP_PARAMS_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
          }
          break;
        
      }
      break;
    
  }
  if (outC->init11) {
    last_invalidAckForMAandPosRepParams = kcg_false;
    outC->init11 = kcg_false;
    last_invalidAckForMessage129 = kcg_false;
  }
  else {
    last_invalidAckForMAandPosRepParams = outC->invalidAckForMAandPosRepParams;
    last_invalidAckForMessage129 = outC->invalidAckForMessage129;
  }
  switch (CONTROLLER_SM_state_act) {
    case SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM :
      outC->paramsSent = kcg_false;
      outC->invalidAckForMAandPosRepParams = kcg_false;
      outC->trainDataValidated = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
      /* 1 */
      SessionManagement__Reset_RBC_Session_Pkg(
        &(*inDataBus).session,
        &outC->outDataBus.session);
      /* 5 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp35);
      tmp36 = /* 4 */ PosData__Get_NID_LRBG_RBC_Session_Pkg(&tmp35);
      /* 1 */
      RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
        T_TRAIN_MIN,
        tmp36,
        &tmp37);
      /* 5 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &tmp37,
        &tmp38);
      /* 5 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &(*inDataBus).messageQueue,
        &tmp38,
        &outC->outDataBus.messageQueue);
      outC->CONTROLLER_SM_state_nxt =
        SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
      break;
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      switch (SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          switch (SEND_MA_AMD_POS_REP_PARAMS_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM :
              SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                kcg_true;
              SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM :
              SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                kcg_true;
              if (radioTrainTrackMessageId == 146) {
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              }
              else {
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                  SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              }
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM :
              SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                radioTrainTrackMessageId == 146;
              if (SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS) {
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              }
              else {
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                  SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              }
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM :
              br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT =
                (radioTrainTrackMessageId == 146) &
                last_invalidAckForMAandPosRepParams;
              if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT) {
                SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                  kcg_true;
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              }
              else {
                if (last_invalidAckForMAandPosRepParams) {
                  SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                    SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
                }
                else {
                  SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                    SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
                }
                SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                  last_invalidAckForMAandPosRepParams;
              }
              break;
            
          }
          switch (SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS) {
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM :
              if (SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS) {
                outC->init9 = kcg_true;
              }
              break;
            
          }
          if (SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            outC->init9 = kcg_true;
          }
          break;
        
      }
      outC->init = kcg_false;
      if (CONTROLLER_SM_reset_act) {
        outC->init9 = kcg_true;
        /* 2 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->_7_Context_2);
        /* 1 */
        RBC__ProcessPositionReport_reset_RBC_Model_Pkg(&outC->_6_Context_1);
        /* 1 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->_5_Context_1);
        /* 1 */
        RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(
          &outC->_4_Context_1);
        /* 1 */
        RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
          &outC->_3_Context_1);
        /* 1 */
        RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(&outC->_2_Context_1);
        /* 1 */
        RBC__ProcessRevocationOfEmergencyStop_reset_RBC_Model_Pkg(
          &outC->_1_Context_1);
        /* 1 */
        RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(&outC->Context_1);
        /* 2 */
        RBC__ProcessGeneralMessage_reset_RBC_Model_Pkg(&outC->Context_2);
      }
      outC->CONTROLLER_SM_state_nxt = SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM;
      switch (SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          if (SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 2 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->_7_Context_2);
          }
          /* 2 */
          RBC__PingTrain_RBC_Model_Pkg(
            (P042_trackside_int_T_TM *) &P042_RequestSessionTermination,
            inDataBus,
            inRadioTrainTrackMessage,
            inTriggeredRadioTrackTrainMessage,
            &outC->_7_Context_2);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &outC->outDataBus,
            &outC->_7_Context_2.outDataBus);
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          outC->init8 = kcg_false;
          switch (SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS) {
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM :
              /* 4 */
              RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                &(*inDataBus).lastSentTrackTrainMessage,
                &_L6_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT);
              tmp45 = /* 4 */
                RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L6_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT);
              if (tmp45 == 24) {
                outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT =
                  /* 5 */
                  RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                    &_L6_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT);
              }
              else if (outC->init9) {
                outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT =
                  T_TRAIN_MIN;
              }
              /* 7 */
              RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                inRadioTrainTrackMessage,
                &tmp44);
              IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT =
                /* 2 */
                RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                  &tmp44) ==
                outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT;
              if (IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT) {
                outC->paramsSent = kcg_true;
                outC->invalidAckForMAandPosRepParams = kcg_false;
              }
              else {
                outC->paramsSent = kcg_false;
                outC->invalidAckForMAandPosRepParams = kcg_true;
              }
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &outC->outDataBus.messageQueue,
                &(*inDataBus).messageQueue);
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              outC->init9 = kcg_false;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM :
              outC->paramsSent = kcg_false;
              outC->invalidAckForMAandPosRepParams = kcg_false;
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &outC->outDataBus.messageQueue,
                &(*inDataBus).messageQueue);
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM :
              outC->paramsSent = kcg_false;
              outC->invalidAckForMAandPosRepParams = kcg_false;
              /* 2 */
              DynamicConfig__GetMAReqParams_RBC_Config_Pkg(
                &(*inDataBus).config,
                &_L12_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              /* 2 */
              DynamicConfig__GetPosRepParams_RBC_Config_Pkg(
                &(*inDataBus).config,
                &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              /* 7 */
              SessionManagement__GetPosData_RBC_Session_Pkg(
                &(*inDataBus).session,
                &tmp31);
              tmp32 = /* 9 */ PosData__Get_NID_LRBG_RBC_Session_Pkg(&tmp31);
              tmp29 = /* 2 */
                MAReqParams__Get_Q_DIR_RBC_Config_Pkg(
                  &_L12_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              tmp28 = /* 2 */
                MAReqParams__Get_T_MAR_RBC_Config_Pkg(
                  &_L12_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              tmp27 = /* 2 */
                MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg(
                  &_L12_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              tmp26 = /* 2 */
                MAReqParams__Get_T_CYCRQST_RBC_Config_Pkg(
                  &_L12_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              /* 2 */
              RadioTrackTrainFactory__CreateP057_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
                tmp29,
                tmp28,
                tmp27,
                tmp26,
                &tmp30);
              tmp24 = /* 2 */
                PosRepParams__Get_Q_DIR_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              tmp23 = /* 2 */
                PosRepParams__Get_Q_SCALE_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              tmp22 = /* 2 */
                PosRepParams__Get_T_CYCLOC_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              tmp21 = /* 2 */
                PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              tmp20 = /* 2 */
                PosRepParams__Get_M_LOC_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              tmp19 = /* 2 */
                PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS);
              /* 2 */
              PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
                &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS,
                &tmp18);
              /* 2 */
              RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
                tmp24,
                tmp23,
                tmp22,
                tmp21,
                tmp20,
                tmp19,
                &tmp18,
                &tmp25);
              /* 2 */
              RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
                T_TRAIN_MIN,
                M_ACK_Acknowledgement_required,
                tmp32,
                (P003V1_trackside_int_T_TM_baseline2 *) &P003_DEFAULT,
                (P005_trackside_int_T_TM *) &P005_DEFAULT,
                (P042_trackside_int_T_TM *) &P042_DEFAULT,
                &tmp30,
                &tmp25,
                &tmp33);
              /* 9 */
              RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
                &tmp33,
                &tmp34);
              /* 9 */
              RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
                &(*inDataBus).messageQueue,
                &tmp34,
                &outC->outDataBus.messageQueue);
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              break;
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM :
              outC->paramsSent = kcg_false;
              outC->invalidAckForMAandPosRepParams = kcg_false;
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &outC->outDataBus.messageQueue,
                &(*inDataBus).messageQueue);
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
                SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM;
              break;
            
          }
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          if (SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 1 */
            RBC__ProcessPositionReport_reset_RBC_Model_Pkg(&outC->_6_Context_1);
            /* 1 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->_5_Context_1);
            /* 1 */
            RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(
              &outC->_4_Context_1);
            /* 1 */
            RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
              &outC->_3_Context_1);
            /* 1 */
            RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(
              &outC->_2_Context_1);
            /* 1 */
            RBC__ProcessRevocationOfEmergencyStop_reset_RBC_Model_Pkg(
              &outC->_1_Context_1);
            /* 1 */
            RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(&outC->Context_1);
            /* 2 */
            RBC__ProcessGeneralMessage_reset_RBC_Model_Pkg(&outC->Context_2);
          }
          /* 1 */
          RBC__ProcessPositionReport_RBC_Model_Pkg(
            inDataBus,
            inRadioTrainTrackMessage,
            inTriggeredRadioTrackTrainMessage,
            &outC->_6_Context_1);
          /* 1 */
          RBC__PingTrain_RBC_Model_Pkg(
            (P042_trackside_int_T_TM *) &P042_DEFAULT,
            &outC->_6_Context_1.outDataBus,
            &outC->_6_Context_1.outRadioTrainTrackMessage,
            &outC->_6_Context_1.outTriggeredRadioTrackTrainMessage,
            &outC->_5_Context_1);
          /* 1 */
          RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
            &outC->_5_Context_1.outDataBus,
            &outC->_5_Context_1.outRadioTrainTrackMessage,
            &outC->_5_Context_1.outTriggeredRadioTrackTrainMessage,
            &outC->_4_Context_1);
          /* 1 */
          RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg(
            &outC->_4_Context_1.outDataBus,
            &outC->_4_Context_1.outRadioTrainTrackMessage,
            &outC->_4_Context_1.outTriggeredRadioTrackTrainMessage,
            &outC->_3_Context_1);
          /* 1 */
          RBC__ProcessMovementAuthority_RBC_Model_Pkg(
            &outC->_3_Context_1.outDataBus,
            &outC->_3_Context_1.outRadioTrainTrackMessage,
            &outC->_3_Context_1.outTriggeredRadioTrackTrainMessage,
            &outC->_2_Context_1);
          /* 1 */
          RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg(
            &outC->_2_Context_1.outDataBus,
            &outC->_2_Context_1.outRadioTrainTrackMessage,
            &outC->_2_Context_1.outTriggeredRadioTrackTrainMessage,
            &outC->_1_Context_1);
          /* 1 */
          RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
            &outC->_1_Context_1.outDataBus,
            &outC->_1_Context_1.outRadioTrainTrackMessage,
            &outC->_1_Context_1.outTriggeredRadioTrackTrainMessage,
            &outC->Context_1);
          /* 2 */
          RBC__ProcessGeneralMessage_RBC_Model_Pkg(
            &outC->Context_1.outDataBus,
            &outC->Context_1.outRadioTrainTrackMessage,
            &outC->Context_1.outTriggeredRadioTrackTrainMessage,
            &outC->Context_2);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &outC->outDataBus,
            &outC->Context_2.outDataBus);
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          break;
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          if (outC->init10) {
            PROCESS_VALIDATED_TRAIN_DATA_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
              SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
            last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
              T_TRAIN_MIN;
          }
          else {
            PROCESS_VALIDATED_TRAIN_DATA_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
            last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
              outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
          }
          switch (PROCESS_VALIDATED_TRAIN_DATA_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM :
              PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM :
              if ((radioTrainTrackMessageId == 146) &
                last_invalidAckForMessage129) {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              }
              else if (last_invalidAckForMessage129) {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              }
              else {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              }
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM :
              if (radioTrainTrackMessageId == 146) {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              }
              else {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              }
              break;
            case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM :
              if (radioTrainTrackMessageId == 146) {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              }
              else {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              }
              break;
            
          }
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          switch (PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA) {
            case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM :
              outC->trainDataValidated = kcg_false;
              outC->invalidAckForMessage129 = kcg_false;
              /* 1 */
              SessionManagement__GetPosData_RBC_Session_Pkg(
                &(*inDataBus).session,
                &tmp43);
              /* 1 */
              PosData__Update_RBC_Session_Pkg(
                &tmp43,
                inRadioTrainTrackMessage,
                &_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
              /* 3 */
              SessionManagement__SetPosData_RBC_Session_Pkg(
                &(*inDataBus).session,
                &_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA,
                &tmp17);
              /* 11 */
              SessionManagement__GetTrainData_RBC_Session_Pkg(
                &(*inDataBus).session,
                &tmp15);
              /* 2 */
              TrainData__UpdateWithP011_RBC_Session_Pkg(
                &tmp15,
                inRadioTrainTrackMessage,
                &tmp16);
              /* 11 */
              SessionManagement__SetTrainData_RBC_Session_Pkg(
                &tmp17,
                &tmp16,
                &outC->outDataBus.session);
              tmp12 = /* 7 */
                PosData__Get_NID_LRBG_RBC_Session_Pkg(
                  &_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA);
              /* 6 */
              RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                inRadioTrainTrackMessage,
                &tmp10);
              tmp11 = /* 2 */
                RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                  &tmp10);
              /* 2 */
              RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
                T_TRAIN_MIN,
                M_ACK_Acknowledgement_required,
                tmp12,
                tmp11,
                &tmp13);
              /* 7 */
              RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
                &tmp13,
                &tmp14);
              /* 7 */
              RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
                &(*inDataBus).messageQueue,
                &tmp14,
                &outC->outDataBus.messageQueue);
              outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM :
              outC->trainDataValidated = kcg_false;
              outC->invalidAckForMessage129 = kcg_false;
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
              /* 3 */
              RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                &(*inDataBus).lastSentTrackTrainMessage,
                &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_AWAIT_ACKNOWLEDGEMENT);
              tmp = /* 3 */
                RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_AWAIT_ACKNOWLEDGEMENT);
              if (tmp == 8) {
                outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  /* 4 */
                  RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                    &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_AWAIT_ACKNOWLEDGEMENT);
              }
              else {
                outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
              }
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM :
              /* 1 */
              RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                &(*inDataBus).lastSentTrackTrainMessage,
                &_L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
              tmp47 = /* 1 */
                RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
              if (tmp47 == 8) {
                outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  /* 1 */
                  RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                    &_L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
              }
              else {
                outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                  last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
              }
              /* 2 */
              RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                inRadioTrainTrackMessage,
                &tmp46);
              IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
                /* 1 */
                RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                  &tmp46) ==
                outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
              if (IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
                outC->trainDataValidated = kcg_true;
                outC->invalidAckForMessage129 = kcg_false;
              }
              else {
                outC->trainDataValidated = kcg_false;
                outC->invalidAckForMessage129 = kcg_true;
              }
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              break;
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM :
              outC->trainDataValidated = kcg_false;
              outC->invalidAckForMessage129 = kcg_false;
              outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM;
              break;
            
          }
          outC->init10 = kcg_false;
          break;
        case SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          /* 1 */
          RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
            inRadioTrainTrackMessage,
            &tmp41);
          /* 1 */
          RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
            &tmp41,
            &tmp42);
          last_invalidAckForMAandPosRepParams = /* 1 */
            RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
              &tmp42);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
          if (last_invalidAckForMAandPosRepParams) {
            /* 9 */
            SessionManagement__GetTrainData_RBC_Session_Pkg(
              &(*inDataBus).session,
              &tmp8);
            /* 7 */
            TrainData__UpdateWithP003_RBC_Session_Pkg(
              &tmp8,
              inRadioTrainTrackMessage,
              &tmp9);
            /* 9 */
            SessionManagement__SetTrainData_RBC_Session_Pkg(
              &(*inDataBus).session,
              &tmp9,
              &outC->outDataBus.session);
          }
          else {
            kcg_copy_SessionManagement_T(
              &outC->outDataBus.session,
              &(*inDataBus).session);
          }
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          break;
        
      }
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM :
      outC->paramsSent = kcg_false;
      outC->invalidAckForMAandPosRepParams = kcg_false;
      outC->trainDataValidated = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
      outC->CONTROLLER_SM_state_nxt =
        SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM;
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROLLER_SM :
      outC->paramsSent = kcg_false;
      outC->invalidAckForMAandPosRepParams = kcg_false;
      outC->trainDataValidated = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      /* 2 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp39);
      /* 1 */
      PosData__Set_NID_LRBG_RBC_Session_Pkg(&tmp39, NID_LRBG_UNKNOWN, &tmp40);
      /* 2 */
      SessionManagement__SetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp40,
        &_L16_CONTROLLER_SM_SEND_RBC_VERSION);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
      /* 10 */
      SessionManagement__GetTrainData_RBC_Session_Pkg(
        &_L16_CONTROLLER_SM_SEND_RBC_VERSION,
        &tmp6);
      /* 5 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        inRadioTrainTrackMessage,
        &tmp4);
      tmp5 = /* 2 */
        RadioTrainTrackHeader__Get_NID_ENGINE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &tmp4);
      /* 2 */ TrainData__Set_NID_ENGINE_RBC_Session_Pkg(&tmp6, tmp5, &tmp7);
      /* 10 */
      SessionManagement__SetTrainData_RBC_Session_Pkg(
        &_L16_CONTROLLER_SM_SEND_RBC_VERSION,
        &tmp7,
        &outC->outDataBus.session);
      tmp1 = /* 2 */
        DynamicConfig__Get_M_VERSION_RBC_Config_Pkg(&(*inDataBus).config);
      /* 2 */
      RadioTrackTrainFactory__CreateMsg032_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
        T_TRAIN_MIN,
        M_ACK_No_acknowledgement_required,
        NID_LRBG_UNKNOWN,
        tmp1,
        &tmp2);
      /* 6 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &tmp2,
        &tmp3);
      /* 6 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &(*inDataBus).messageQueue,
        &tmp3,
        &outC->outDataBus.messageQueue);
      outC->CONTROLLER_SM_state_nxt = SSM_st_SEND_RBC_VERSION_CONTROLLER_SM;
      break;
    case SSM_st_SESSION_TERMINATED_CONTROLLER_SM :
      outC->paramsSent = kcg_false;
      outC->invalidAckForMAandPosRepParams = kcg_false;
      outC->trainDataValidated = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
      /* 2 */
      Clock__Reset_RBC_Time_Pkg(&(*inDataBus).clockk, &outC->outDataBus.clockk);
      outC->CONTROLLER_SM_state_nxt = SSM_st_SESSION_TERMINATED_CONTROLLER_SM;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessController_RBC_Model_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

