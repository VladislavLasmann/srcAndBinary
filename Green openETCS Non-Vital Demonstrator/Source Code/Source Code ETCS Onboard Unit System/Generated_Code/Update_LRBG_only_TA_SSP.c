/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_LRBG_only_TA_SSP.h"

/* TA_SSP::Update_LRBG_only */
void Update_LRBG_only_TA_SSP(
  /* TA_SSP::Update_LRBG_only::SP_in */SSP_cat_t_TA_MRSP *SP_in,
  /* TA_SSP::Update_LRBG_only::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  /* TA_SSP::Update_LRBG_only::new_profile_out */SSP_cat_t_TA_MRSP *new_profile_out)
{
  /* 1 */
  MoveSPSectionsToNewLRBGafter_TA_Lib_internal(
    SP_in,
    (*TrainPosition_in).LRBG.location.nominal -
    (*TrainPosition_in).prvLRBG.location.nominal,
    new_profile_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_only_TA_SSP.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

