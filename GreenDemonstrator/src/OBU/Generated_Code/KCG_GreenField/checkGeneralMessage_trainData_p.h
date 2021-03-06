/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _checkGeneralMessage_trainData_
#define _checkGeneralMessage_trainData_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trainData_pkg::checkGeneralMessage::genMessageReceived */ genMessageReceived;
  kcg_bool /* trainData_pkg::checkGeneralMessage::ackRequested */ ackRequested;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_checkGeneralMessage_trainD;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::checkGeneralMessage */
extern void checkGeneralMessage_trainData_p(
  /* trainData_pkg::checkGeneralMessage::trackMessages */ ReceivedMessage_T_Common_Types_ *trackMessages,
  outC_checkGeneralMessage_trainD *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkGeneralMessage_reset_train(
  outC_checkGeneralMessage_trainD *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkGeneralMessage_init_trainD(
  outC_checkGeneralMessage_trainD *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _checkGeneralMessage_trainData_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkGeneralMessage_trainData_p.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

