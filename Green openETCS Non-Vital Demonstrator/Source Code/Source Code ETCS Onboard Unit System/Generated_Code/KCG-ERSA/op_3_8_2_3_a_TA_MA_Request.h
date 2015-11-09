/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */
#ifndef _op_3_8_2_3_a_TA_MA_Request_H_
#define _op_3_8_2_3_a_TA_MA_Request_H_

#include "kcg_types.h"
#include "DIV_real_XCP_numeric.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA_Request::op_3_8_2_3_a::exception */ exception;
  kcg_bool /* TA_MA_Request::op_3_8_2_3_a::triggerMA */ triggerMA;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MA_Request::op_3_8_2_3_a::preindicationLoc */ rem_preindicationLoc;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_8_2_3_a_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::op_3_8_2_3_a */
extern void op_3_8_2_3_a_TA_MA_Request(
  /* TA_MA_Request::op_3_8_2_3_a::t_mar */T_MAR t_mar,
  /* TA_MA_Request::op_3_8_2_3_a::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* TA_MA_Request::op_3_8_2_3_a::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::op_3_8_2_3_a::preindicationLoc */L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  outC_op_3_8_2_3_a_TA_MA_Request *outC);

extern void op_3_8_2_3_a_reset_TA_MA_Request(
  outC_op_3_8_2_3_a_TA_MA_Request *outC);

#endif /* _op_3_8_2_3_a_TA_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_8_2_3_a_TA_MA_Request.h
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

