/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:26
*************************************************************$ */
#ifndef _SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg_H_
#define _SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management */ request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  kcg_bool /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management */ request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  kcg_bool /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::start_ack_to_TIU */ start_ack_to_TIU;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _42_SSM_ST_SM1 /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN */
extern void SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */ kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::Status_Mode_Change_from_Level_and_Mode_Management */ T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC);

extern void SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SoM_SR_FS_OS_LS_SH_SN_UN_init_SoMProcedure_Pkg(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.h
** Generation date: 2015-12-02T15:32:26
*************************************************************$ */

