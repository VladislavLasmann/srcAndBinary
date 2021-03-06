/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _C_header_to_M157_TM_RBC_conversions_H_
#define _C_header_to_M157_TM_RBC_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_L_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_Q_STATUS_TM_conversions.h"
#include "CAST_Int_to_NID_ENGINE_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_157_T_TM_radio_messages /* TM_RBC_conversions::C_header_to_M157::message_out */ message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_Q_STATUS_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_NID_MESSAGE_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_L_MESSAGE_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_NID_ENGINE_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_MessageHd_T_TM_radio_messages /* TM_RBC_conversions::C_header_to_M157::_L1 */ _L1;
  M_157_T_TM_radio_messages /* TM_RBC_conversions::C_header_to_M157::_L26 */ _L26;
  Q_STATUS /* TM_RBC_conversions::C_header_to_M157::_L28 */ _L28;
  kcg_int /* TM_RBC_conversions::C_header_to_M157::_L3 */ _L3;
  kcg_bool /* TM_RBC_conversions::C_header_to_M157::_L2 */ _L2;
  T_TRAIN /* TM_RBC_conversions::C_header_to_M157::_L32 */ _L32;
  NID_ENGINE /* TM_RBC_conversions::C_header_to_M157::_L31 */ _L31;
  L_MESSAGE /* TM_RBC_conversions::C_header_to_M157::_L30 */ _L30;
  NID_MESSAGE /* TM_RBC_conversions::C_header_to_M157::_L29 */ _L29;
  kcg_int /* TM_RBC_conversions::C_header_to_M157::_L8 */ _L8;
  kcg_int /* TM_RBC_conversions::C_header_to_M157::_L6 */ _L6;
  kcg_int /* TM_RBC_conversions::C_header_to_M157::_L7 */ _L7;
  kcg_int /* TM_RBC_conversions::C_header_to_M157::_L5 */ _L5;
  kcg_int /* TM_RBC_conversions::C_header_to_M157::_L9 */ _L9;
  kcg_int /* TM_RBC_conversions::C_header_to_M157::_L4 */ _L4;
} outC_C_header_to_M157_TM_RBC_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions::C_header_to_M157 */
extern void C_header_to_M157_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M157::header_in */M_TrainTrack_MessageHd_T_TM_radio_messages *header_in,
  outC_C_header_to_M157_TM_RBC_conversions *outC);

extern void C_header_to_M157_reset_TM_RBC_conversions(
  outC_C_header_to_M157_TM_RBC_conversions *outC);

#endif /* _C_header_to_M157_TM_RBC_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M157_TM_RBC_conversions.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

