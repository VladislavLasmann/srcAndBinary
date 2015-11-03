/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _SSP_Postprocessing_TA_SSP_H_
#define _SSP_Postprocessing_TA_SSP_H_

#include "kcg_types.h"
#include "SSP_Position_SSP_with_BGs_TA_SS.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_SSP::SSP_Postprocessing::available */ available;
  StaticSpeedProfile_t_TrackAtlas /* TA_SSP::SSP_Postprocessing::SSP */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  StaticSpeedProfile_t_TrackAtlas /* TA_SSP::SSP_Postprocessing::_L4 */ rem__L4;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SSP_Postprocessing_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Postprocessing */
extern void SSP_Postprocessing_TA_SSP(
  /* TA_SSP::SSP_Postprocessing::Profile_in */ StaticSpeedProfile_t_TrackAtlas *Profile_in,
  /* TA_SSP::SSP_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_SSP::SSP_Postprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_SSP::SSP_Postprocessing::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_SSP::SSP_Postprocessing::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  outC_SSP_Postprocessing_TA_SSP *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Postprocessing_reset_TA_SSP(
  outC_SSP_Postprocessing_TA_SSP *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Postprocessing_init_TA_SSP(
  outC_SSP_Postprocessing_TA_SSP *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SSP_Postprocessing_TA_SSP_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Postprocessing_TA_SSP.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

