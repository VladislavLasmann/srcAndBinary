/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Find_First_Gsection_After_BG_loop_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop */
void GP_Find_First_Gsection_After_BG_loop_TA_Gradient_new(
  /* TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop::i */ kcg_int i,
  /* TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop::Acc */ kcg_int Acc,
  /* TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop::cont */ kcg_bool *cont,
  /* TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop::Pointer */ kcg_int *Pointer)
{
  /* TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop */ Gradient_section_t_TrackAtlasTypes tmp;
  /* TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop::_L13 */ kcg_int _L13;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp, &(*Profile_in)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &tmp,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GP_Section_TA_Gradient_new);
  }
  *cont = tmp.Loc_LRBG < 0;
  _L13 = i - 1;
  /* 1 */ if (_L13 < 0) {
    *Pointer = 0;
  }
  else {
    *Pointer = _L13;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Find_First_Gsection_After_BG_loop_TA_Gradient_new.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

