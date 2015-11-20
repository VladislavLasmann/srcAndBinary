/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T13:23:26
*************************************************************$ */
#ifndef _ES_Build_Acknowledgement_TA_EmergencyStop_H_
#define _ES_Build_Acknowledgement_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* TA_EmergencyStop::ES_Build_Acknowledgement */
extern void ES_Build_Acknowledgement_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_Acknowledgement::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::t_train */T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::receivedMsg16 */kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::cesAccepted */kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::updateEOA */kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::message147 */Radio_TrainTrack_Message_T_TM_transitional *message147);

#endif /* _ES_Build_Acknowledgement_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Build_Acknowledgement_TA_EmergencyStop.h
** Generation date: 2015-11-20T13:23:26
*************************************************************$ */

