/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Position_SSP_with_BGs_TA_SS.h"

/* TA_SSP_new::SSP_Position_SSP_with_BGs */
void SSP_Position_SSP_with_BGs_TA_SS(
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::ProfileIn */ StaticSpeedProfile_t_TrackAtlas *ProfileIn,
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::LastProfile */ StaticSpeedProfile_t_TrackAtlas *LastProfile,
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::ProfileOut */ StaticSpeedProfile_t_TrackAtlas *ProfileOut,
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::available */ kcg_bool *available,
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::ProfileLoopOut */ StaticSpeedProfile_t_TrackAtlas *ProfileLoopOut)
{
  /* TA_SSP_new::SSP_Position_SSP_with_BGs */
  static StaticSpeedProfile_t_TrackAtlas tmp1;
  /* TA_SSP_new::SSP_Position_SSP_with_BGs */
  static StaticSpeedProfile_t_TrackAtlas tmp;
  /* TA_SSP_new::SSP_Position_SSP_with_BGs::_L6 */
  static StaticSpeedProfile_t_TrackAtlas _L6;
  
  /* 1 */ _208_SSP_Merge_New_P27V1_to_Pro(ProfileIn, LastProfile, &_L6);
  /* 1 */ SSP_Normalize_Profile_TA_SSP_ne(&_L6, pos_LRBG, train_length, &tmp);
  /* 1 */ SSP_Truncate_at_BG_TA_SSP_new(&tmp, &tmp1);
  /* 1 */ SSP_Correct_StartSection_TA_SSP(&tmp1, ProfileOut);
  *available = (*ProfileOut)[0].valid;
  /* 2 */
  SSP_Normalize_Profile_TA_SSP_ne(&_L6, pos_prvLRBG, train_length, &tmp);
  /* 2 */ SSP_Truncate_at_BG_TA_SSP_new(&tmp, &tmp1);
  /* 2 */ SSP_Correct_StartSection_TA_SSP(&tmp1, ProfileLoopOut);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Position_SSP_with_BGs_TA_SS.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

