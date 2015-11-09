/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */
#ifndef _establishSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _establishSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::p42_establishSessionCmd */ p42_establishSessionCmd;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m155_initiationOfACommunicationSession */ send_m155_initiationOfACommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m159_sessionEstablishedReport */ send_m159_sessionEstablishedReport;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m154_noCompatibleVersionSupported */ send_m154_noCompatibleVersionSupported;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::requestSafeRadioConnectionSetup */ requestSafeRadioConnectionSetup;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::terminateCommunicationSession */ terminateCommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::infomDriverNoCompatibleVersionSupported */ infomDriverNoCompatibleVersionSupported;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::established */ established;
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::sessionStatus */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _8_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */ SM1_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ _1_Context_1;
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2 */
extern void establishSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::sessionEstablishCmd_in */sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::m32_SystemVersion */m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::reset */kcg_bool reset,
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _establishSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** establishSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

