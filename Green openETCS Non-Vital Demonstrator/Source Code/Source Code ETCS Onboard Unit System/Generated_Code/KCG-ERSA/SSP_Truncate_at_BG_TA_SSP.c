/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_TA_SSP.h"

/* TA_SSP::SSP_Truncate_at_BG */
void SSP_Truncate_at_BG_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Truncate_at_BG::Profile_out */StaticSpeedProfile_t_TrackAtlasTypes *Profile_out)
{
  static kcg_int tmp2;
  static StaticSpeedProfile_t_TrackAtlasTypes tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_SSP::SSP_Truncate_at_BG::_L5 */
  static kcg_int _L5;
  
  _L5 = 0;
  for (i = 0; i < 50; i++) {
    tmp2 = _L5;
    /* 1 */
    SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP(
      i,
      tmp2,
      Profile_in,
      &tmp,
      &_L5);
    if (!tmp) {
      break;
    }
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    Profile_out,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp1, Profile_out);
    /* 1 */
    SSP_Truncate_at_BG_loop_TA_SSP(
      i,
      &tmp1,
      Profile_in,
      _L5,
      &tmp,
      Profile_out);
    if (!tmp) {
      break;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Truncate_at_BG_TA_SSP.c
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

