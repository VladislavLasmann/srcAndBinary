/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _C_P021_flatten_sections_TM_lib_internal_H_
#define _C_P021_flatten_sections_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P021_fs_flatten_array_TM_lib_internal.h"
#include "C_P021_fs_struct_to_array_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P021_sections_array_flat_T_TM /* TM_lib_internal::C_P021_flatten_sections::Flattened */ Flattened;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P021_fs_flatten_array_TM_lib_internal /* 1 */ _1_Context_1[231];
  outC_C_P021_fs_struct_to_array_TM_lib_internal /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_sections_array_flat_T_TM /* TM_lib_internal::C_P021_flatten_sections::_L76 */ _L76;
  P021_OBU_sectionlist_int_T_TM /* TM_lib_internal::C_P021_flatten_sections::_L75 */ _L75;
  array_int_3_33 /* TM_lib_internal::C_P021_flatten_sections::_L74 */ _L74;
  P021_sections_array_flat_T_TM /* TM_lib_internal::C_P021_flatten_sections::_L78 */ _L78;
  array_int_3_33_231 /* TM_lib_internal::C_P021_flatten_sections::_L80 */ _L80;
} outC_C_P021_flatten_sections_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P021_flatten_sections */
extern void C_P021_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P021_flatten_sections::MergedSections */P021_OBU_sectionlist_int_T_TM *MergedSections,
  outC_C_P021_flatten_sections_TM_lib_internal *outC);

extern void C_P021_flatten_sections_reset_TM_lib_internal(
  outC_C_P021_flatten_sections_TM_lib_internal *outC);

#endif /* _C_P021_flatten_sections_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_flatten_sections_TM_lib_internal.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

