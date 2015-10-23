/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Merge_New_P21_to_Profile_loop_TA_Gradient.h"

/* TA_Gradient::GP_Merge_New_P21_to_Profile_loop */
void GP_Merge_New_P21_to_Profile_loop_TA_Gradient(
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::i */ kcg_int i,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::GP */ GradientProfile_t_TrackAtlasTypes *GP,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::First_Section_To_Replace */ kcg_int First_Section_To_Replace,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::new_GP_received */ GradientProfile_t_TrackAtlasTypes *new_GP_received,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::GradientProfile_out */ GradientProfile_t_TrackAtlasTypes *GradientProfile_out)
{
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop */
  static Gradient_section_t_TrackAtlasTypes tmp;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(GradientProfile_out, GP);
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp, &(*new_GP_received)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &tmp,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  if ((0 <= i + First_Section_To_Replace) & (i + First_Section_To_Replace <
      50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &(*GradientProfile_out)[i + First_Section_To_Replace],
      &tmp);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Merge_New_P21_to_Profile_loop_TA_Gradient.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

