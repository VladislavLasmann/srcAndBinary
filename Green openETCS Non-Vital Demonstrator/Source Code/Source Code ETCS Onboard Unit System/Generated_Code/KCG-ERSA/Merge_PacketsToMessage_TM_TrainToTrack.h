/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */
#ifndef _Merge_PacketsToMessage_TM_TrainToTrack_H_
#define _Merge_PacketsToMessage_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_TrainToTrack::Merge_PacketsToMessage */
extern void Merge_PacketsToMessage_TM_TrainToTrack(
  /* TM_TrainToTrack::Merge_PacketsToMessage::OptionalPackets */ M_TrainTrack_compressed_packets_T_TM_radio_messages *OptionalPackets,
  /* TM_TrainToTrack::Merge_PacketsToMessage::MessageHeader */ M_TrainTrack_MessageHd_T_TM_radio_messages *MessageHeader,
  /* TM_TrainToTrack::Merge_PacketsToMessage::RadioMessage */ M_TrainTrack_Message_T_TM_radio_messages *RadioMessage);

#endif /* _Merge_PacketsToMessage_TM_TrainToTrack_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Merge_PacketsToMessage_TM_TrainToTrack.h
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */
