/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _MA_Convert_P15_to_DistanceProfile_TA_MA_new_H_
#define _MA_Convert_P15_to_DistanceProfile_TA_MA_new_H_

#include "kcg_types.h"
#include "MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new.h"
#include "Pack_Endsection_TA_MA_new.h"
#include "Normalize_Overlap_TA_MA_new.h"
#include "Normalize_Dangerpoint_TA_MA_new.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_MA_new::MA_Convert_P15_to_DistanceProfile */
extern void MA_Convert_P15_to_DistanceProfile_TA_MA_new(
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::MA_Convert_P15_to_DistanceProfile::MovementAuthority */ MovementAuthority_t_TrackAtlasTypes *MovementAuthority);

#endif /* _MA_Convert_P15_to_DistanceProfile_TA_MA_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Convert_P15_to_DistanceProfile_TA_MA_new.h
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

