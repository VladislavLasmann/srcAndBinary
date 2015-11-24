/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _Build_MA_L23_TA_MA_new_H_
#define _Build_MA_L23_TA_MA_new_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "MA_L23_Preprocessing_TA_MA_new.h"
#include "Get_EOA_TA_MA_new.h"
#include "Get_Position_of_LRBG_TA_Lib_internal.h"
#include "MA_L23_Postprocessing_TA_MA_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA_new::Build_MA_L23::updated */ updated;
  kcg_bool /* TA_MA_new::Build_MA_L23::available */ available;
  MovementAuthority_t_TrackAtlasTypes /* TA_MA_new::Build_MA_L23::MA_absolute */ MA_absolute;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MA_new::Build_MA_L23::currentEOA */ currentEOA;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* TA_MA_new::Build_MA_L23::_L237 */ _L237;
  NID_BG /* TA_MA_new::Build_MA_L23::_L111 */ rem__L111;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MA_L23_Postprocessing_TA_MA_new /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MA_L23_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::Build_MA_L23 */
extern void Build_MA_L23_TA_MA_new(
  /* TA_MA_new::Build_MA_L23::reset */ kcg_bool reset,
  /* TA_MA_new::Build_MA_L23::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MA_new::Build_MA_L23::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::Build_MA_L23::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_MA_new::Build_MA_L23::reject_new_MA */ kcg_bool reject_new_MA,
  /* TA_MA_new::Build_MA_L23::updatedEOA_from_EM */ kcg_bool updatedEOA_from_EM,
  /* TA_MA_new::Build_MA_L23::newEOA_from_EM */ L_internal_Type_Obu_BasicTypes_Pkg newEOA_from_EM,
  /* TA_MA_new::Build_MA_L23::balisegroups */ positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_MA_L23_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_MA_L23_reset_TA_MA_new(outC_Build_MA_L23_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_MA_L23_init_TA_MA_new(outC_Build_MA_L23_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_MA_L23_TA_MA_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_L23_TA_MA_new.h
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

