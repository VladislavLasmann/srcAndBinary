/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Get_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK */
M_ACK RadioTrackTrainHeader__Get_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK::inRadioTrackTrainHeader */Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK::out_M_ACK */ M_ACK out_M_ACK;
  
  out_M_ACK = /* 1 */
    CAST_Int_to_M_ACK_TM_conversions((*inRadioTrackTrainHeader).m_ack);
  return out_M_ACK;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainHeader__Get_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

