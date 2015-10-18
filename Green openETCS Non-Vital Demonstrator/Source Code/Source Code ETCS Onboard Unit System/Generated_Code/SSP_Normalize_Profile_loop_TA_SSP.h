/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */
#ifndef _SSP_Normalize_Profile_loop_TA_SSP_H_
#define _SSP_Normalize_Profile_loop_TA_SSP_H_

#include "kcg_types.h"
#include "TrainLength_Correction_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_SSP::SSP_Normalize_Profile_loop */
extern void SSP_Normalize_Profile_loop_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Normalize_Profile_loop::ProfileIn */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile_loop::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_SSP::SSP_Normalize_Profile_loop::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP::SSP_Normalize_Profile_loop::ProfileNormalized_LRBG */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG);

#endif /* _SSP_Normalize_Profile_loop_TA_SSP_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Normalize_Profile_loop_TA_SSP.h
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */

