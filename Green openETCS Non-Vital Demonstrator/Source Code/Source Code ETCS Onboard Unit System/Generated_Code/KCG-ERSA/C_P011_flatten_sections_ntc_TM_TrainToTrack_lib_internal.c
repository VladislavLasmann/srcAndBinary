/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc */
void C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc::MergedSections */ P011_ntc_list_TM_TrainToTrack *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc::Flattened */ P011_ntc_list_array_T_TM_TrainToTrack *Flattened)
{
  kcg_int i;
  
  /* 2 */ for (i = 0; i < 5; i++) {
    (*Flattened)[i] = /* 1 */
      C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal(
        (*MergedSections)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

