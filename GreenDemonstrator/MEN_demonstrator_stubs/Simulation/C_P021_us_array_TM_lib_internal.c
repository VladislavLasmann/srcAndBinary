/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_us_array_TM_lib_internal.h"

void C_P021_us_array_reset_TM_lib_internal(
  outC_C_P021_us_array_TM_lib_internal *outC)
{
  /* 1 */ CAST_Int_to_D_GRADIENT_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ C_P021_extract_el_section_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_G_A_reset_TM_conversions(&outC->_1_Context_1);
  /* 3 */ C_P021_extract_el_section_reset_TM_lib_internal(&outC->Context_3);
  /* 1 */ CAST_Int_to_Q_GDIR_reset_TM_conversions(&outC->Context_1);
  /* 2 */ C_P021_extract_el_section_reset_TM_lib_internal(&outC->Context_2);
}

/* TM_lib_internal::C_P021_us_array */
void C_P021_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P021_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P021_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P021_us_array::flat */P021_sections_array_flat_T_TM *flat,
  outC_C_P021_us_array_TM_lib_internal *outC)
{
  outC->_L3 = n_iter_int;
  outC->_L5 = i;
  outC->_L33 = outC->_L3 > outC->_L5;
  outC->_L32 = kcg_true;
  outC->_L18 = DIM_P021_n_sections_TM_lib_internal;
  outC->_L16 = outC->_L5 * outC->_L18;
  kcg_copy_P021_sections_array_flat_T_TM(&outC->_L1, flat);
  /* 2 */
  C_P021_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    1,
    &outC->Context_2);
  outC->_L19 = outC->Context_2.element;
  /* 1 */ CAST_Int_to_Q_GDIR_TM_conversions(outC->_L19, &outC->Context_1);
  outC->_L28 = outC->Context_1.q_gdir;
  /* 3 */
  C_P021_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    2,
    &outC->Context_3);
  outC->_L20 = outC->Context_3.element;
  /* 1 */ CAST_Int_to_G_A_TM_conversions(outC->_L20, &outC->_1_Context_1);
  outC->_L26 = outC->_1_Context_1.g_a;
  /* 1 */
  C_P021_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    0,
    &outC->_2_Context_1);
  outC->_L15 = outC->_2_Context_1.element;
  /* 1 */
  CAST_Int_to_D_GRADIENT_TM_conversions(outC->_L15, &outC->_3_Context_1);
  outC->_L25 = outC->_3_Context_1.d_gradient;
  outC->cont = outC->_L33;
  outC->_L4.valid = outC->_L32;
  outC->_L4.d_gradient = outC->_L25;
  outC->_L4.q_gdir = outC->_L28;
  outC->_L4.g_a = outC->_L26;
  kcg_copy_P021_section_enum_T_TM(&outC->sections, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_us_array_TM_lib_internal.c
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

