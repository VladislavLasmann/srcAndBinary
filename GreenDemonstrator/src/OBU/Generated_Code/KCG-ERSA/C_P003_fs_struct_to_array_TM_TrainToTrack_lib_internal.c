/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array */
kcg_int C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::section */ NID_RADIO section)
{
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::section_arrays */ kcg_int section_arrays;
  
  section_arrays = /* 1 */ CAST_Int_to_NID_RADIO_TM_conversions(section);
  return section_arrays;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

