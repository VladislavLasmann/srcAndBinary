/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_loop_TA_Gradient.h"

/* TA_Gradient::GP_Normalize_Profile_loop */
void GP_Normalize_Profile_loop_TA_Gradient(
  /* TA_Gradient::GP_Normalize_Profile_loop::i */ kcg_int i,
  /* TA_Gradient::GP_Normalize_Profile_loop::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile_loop::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_Gradient::GP_Normalize_Profile_loop::ProfileNormalized_LRBG */ GradientProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  /* TA_Gradient::GP_Normalize_Profile_loop */
  static Gradient_section_t_TrackAtlasTypes tmp;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L4 */
  static Gradient_section_t_TrackAtlasTypes _L4;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L26 */
  static kcg_int _L26;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L4, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L4,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  if ((0 <= i + 1) & (i + 1 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp, &(*ProfileIn)[i + 1]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &tmp,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  _L26 = tmp.Loc_Absolute - _L4.Loc_Absolute;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileNormalized_LRBG, ProfileIn);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp, &_L4);
  /* 2 */ if (_L4.valid) {
    tmp.Loc_LRBG = _L4.Loc_Absolute - pos_BG;
  }
  else {
    tmp.Loc_LRBG = 0;
  }
  /* 3 */ if (_L26 > 0) {
    tmp.L_Gradient = _L26;
  }
  else {
    tmp.L_Gradient = 0;
  }
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &(*ProfileNormalized_LRBG)[i],
      &tmp);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Normalize_Profile_loop_TA_Gradient.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

