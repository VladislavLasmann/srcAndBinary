/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC_H_
#define _Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC_H_

#include "kcg_types.h"
#include "SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "Send_M003_JRU_MessageLibBaseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M003_JRU_MessageLibBaseline2 /* 1 */ _1_Context_1;
  outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::_L3 */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::_L38 */ _L38;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::_L39 */ _L39;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::_L40 */ _L40;
  M_TrackTrain_Radio_T_TM_radio_messages /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::_L42 */ _L42;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::_L43 */ _L43;
  kcg_bool /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::_L44 */ _L44;
} outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003 */
extern void Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC);

extern void Build_RBC_LRBG_354_D_0027_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC);

#endif /* _Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

