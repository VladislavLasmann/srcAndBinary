/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P041_fs_struct_to_array */
void C_P041_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P041_fs_struct_to_array::section */P041_section_int_T_TM *section,
  /* TM_lib_internal::C_P041_fs_struct_to_array::section_arrays */P041_section_array_T_TM *section_arrays)
{
  (*section_arrays)[0] = (*section).M_LEVELTR;
  (*section_arrays)[1] = (*section).NID_NTC;
  (*section_arrays)[2] = (*section).L_ACKLEVELTR;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

