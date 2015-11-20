/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T13:23:26
*************************************************************$ */
#ifndef _op_RepeatReq_TA_MA_Request_H_
#define _op_RepeatReq_TA_MA_Request_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA_Request::op_RepeatReq::trigger */ trigger;
  kcg_bool /* TA_MA_Request::op_RepeatReq::exception */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* TA_MA_Request::op_RepeatReq::lastSystemTime */ lastSystemTime;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_RepeatReq_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::op_RepeatReq */
extern void op_RepeatReq_TA_MA_Request(
  /* TA_MA_Request::op_RepeatReq::tcycreq */T_CYCLOC tcycreq,
  /* TA_MA_Request::op_RepeatReq::setRepeater */kcg_bool setRepeater,
  /* TA_MA_Request::op_RepeatReq::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_TA_MA_Request *outC);

extern void op_RepeatReq_reset_TA_MA_Request(
  outC_op_RepeatReq_TA_MA_Request *outC);

#endif /* _op_RepeatReq_TA_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_RepeatReq_TA_MA_Request.h
** Generation date: 2015-11-20T13:23:26
*************************************************************$ */

