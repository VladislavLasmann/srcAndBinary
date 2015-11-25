/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:09
*************************************************************$ */
#ifndef _MergeMessageToBus_TM_TrainTrack_Bus_H_
#define _MergeMessageToBus_TM_TrainTrack_Bus_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_TrainTrack_Bus::MergeMessageToBus */
extern void MergeMessageToBus_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::MergeMessageToBus::Message_in */ M_TrainTrack_Message_T_TM_radio_messages *Message_in,
  /* TM_TrainTrack_Bus::MergeMessageToBus::slots_used */ kcg_int slots_used,
  /* TM_TrainTrack_Bus::MergeMessageToBus::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_TrainTrack_Bus::MergeMessageToBus::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_TrainTrack_Bus::MergeMessageToBus::MessageBus_out */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus_out,
  /* TM_TrainTrack_Bus::MergeMessageToBus::t_train_assigned */ kcg_int *t_train_assigned);

#endif /* _MergeMessageToBus_TM_TrainTrack_Bus_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMessageToBus_TM_TrainTrack_Bus.h
** Generation date: 2015-11-25T14:46:09
*************************************************************$ */

