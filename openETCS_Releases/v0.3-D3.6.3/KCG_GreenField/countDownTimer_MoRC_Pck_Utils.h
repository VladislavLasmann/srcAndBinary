/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _countDownTimer_MoRC_Pck_Utils_
#define _countDownTimer_MoRC_Pck_Utils_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Utils::countDownTimer::expired */ expired;
  kcg_bool /* MoRC_Pck::Utils::countDownTimer::started */ started;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  time_Type_MoRC_Pck /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting::_L4 */ _L4_TimerStatus_SM_Counting;
  SSM_ST_TimerStatus_SM /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ TimerStatus_SM_state_nxt;
  kcg_bool /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ TimerStatus_SM_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_countDownTimer_MoRC_Pck_Ut;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Utils::countDownTimer */
extern void countDownTimer_MoRC_Pck_Utils(
  /* MoRC_Pck::Utils::countDownTimer::re_start */ kcg_bool re_start,
  /* MoRC_Pck::Utils::countDownTimer::stop */ kcg_bool stop,
  /* MoRC_Pck::Utils::countDownTimer::actualTime */ time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Utils::countDownTimer::autoretrigger */ kcg_bool autoretrigger,
  /* MoRC_Pck::Utils::countDownTimer::interval */ time_Type_MoRC_Pck interval,
  outC_countDownTimer_MoRC_Pck_Ut *outC);

extern void countDownTimer_reset_MoRC_Pck_U(
  outC_countDownTimer_MoRC_Pck_Ut *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void countDownTimer_init_MoRC_Pck_Ut(
  outC_countDownTimer_MoRC_Pck_Ut *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _countDownTimer_MoRC_Pck_Utils_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** countDownTimer_MoRC_Pck_Utils.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

