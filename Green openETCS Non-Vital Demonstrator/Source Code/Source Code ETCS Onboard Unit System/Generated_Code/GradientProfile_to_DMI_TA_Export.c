/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_TA_Export.h"

/* TA_Export::GradientProfile_to_DMI */
void GradientProfile_to_DMI_TA_Export(
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_in */ GradientProfile_t_TrackAtlasTypes *Gradient_Profile_in,
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_for_DMI_out */ GradientProfile_for_DMI_t_TrackAtlasTypes *Gradient_Profile_for_DMI_out)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 50; i++) {
    /* 1 */
    GradientProfile_to_DMI_loop_TA_Export(
      &(*Gradient_Profile_in)[i],
      &(*Gradient_Profile_for_DMI_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GradientProfile_to_DMI_TA_Export.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

