/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:21
*************************************************************$ */
#ifndef _RadioTrackTrainMsgQueue_RBC_Messaging_Pkg_H_
#define _RadioTrackTrainMsgQueue_RBC_Messaging_Pkg_H_

#include "kcg_types.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"
#include "RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */


/* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue */
extern void RadioTrackTrainMsgQueue_RBC_Messaging_Pkg(
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outDataBus */RBC_Data_T_RBC_DataBus_Pkg *outDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outRadioTrackTrainMessage */CompressedRadioMessage_TM *outRadioTrackTrainMessage);

#endif /* _RadioTrackTrainMsgQueue_RBC_Messaging_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.h
** Generation date: 2015-11-23T09:24:21
*************************************************************$ */

