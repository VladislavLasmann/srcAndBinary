/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets */
kcg_bool Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::inRadioTrainTrackPackets */outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets)
{
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg tmp4;
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg tmp3;
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg tmp2;
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg tmp1;
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg tmp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp4);
  /* 1 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp3);
  /* 1 */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp2);
  /* 2 */
  RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp1);
  /* 1 */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackPackets,
    &tmp);
  outIsConsistent = (/* 1 */
      RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
        &tmp4) ^ /* 1 */
      RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
        &tmp3)) & !/* 1 */
    RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &tmp2) & !/* 2 */
    RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &tmp1) & !/* 1 */
    RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &tmp);
  return outIsConsistent;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

