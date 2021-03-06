/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _EVC_InputBuffer_Toolbox_Functi
#define _EVC_InputBuffer_Toolbox_Functi

#include "kcg_types.h"
#include "TRAIN_TrackSideInputFifo_Toolbo.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pk /* Toolbox::Functions::EVC_InputBuffer::TrackMessageToEVC */ TrackMessageToEVC;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Toolbox::Functions::EVC_InputBuffer::sendRTM */ sendRTM;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TRAIN_TrackSideInputFifo_T /* 2 */ Context_2;
  outC_TRAIN_TrackSideInputFifo_T /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_EVC_InputBuffer_Toolbox_Fu;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::EVC_InputBuffer */
extern void EVC_InputBuffer_Toolbox_Functio(
  /* Toolbox::Functions::EVC_InputBuffer::BTMMessage */ API_TrackSideInput_T_API_Msg_Pk *BTMMessage,
  /* Toolbox::Functions::EVC_InputBuffer::RTMMessage */ API_TrackSideInput_T_API_Msg_Pk *RTMMessage,
  outC_EVC_InputBuffer_Toolbox_Fu *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EVC_InputBuffer_reset_Toolbox_F(
  outC_EVC_InputBuffer_Toolbox_Fu *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EVC_InputBuffer_init_Toolbox_Fu(
  outC_EVC_InputBuffer_Toolbox_Fu *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _EVC_InputBuffer_Toolbox_Functi */
/* $**************** KCG Version 6.4 (build i21) ****************
** EVC_InputBuffer_Toolbox_Functio.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

