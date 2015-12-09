/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */
#ifndef _RisingEdge_digital_H_
#define _RisingEdge_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* digital::RisingEdge::RE_Output */ RE_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::RisingEdge::RE_Input */ rem_RE_Input;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RisingEdge_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::RisingEdge */
extern void RisingEdge_digital(
  /* digital::RisingEdge::RE_Input */ kcg_bool RE_Input,
  outC_RisingEdge_digital *outC);

extern void RisingEdge_reset_digital(outC_RisingEdge_digital *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RisingEdge_init_digital(outC_RisingEdge_digital *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RisingEdge_digital_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RisingEdge_digital.h
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

