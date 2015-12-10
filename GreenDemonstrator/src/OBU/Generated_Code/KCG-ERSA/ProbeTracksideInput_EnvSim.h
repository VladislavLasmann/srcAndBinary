/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-11-04T08:31:13
*************************************************************$ */
#ifndef _ProbeTracksideInput_EnvSim_H_
#define _ProbeTracksideInput_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EnvSim::ProbeTracksideInput::dummyOut */ dummyOut;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_ProbeTracksideInput_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::ProbeTracksideInput */
extern void ProbeTracksideInput_EnvSim(
  /* EnvSim::ProbeTracksideInput::currentPosition */ kcg_real currentPosition,
  /* EnvSim::ProbeTracksideInput::baliseMessage */ CompressedBaliseMessage_TM *baliseMessage,
  /* EnvSim::ProbeTracksideInput::radioMessage */ CompressedRadioMessage_TM *radioMessage,
  /* EnvSim::ProbeTracksideInput::trainMessage */ M_TrainTrack_Message_T_TM_radio_messages *trainMessage,
  outC_ProbeTracksideInput_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ProbeTracksideInput_reset_EnvSim(
  outC_ProbeTracksideInput_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void ProbeTracksideInput_init_EnvSim(
  outC_ProbeTracksideInput_EnvSim *outC);

#endif /* _ProbeTracksideInput_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ProbeTracksideInput_EnvSim.dh
** Generation date: 2015-11-04T08:31:13
*************************************************************$ */

