/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _Merge_PacketsToMessage_TM_Trai
#define _Merge_PacketsToMessage_TM_Trai

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_TrainToTrack::Merge_PacketsToMessage */
extern void Merge_PacketsToMessage_TM_Train(
  /* TM_TrainToTrack::Merge_PacketsToMessage::OptionalPackets */ M_TrainTrack_compressed_packets *OptionalPackets,
  /* TM_TrainToTrack::Merge_PacketsToMessage::MessageHeader */ M_TrainTrack_MessageHd_T_TM_rad *MessageHeader,
  /* TM_TrainToTrack::Merge_PacketsToMessage::RadioMessage */ M_TrainTrack_Message_T_TM_radio *RadioMessage);

#endif /* _Merge_PacketsToMessage_TM_Trai */
/* $**************** KCG Version 6.4 (build i21) ****************
** Merge_PacketsToMessage_TM_Train.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

