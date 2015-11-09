/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */
#ifndef _GP_Position_GP_with_BGs_TA_Gradient_H_
#define _GP_Position_GP_with_BGs_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Merge_New_P21_to_Profile_TA_Gradient.h"
#include "GP_Normalize_Profile_TA_Gradient.h"
#include "GP_Truncate_at_BG_TA_Gradient.h"
#include "GP_Correct_StartSection_TA_Gradient.h"

/* =====================  no input structure  ====================== */


/* TA_Gradient::GP_Position_GP_with_BGs */
extern void GP_Position_GP_with_BGs_TA_Gradient(
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::LastProfile */GradientProfile_t_TrackAtlasTypes *LastProfile,
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileOut */GradientProfile_t_TrackAtlasTypes *ProfileOut,
  /* TA_Gradient::GP_Position_GP_with_BGs::available */kcg_bool *available,
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileLoopOut */GradientProfile_t_TrackAtlasTypes *ProfileLoopOut);

#endif /* _GP_Position_GP_with_BGs_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Position_GP_with_BGs_TA_Gradient.h
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */

