/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertMRSP_section_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertMRSP_section */
void ConvertMRSP_section_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertMRSP_section::MRSP_section_ext */ MRSP_section_t_TrackAtlasTypes *MRSP_section_ext,
  /* SDM_Input_Wrappers::ConvertMRSP_section::MRSP_section_int */ MRSP_internal_section_T_TargetManagement_types *MRSP_section_int)
{
  (*MRSP_section_int).valid = (*MRSP_section_ext).valid;
  (*MRSP_section_int).Loc_Abs = /* 12 */
    TransformL_intToL_real_SDM_Types_Pkg((*MRSP_section_ext).Loc_Abs);
  (*MRSP_section_int).MRS = /* 6 */
    TransformV_intToV_real_SDM_Types_Pkg((*MRSP_section_ext).MRS);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertMRSP_section_SDM_Input_Wrappers.c
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

