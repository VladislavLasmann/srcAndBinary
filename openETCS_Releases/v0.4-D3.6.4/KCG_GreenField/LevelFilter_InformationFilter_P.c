/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelFilter_InformationFilter_P.h"

/* InformationFilter_Pkg::FirstFilter::LevelFilter */
void LevelFilter_InformationFilter_P(
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketOrigin */ MsgSource_T_Common_Types_Pkg inPacketOrigin,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketId */ kcg_int inPacketId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outPacketAccept */ kcg_bool *outPacketAccept)
{
  /* InformationFilter_Pkg::FirstFilter::LevelFilter */
  static LevelDecisionTableActionKind_Da tmp;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::row */
  static kcg_int row;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::column */
  static kcg_int column;
  
  row = /* 1 */ MapPacketIdToRow_InformationFil(inPacketId);
  column = /* 1 */ MapLevelToColumn_InformationFil(inLevel);
  /* 1 */ if (inPacketOrigin == msrc_Euroradio_Common_Types_Pkg) {
    if ((0 <= row) & (row < 256) & ((0 <= column) & (column < 5))) {
      tmp = LevelDecisionTableFromRBC_DataD[row][column];
    }
    else {
      tmp = LD_Invalid_DataDictionary_Pkg;
    }
  }
  else if ((0 <= row) & (row < 256) & ((0 <= column) & (column < 5))) {
    tmp = LevelDecisionTableFromBalise_Da[row][column];
  }
  else {
    tmp = LD_Invalid_DataDictionary_Pkg;
  }
  /* 1 */
  CheckLevelExceptions_Informatio(
    tmp,
    inPendingL1Transition,
    inPendingL2L3Transition,
    inPendingAckOfTrainData,
    inEmergencyStopAccepted,
    inLastAckTextMessageId,
    inPendingNTCTransition,
    inSPPAndGradientOnBoard,
    inMACoverNotFullLength,
    outPacketAccept,
    outStoreInTransitionBuffer);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelFilter_InformationFilter_P.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

