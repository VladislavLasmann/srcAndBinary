/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_TA_Gradient.h"

/* TA_Gradient::GP_Normalize_Profile */
void GP_Normalize_Profile_TA_Gradient(
  /* TA_Gradient::GP_Normalize_Profile::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_Gradient::GP_Normalize_Profile::ProfileNormalized_LRBG */ GradientProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  /* TA_Gradient::GP_Normalize_Profile */
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileNormalized_LRBG, ProfileIn);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, ProfileNormalized_LRBG);
    /* 1 */
    GP_Normalize_Profile_loop_TA_Gradient(
      i,
      &acc,
      pos_BG,
      ProfileNormalized_LRBG);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Normalize_Profile_TA_Gradient.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

