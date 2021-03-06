/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */
#ifndef _Build_Packet0_ProvidePositionReport_Pkg_H_
#define _Build_Packet0_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_DOUBTOVER_ProvidePositionReport_Pkg.h"
#include "CalculateSafeTrainLength_ProvidePositionReport_Pkg.h"
#include "op_LRBG_ProvidePositionReport_Pkg.h"
#include "op_DOUBTUNDER_ProvidePositionReport_Pkg.h"
#include "scaleInternalType_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::Build_Packet0 */
extern void Build_Packet0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet0::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packet0::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packet0::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packet0::packet0 */ Position_Report_TrainToTrack *packet0);

#endif /* _Build_Packet0_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet0_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

