/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _C_P003V1_extract_el_section_TM_lib_internal_H_
#define _C_P003V1_extract_el_section_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_lib_internal::C_P003V1_extract_el_section::element */ element;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::C_P003V1_extract_el_section::_L1 */ _L1;
  P003V1_OBU_sectionlist_int_T_TM_baseline2 /* TM_lib_internal::C_P003V1_extract_el_section::_L2 */ _L2;
  kcg_int /* TM_lib_internal::C_P003V1_extract_el_section::_L6 */ _L6;
} outC_C_P003V1_extract_el_section_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P003V1_extract_el_section */
extern void C_P003V1_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_extract_el_section::offset */kcg_int offset,
  /* TM_lib_internal::C_P003V1_extract_el_section::flat */P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  outC_C_P003V1_extract_el_section_TM_lib_internal *outC);

extern void C_P003V1_extract_el_section_reset_TM_lib_internal(
  outC_C_P003V1_extract_el_section_TM_lib_internal *outC);

#endif /* _C_P003V1_extract_el_section_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_extract_el_section_TM_lib_internal.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

