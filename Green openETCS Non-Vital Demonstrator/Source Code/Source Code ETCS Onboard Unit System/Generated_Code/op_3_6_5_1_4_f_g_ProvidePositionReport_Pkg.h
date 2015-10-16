/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */
#ifndef _op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg_H_
#define _op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::modeLevelStatus */ rem_modeLevelStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g */
extern void op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_f_g_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_f_g_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg.h
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */

