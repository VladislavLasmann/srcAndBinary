/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_struct_to_array_volta.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage */
void C_P011_fs_struct_to_array_volta(
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::section */ P011_voltage_TM_TrainToTrack *section,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::section_arrays */ P011_voltage_section_array_T_TM *section_arrays)
{
  (*section_arrays)[0] = /* 1 */
    CAST_M_VOLTAGE_to_int_TM_conver((*section).m_voltage);
  (*section_arrays)[1] = /* 1 */
    CAST_NID_CTRACTION_to_int_TM_co((*section).nid_ctraction);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_fs_struct_to_array_volta.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */
