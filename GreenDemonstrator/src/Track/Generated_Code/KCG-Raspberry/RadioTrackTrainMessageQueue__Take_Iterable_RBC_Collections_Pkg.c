/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable */
void RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::inIndex */kcg_int inIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::inAccumulator */kcg_int inAccumulator,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::inRadioTrackTrainMessageQueueEntry */RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::outContinueIteration */kcg_bool *outContinueIteration,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::outAccumulator */kcg_int *outAccumulator)
{
  kcg_bool tmp;
  
  *outAccumulator = inIndex;
  tmp = /* 1 */
    RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(
      inRadioTrackTrainMessageQueueEntry);
  if (tmp) {
    *outContinueIteration = kcg_false;
  }
  else {
    *outContinueIteration = kcg_true;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

