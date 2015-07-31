/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"

void ProvidePositionReport_reset_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ Build_Packets0_1_reset_ProvidePositionReport_Pkg(&outC->Context_1);
  /* 1 */
  PosReport_Supervision_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */
  ReceiveReportParameters_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
}

/* ProvidePositionReport_Pkg::ProvidePositionReport */
void ProvidePositionReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trackInfo */LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::systemTime */SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::rcbComm */RBC_Communication_T_ProvidePositionReport_Pkg *rcbComm,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::train2trackStatus */TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::prvDirTrain */Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::BG_LinkingConsistencyError */kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::LinkedBG_MessageConsistencyError */kcg_bool LinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::UnlinkedBG_MessageConsistencyError */kcg_bool UnlinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioMessageConsistencyError */kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSequenceError */kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSafeRadioConnectionError */kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::SafetyCriticalFailure */kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleLinkingError */kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleRepositioningError */kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::modeLevelStatus */ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::reportedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::t_train */T_TRAIN t_train,
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  static array__79420 tmp4;
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg tmp3;
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg tmp2;
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg tmp1;
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg tmp;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L312 */
  static kcg_bool _L312;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L328 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L328;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &_L328,
      (ReportedBGList_T_ProvidePositionReport_Pkg *)
        &cReportedBGList_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &_L328,
      &outC->rem_reportedBGs);
  }
  /* 1 */
  ReceiveReportParameters_ProvidePositionReport_Pkg(
    &_L328,
    inMessage,
    &outC->_2_Context_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &_L328,
    &outC->_2_Context_1.out_reportedBGs);
  /* 1 */
  PosReport_Supervision_ProvidePositionReport_Pkg(
    outC->_2_Context_1.present,
    &outC->_2_Context_1.posRepParam,
    systemTime,
    rcbComm,
    trackInfo,
    train2trackStatus,
    trainPos,
    odometry,
    modeLevelStatus,
    posBGs,
    &outC->_1_Context_1);
  _L312 = outC->_1_Context_1.trigger;
  outC->posRep.present = _L312;
  /* 1 */
  Build_Packets0_1_ProvidePositionReport_Pkg(
    trainProps,
    posBGs,
    modeLevelStatus,
    odometry,
    trainPos,
    train2trackStatus,
    prvDirTrain,
    &outC->Context_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->packet0,
    &outC->Context_1.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->packet1,
    &outC->Context_1.packet1);
  if (_L312) {
    /* 1 */
    ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
      BG_LinkingConsistencyError,
      LinkedBG_MessageConsistencyError,
      UnlinkedBG_MessageConsistencyError,
      RadioMessageConsistencyError,
      RadioSequenceError,
      RadioSafeRadioConnectionError,
      SafetyCriticalFailure,
      DoubleLinkingError,
      DoubleRepositioningError,
      &tmp4);
    /* 1 */
    Build_PosReport_ProvidePositionReport_Pkg(
      trainProps,
      &outC->packet0,
      &outC->packet1,
      &tmp4,
      t_train,
      &outC->posRep.header,
      &tmp3,
      &tmp2,
      &tmp1,
      &tmp);
  }
  else {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &outC->posRep.header,
      (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
        &emptyHeader_ProvidePositionReport_Pkg);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &tmp3,
      (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
        &emptyPacket0_ProvidePositionReport_Pkg);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &tmp2,
      (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
        &emptyPacket1_ProvidePositionReport_Pkg);
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &tmp1,
      (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
        &emptyPacket4_ProvidePositionReport_Pkg);
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &tmp,
      (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
        &emptyPacket5_ProvidePositionReport_Pkg);
  }
  /* 1 */
  AggregatePackets_ProvidePositionReport_Pkg(
    &tmp3,
    &tmp2,
    &tmp1,
    &tmp,
    &outC->posRep.packets);
  /* AddBGToFIFO */
  AddBGToFIFO_ProvidePositionReport_Pkg(
    &_L328,
    _L312,
    posBGs,
    &outC->out_reportedBGs);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->rem_reportedBGs,
    reportedBGs);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ProvidePositionReport_ProvidePositionReport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
