/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:21
*************************************************************$ */
#ifndef _trainData_trainData_pkg_H_
#define _trainData_trainData_pkg_H_

#include "kcg_types.h"
#include "checkRadioMessages_trainData_pkg.h"
#include "checkAcknowledgmentGeneral_trainData_pkg.h"
#include "checkRBCSystemVersion_trainData_pkg.h"
#include "sendValidTrainDataRBC_trainData_pkg.h"
#include "sendAcknowledgementRBC_trainData_pkg.h"
#include "trainDataStorage_trainData_pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* trainData_pkg::trainData::actualTrainData */ actualTrainData;
  trainData_Trigger_T_trainData_Types_pkg /* trainData_pkg::trainData::triggerFromTrainData */ triggerFromTrainData;
  trainDataStatus_T_trainData_Types_pkg /* trainData_pkg::trainData::updatedStatus */ updatedStatus;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* trainData_pkg::trainData::outMessageBus */ outMessageBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_trainDataStorage_trainData_pkg /* 1 */ _2_Context_1;
  outC_sendValidTrainDataRBC_trainData_pkg /* 1 */ _1_Context_1;
  outC_sendAcknowledgementRBC_trainData_pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_trainData_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::trainData */
extern void trainData_trainData_pkg(
  /* trainData_pkg::trainData::reset */kcg_bool reset,
  /* trainData_pkg::trainData::trainDatafromTIU */trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainData::trainDatafromDriver */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::trainData::trainDataAckfromDriver */DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::trainData::trackMessages */ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::trainData::eventsForTrainData */trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  /* trainData_pkg::trainData::nidEngine */NID_ENGINE nidEngine,
  /* trainData_pkg::trainData::p0_positionReport */PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::trainData::p1_positionReport */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::trainData::inMessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *inMessageBus,
  /* trainData_pkg::trainData::inVersion */M_VERSION inVersion,
  /* trainData_pkg::trainData::t_train */T_TRAIN t_train,
  outC_trainData_trainData_pkg *outC);

extern void trainData_reset_trainData_pkg(outC_trainData_trainData_pkg *outC);

#endif /* _trainData_trainData_pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** trainData_trainData_pkg.h
** Generation date: 2015-11-23T09:24:21
*************************************************************$ */

