/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:09
*************************************************************$ */
#ifndef _RBC__ProcessController_RBC_Model_Pkg_H_
#define _RBC__ProcessController_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"
#include "PosData__Set_NID_LRBG_RBC_Session_Pkg.h"
#include "SessionManagement__SetPosData_RBC_Session_Pkg.h"
#include "TrainData__Set_NID_ENGINE_RBC_Session_Pkg.h"
#include "SessionManagement__GetTrainData_RBC_Session_Pkg.h"
#include "SessionManagement__SetTrainData_RBC_Session_Pkg.h"
#include "TrainData__UpdateWithP003_RBC_Session_Pkg.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "TrainData__UpdateWithP011_RBC_Session_Pkg.h"
#include "SessionManagement__Reset_RBC_Session_Pkg.h"
#include "Clock__Reset_RBC_Time_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_ENGINE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg032_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainFactory__CreateP057_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "DynamicConfig__Get_M_VERSION_RBC_Config_Pkg.h"
#include "MAReqParams__Get_Q_DIR_RBC_Config_Pkg.h"
#include "MAReqParams__Get_T_CYCRQST_RBC_Config_Pkg.h"
#include "PosRepParams__Get_M_LOC_RBC_Config_Pkg.h"
#include "PosRepParams__Get_Q_SCALE_RBC_Config_Pkg.h"
#include "DynamicConfig__GetMAReqParams_RBC_Config_Pkg.h"
#include "PosRepParams__Get_Q_DIR_RBC_Config_Pkg.h"
#include "PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"
#include "PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"
#include "MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg.h"
#include "MAReqParams__Get_T_MAR_RBC_Config_Pkg.h"
#include "DynamicConfig__GetPosRepParams_RBC_Config_Pkg.h"
#include "PosRepParams__Get_T_CYCLOC_RBC_Config_Pkg.h"
#include "PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"
#include "RBC__ProcessPositionReport_RBC_Model_Pkg.h"
#include "RBC__PingTrain_RBC_Model_Pkg.h"
#include "RBC__ProcessMovementAuthority_RBC_Model_Pkg.h"
#include "RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.h"
#include "RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.h"
#include "RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg.h"
#include "RBC__ProcessGeneralMessage_RBC_Model_Pkg.h"
#include "RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */ outDataBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init11;
  kcg_bool init10;
  kcg_bool init9;
  kcg_bool init8;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */ SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::radioTrackTrainMessageWasSentTimestamp */ radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_TRY_PROCESS_ACKNOWLEDGMENT;
  SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */ SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */ PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::radioTrackTrainMessageWasSentTimestamp */ radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessController::paramsSent */ paramsSent;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMAandPosRepParams */ invalidAckForMAandPosRepParams;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessController::trainDataValidated */ trainDataValidated;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMessage129 */ invalidAckForMessage129;
  SSM_ST_CONTROLLER_SM /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */ CONTROLLER_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC__PingTrain_RBC_Model_Pkg /* 2 */ _7_Context_2;
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg /* 1 */ _6_Context_1;
  outC_RBC__PingTrain_RBC_Model_Pkg /* 1 */ _5_Context_1;
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg /* 1 */ _4_Context_1;
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg /* 1 */ _3_Context_1;
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg /* 1 */ _2_Context_1;
  outC_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg /* 1 */ _1_Context_1;
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg /* 1 */ Context_1;
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessController_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessController */
extern void RBC__ProcessController_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessController::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessController::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessController::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessController_RBC_Model_Pkg *outC);

extern void RBC__ProcessController_reset_RBC_Model_Pkg(
  outC_RBC__ProcessController_RBC_Model_Pkg *outC);

#endif /* _RBC__ProcessController_RBC_Model_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessController_RBC_Model_Pkg.h
** Generation date: 2015-11-10T18:22:09
*************************************************************$ */

