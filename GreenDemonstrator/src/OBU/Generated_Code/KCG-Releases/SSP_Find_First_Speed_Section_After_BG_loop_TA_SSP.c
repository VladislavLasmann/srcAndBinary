/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.h"

/* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop */
void SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP(
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Acc */ kcg_int Acc,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::cont */ kcg_bool *cont,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Pointer */ kcg_int *Pointer)
{
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop */
  static StaticSpeedSection_t_TrackAtlasTypes tmp;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L13 */
  static kcg_int _L13;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&tmp, &(*Profile_in)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &tmp,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  *cont = tmp.d_static_LRBG < 0;
  _L13 = i - 1;
  /* 1 */ if (_L13 < 0) {
    *Pointer = 0;
  }
  else {
    *Pointer = _L13;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

