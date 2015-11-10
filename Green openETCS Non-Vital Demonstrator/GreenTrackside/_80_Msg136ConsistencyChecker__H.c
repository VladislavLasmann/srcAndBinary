/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_80_Msg136ConsistencyChecker__H.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets */
kcg_bool _80_Msg136ConsistencyChecker__H(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets */
  static PT0_PositionReport_T_Packet_Tra tmp4;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets */
  static PT1_PositionReport_2BG_T_Packet tmp3;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets */
  static PT3_OnboardTelephoneNumbers_T_P tmp2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets */
  static PT9_Level23_TransitionInformati tmp1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets */
  static PT11_ValidatedTrainData_T_Packe tmp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  /* 1 */ _149_RadioTrainTrackPackets__Ge(inRadioTrainTrackPackets, &tmp4);
  /* 1 */ _150_RadioTrainTrackPackets__Ge(inRadioTrainTrackPackets, &tmp3);
  /* 1 */ _152_RadioTrainTrackPackets__Ge(inRadioTrainTrackPackets, &tmp2);
  /* 2 */ RadioTrainTrackPackets__GetP009(inRadioTrainTrackPackets, &tmp1);
  /* 1 */ RadioTrainTrackPackets__GetP011(inRadioTrainTrackPackets, &tmp);
  outIsConsistent = (/* 1 */ RadioTrainTrackPacket000__IsVal(&tmp4) ^ /* 1 */
      RadioTrainTrackPacket001__IsVal(&tmp3)) & !/* 1 */
    RadioTrainTrackPacket003__IsVal(&tmp2) & !/* 2 */
    RadioTrainTrackPacket009__IsVal(&tmp1) & !/* 1 */
    RadioTrainTrackPacket011__IsVal(&tmp);
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _80_Msg136ConsistencyChecker__H.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */
