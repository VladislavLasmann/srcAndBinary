/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _Update_LRBG_then_SSP_TA_SSP_H_
#define _Update_LRBG_then_SSP_TA_SSP_H_

#include "kcg_types.h"
#include "MoveSPSectionsToNewLRBGafter_TA_Lib_internal.h"
#include "Update_SP_per_LRBG_TA_Lib_internal.h"
#include "Convert_P27_to_DistanceProfile_TA_SSP.h"

/* =====================  no input structure  ====================== */


/* TA_SSP::Update_LRBG_then_SSP */
extern void Update_LRBG_then_SSP_TA_SSP(
  /* TA_SSP::Update_LRBG_then_SSP::SP_in */SSP_cat_t_TA_MRSP *SP_in,
  /* TA_SSP::Update_LRBG_then_SSP::P27V1_in */P027V1_OBU_T_TM_baseline2 *P27V1_in,
  /* TA_SSP::Update_LRBG_then_SSP::train_length_in */L_internal_Type_Obu_BasicTypes_Pkg train_length_in,
  /* TA_SSP::Update_LRBG_then_SSP::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  /* TA_SSP::Update_LRBG_then_SSP::new_profile_out */SSP_cat_t_TA_MRSP *new_profile_out);

#endif /* _Update_LRBG_then_SSP_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_then_SSP_TA_SSP.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

