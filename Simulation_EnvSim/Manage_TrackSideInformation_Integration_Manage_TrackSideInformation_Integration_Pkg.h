/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:20
*************************************************************$ */
#ifndef _Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg_H_
#define _Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg_H_

#include "kcg_types.h"
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"
#include "ContinuousTimeoutCheck_CheckEuroradioMessage.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"
#include "CheckEuroRadioMessage_CheckEuroradioMessage.h"
#include "InformationFilter_InformationFilter_Pkg.h"
#include "combineForLevelChange_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outputMessage */ outputMessage;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ApplyServiceBrake */ ApplyServiceBrake;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::BadBaliseMessageToDMI */ BadBaliseMessageToDMI;
  MSG_Errors_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outCheckErrors */ outCheckErrors;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::forLevelManagement */ forLevelManagement;
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outputMessageForRadioAck */ outputMessageForRadioAck;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::Data_to_From_Track_Packets_at_ML */ Data_to_From_Track_Packets_at_ML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::transitionPositionPassed */ rem_transitionPositionPassed;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg /* 1 */ _2_Context_1;
  outC_CheckEuroRadioMessage_CheckEuroradioMessage /* 1 */ _1_Context_1;
  outC_combineForLevelChange_xdebugSupport_Pkg /* 1 */ Context_1;
  outC_InformationFilter_InformationFilter_Pkg /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
extern void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::intrainVersion */M_VERSION intrainVersion,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::radioStatus */morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */connection_ids_T_Handover_Pkg *inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inActiveCab */kcg_bool inActiveCab,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inTrainDataValid */kcg_bool inTrainDataValid,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::transitionPositionPassed */kcg_bool transitionPositionPassed,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC);

extern void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC);

#endif /* _Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h
** Generation date: 2015-11-23T09:24:20
*************************************************************$ */

