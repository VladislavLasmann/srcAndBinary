/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P021_flatten_sections */
void C_P021_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P021_flatten_sections::MergedSections */P021_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P021_flatten_sections::Flattened */P021_sections_array_flat_T_TM *Flattened)
{
  P021_sections_array_flat_T_TM tmp;
  kcg_int i;
  /* TM_lib_internal::C_P021_flatten_sections::_L74 */ array_int_3_33 _L74;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    C_P021_fs_struct_to_array_TM_lib_internal(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P021_sections_array_flat_T_TM(
    Flattened,
    (P021_sections_array_flat_T_TM *) &DEFAULT_P021_sections_array_flat_TM);
  for (i = 0; i < 231; i++) {
    kcg_copy_P021_sections_array_flat_T_TM(&tmp, Flattened);
    /* 1 */ C_P021_fs_flatten_array_TM_lib_internal(i, &tmp, &_L74, Flattened);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_flatten_sections_TM_lib_internal.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

