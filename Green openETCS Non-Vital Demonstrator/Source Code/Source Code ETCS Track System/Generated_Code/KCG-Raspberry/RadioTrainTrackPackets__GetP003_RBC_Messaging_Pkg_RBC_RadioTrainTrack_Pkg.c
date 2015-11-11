/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003 */
void RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003::inRadioTrainTrackPackets */outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003::outRadioTrainTrackPacket */PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *outRadioTrainTrackPacket)
{
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    outRadioTrainTrackPacket,
    &(*inRadioTrainTrackPackets).p3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

