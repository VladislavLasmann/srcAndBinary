/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_fs_flatten_array_TM_lib_internal.h"

/* TM_lib_internal::C_P021_fs_flatten_array */
void C_P021_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P021_fs_flatten_array::i */kcg_int i,
  /* TM_lib_internal::C_P021_fs_flatten_array::Acc */P021_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P021_fs_flatten_array::section_arrays */P021_OBU_sectionlist_array_T_TM *section_arrays,
  /* TM_lib_internal::C_P021_fs_flatten_array::flat */P021_sections_array_flat_T_TM *flat)
{
  static kcg_int tmp;
  
  kcg_copy_P021_sections_array_flat_T_TM(flat, Acc);
  if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
    tmp = (*section_arrays)[i / 3][i % 3];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 99)) {
    (*flat)[i] = tmp;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

