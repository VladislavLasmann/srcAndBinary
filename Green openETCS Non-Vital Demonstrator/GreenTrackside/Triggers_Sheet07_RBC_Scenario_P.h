/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _Triggers_Sheet07_RBC_Scenario_
#define _Triggers_Sheet07_RBC_Scenario_

#include "kcg_types.h"
#include "RadioTrackTrainMessageTri_RBC_S.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* RBC_Scenario_Pkg::Triggers_Sheet07::outTriggerId */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageTri_ /* 5 */ Context_5;
  outC_RadioTrackTrainMessageTri_ /* 4 */ Context_4;
  outC_RadioTrackTrainMessageTri_ /* 3 */ Context_3;
  outC_RadioTrackTrainMessageTri_ /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Triggers_Sheet07_RBC_Scena;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::Triggers_Sheet07 */
extern void Triggers_Sheet07_RBC_Scenario_P(
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inLRBG */ NID_LRBG inLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inDistanceToLRBG */ kcg_real inDistanceToLRBG,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inTriggerId */ kcg_int inTriggerId,
  /* RBC_Scenario_Pkg::Triggers_Sheet07::inRBCTime */ T_TRAIN inRBCTime,
  outC_Triggers_Sheet07_RBC_Scena *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Triggers_Sheet07_reset_RBC_Scen(
  outC_Triggers_Sheet07_RBC_Scena *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Triggers_Sheet07_init_RBC_Scena(
  outC_Triggers_Sheet07_RBC_Scena *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Triggers_Sheet07_RBC_Scenario_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Triggers_Sheet07_RBC_Scenario_P.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

