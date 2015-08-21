/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _RisingEdge_digital_H_
#define _RisingEdge_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  /* digital::RisingEdge::RE_Input */kcg_bool RE_Input,
  outC_RisingEdge_digital *outC);

extern void RisingEdge_reset_digital(outC_RisingEdge_digital *outC);

#endif /* _RisingEdge_digital_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RisingEdge_digital.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

