/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::FirstFilter */
void FirstFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inSPPAndGradientOnBoard */kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMACoverNotFullLength */kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::outMessage */ReceivedMessage_T_Common_Types_Pkg *outMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  static kcg_int tmp_1;
  static array__127363 tmp;
  static kcg_int i;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L1 */
  static array_bool_30 _L1;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L114 */
  static array_bool_30 _L114;
  
  *outStoreInTransitionBuffer = kcg_false;
  (*outMessage).valid = (*inMessage).valid;
  (*outMessage).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*outMessage).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*outMessage).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*outMessage).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*outMessage).sendingRBC,
    &(*inMessage).sendingRBC);
  for (i = 0; i < 30; i++) {
    tmp_1 = /* 1 */
      GetPacketId_InformationFilter_Pkg_Common(
        &(*inMessage).packets.PacketHeaders[i]);
    /* 1 */
    LevelFilter_InformationFilter_Pkg_FirstFilter(
      inPendingL1Transition,
      inPendingL2L3Transition,
      inPendingAckOfTrainData,
      inEmergencyStopAccepted,
      inLastAckTextMessageId,
      inPendingNTCTransition,
      inSPPAndGradientOnBoard,
      inMACoverNotFullLength,
      inLevel,
      (*inMessage).source,
      tmp_1,
      &_L114[i],
      &_L1[i]);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*outMessage).packets,
    &(*inMessage).packets);
  for (i = 0; i < 30; i++) {
    *outStoreInTransitionBuffer = *outStoreInTransitionBuffer | _L114[i];
    /* SetValidFlag */
    SetValidFlag_InformationFilter_Pkg_Common(
      _L1[i],
      &(*inMessage).packets.PacketHeaders[i],
      &tmp[i]);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &(*outMessage).packets.PacketHeaders,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FirstFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

