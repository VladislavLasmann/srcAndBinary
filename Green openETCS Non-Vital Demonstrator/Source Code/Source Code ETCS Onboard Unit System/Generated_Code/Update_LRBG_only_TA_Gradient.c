/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_LRBG_only_TA_Gradient.h"

/* TA_Gradient::Update_LRBG_only */
void Update_LRBG_only_TA_Gradient(
  /* TA_Gradient::Update_LRBG_only::SP_in */GradientProfile_t_TrackAtlasTypes *SP_in,
  /* TA_Gradient::Update_LRBG_only::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  /* TA_Gradient::Update_LRBG_only::new_profile_out */GradientProfile_t_TrackAtlasTypes *new_profile_out)
{
  /* 1 */
  MoveGPSectionsToNewLRBGafter_TA_Lib_internal(
    SP_in,
    (*TrainPosition_in).LRBG.location.nominal -
    (*TrainPosition_in).prvLRBG.location.nominal,
    new_profile_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_only_TA_Gradient.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

