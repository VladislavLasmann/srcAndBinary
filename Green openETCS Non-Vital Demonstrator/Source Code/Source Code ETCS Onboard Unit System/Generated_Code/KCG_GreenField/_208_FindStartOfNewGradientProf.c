/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_208_FindStartOfNewGradientProf.h"

/* TA_Lib_internal::FindStartOfNewGradientProfileAbs */
kcg_int _208_FindStartOfNewGradientProf(
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::Profile_in */ GradientProfile_t_TrackAtlasTyp *Profile_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::New_Profile */ GradientProfile_t_TrackAtlasTyp *New_Profile)
{
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs */
  static kcg_int acc;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::relevant_section */
  static kcg_int relevant_section;
  
  relevant_section = 0;
  /* 1 */ for (i = 0; i < 50; i++) {
    acc = relevant_section;
    /* 1 */
    FindStartOfNewGradientProfileAb(
      i,
      acc,
      (*New_Profile)[0].Loc_Absolute,
      Profile_in,
      &cond_iterw,
      &relevant_section);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  return relevant_section;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _208_FindStartOfNewGradientProf.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

