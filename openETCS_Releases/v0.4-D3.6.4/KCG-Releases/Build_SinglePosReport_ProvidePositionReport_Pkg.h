/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */
#ifndef _Build_SinglePosReport_ProvidePositionReport_Pkg_H_
#define _Build_SinglePosReport_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Build_Header_ProvidePositionReport_Pkg.h"
#include "Build_Packet4_ProvidePositionReport_Pkg.h"
#include "Build_Packet5_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::Build_SinglePosReport */
extern void Build_SinglePosReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::errorMsg */ ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::in_packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::in_packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::posRepHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet4 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *packet4,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet5 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5);

#endif /* _Build_SinglePosReport_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_SinglePosReport_ProvidePositionReport_Pkg.h
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */

