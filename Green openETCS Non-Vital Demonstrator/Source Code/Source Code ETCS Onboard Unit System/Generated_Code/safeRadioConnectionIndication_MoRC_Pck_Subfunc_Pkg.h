/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */
#ifndef _safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg_H_
#define _safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  safeRadioConnectionStatusValid_Type_MoRC_Pck /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatus */ connectionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_connectionStatus_SM /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatus_SM */ connectionStatus_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication */
extern void safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::startOfMissionProcedureIsGoingOn */ kcg_bool startOfMissionProcedureIsGoingOn,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::finalAttemptToSetupTheSafeRadioConnectionFailed */ kcg_bool finalAttemptToSetupTheSafeRadioConnectionFailed,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason */ kcg_bool requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped */ kcg_bool requestsToSetupASafeRadioConnectionAreStopped,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::safeRadioConnection_Setup */ kcg_bool safeRadioConnection_Setup,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::safeRadioConnection_Released */ kcg_bool safeRadioConnection_Released,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::safeRadioConnection_Lost */ kcg_bool safeRadioConnection_Lost,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::trainfrontIsInsideAnAnnouncedRadioHole */ kcg_bool trainfrontIsInsideAnAnnouncedRadioHole,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::actualTime */ time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromEstablishing */ kcg_bool firstRequestToSetupASafeRadioConnection_fromEstablishing,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromMaintaining */ kcg_bool firstRequestToSetupASafeRadioConnection_fromMaintaining,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void safeRadioConnectionIndication_reset_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void safeRadioConnectionIndication_init_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

