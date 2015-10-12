/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_request_MA_Request.h"

/* MA_Request::Build_MA_request */
void Build_MA_request_MA_Request(
  /* MA_Request::Build_MA_request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* MA_Request::Build_MA_request::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* MA_Request::Build_MA_request::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* MA_Request::Build_MA_request::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* MA_Request::Build_MA_request::t_train */ T_TRAIN t_train,
  /* MA_Request::Build_MA_request::message132 */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *message132)
{
  (*message132).present = kcg_true;
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &(*message132).packets.p0,
    packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &(*message132).packets.p1,
    packet1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &(*message132).packets.p3,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cPT3_OBUTelephoneNumber_MA_Request);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &(*message132).packets.p4,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &cPT4_ErrorReporting_MA_Request);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &(*message132).packets.p5,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &cPT5_TrainRunningNumber_MA_Request);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &(*message132).packets.p9,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cPT9_Level23_MA_Request);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &(*message132).packets.p11,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cPT11_ValidateTrainData_MA_Request);
  (*message132).header.t_train = t_train;
  (*message132).header.nid_engine = (*trainProps).nid_engine;
  (*message132).header.xT_TRAIN = (*message132).header.t_train;
  (*message132).header.present = kcg_true;
  (*message132).header.nid_message = 132;
  (*message132).header.xNID_EM = cNid_em_MA_Request;
  (*message132).header.xQ_EMERGENCYSTOP = cQemergencyStop_MA_Request;
  (*message132).header.xNID_TEXTMESSAGE = cNidTextMessage_MA_Request;
  /* 1 */ if (trackDescrDeleted) {
    (*message132).header.xQ_MARQSTREASON =
      Q_MARQSTREASON_Track_description_deleted;
  }
  else {
    (*message132).header.xQ_MARQSTREASON =
      Q_MARQSTREASON_Start_selected_by_driver;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_request_MA_Request.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

