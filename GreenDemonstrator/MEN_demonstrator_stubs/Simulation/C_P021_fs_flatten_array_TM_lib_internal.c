/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_fs_flatten_array_TM_lib_internal.h"

void C_P021_fs_flatten_array_reset_TM_lib_internal(
  outC_C_P021_fs_flatten_array_TM_lib_internal *outC)
{
}

/* TM_lib_internal::C_P021_fs_flatten_array */
void C_P021_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P021_fs_flatten_array::i */kcg_int i,
  /* TM_lib_internal::C_P021_fs_flatten_array::Acc */P021_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P021_fs_flatten_array::section_arrays */P021_OBU_sectionlist_array_T_TM *section_arrays,
  outC_C_P021_fs_flatten_array_TM_lib_internal *outC)
{
  outC->_L3 = i;
  outC->_L5 = 3;
  outC->_L154 = outC->_L3 / outC->_L5;
  kcg_copy_P021_OBU_sectionlist_array_T_TM(&outC->_L2, section_arrays);
  outC->_L6 = outC->_L3 % outC->_L5;
  if ((0 <= outC->_L154) & (outC->_L154 < 33) & ((0 <= outC->_L6) & (outC->_L6 <
        3))) {
    outC->_L10 = outC->_L2[outC->_L154][outC->_L6];
  }
  else {
    outC->_L10 = 0;
  }
  kcg_copy_P021_sections_array_flat_T_TM(&outC->_L1, Acc);
  outC->_L8 = i;
  kcg_copy_P021_sections_array_flat_T_TM(&outC->_L7, &outC->_L1);
  if ((0 <= outC->_L8) & (outC->_L8 < 99)) {
    outC->_L7[outC->_L8] = outC->_L10;
  }
  kcg_copy_P021_sections_array_flat_T_TM(&outC->flat, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

