/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid */
kcg_bool RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid::inRadioTrackTrainMessageQueueEntry */RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid::outIsValid */ kcg_bool outIsValid;
  
  outIsValid = (*inRadioTrackTrainMessageQueueEntry).m_IsValid;
  return outIsValid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

