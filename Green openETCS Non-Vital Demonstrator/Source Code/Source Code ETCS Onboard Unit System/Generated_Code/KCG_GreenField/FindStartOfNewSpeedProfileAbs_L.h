/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _FindStartOfNewSpeedProfileAbs_
#define _FindStartOfNewSpeedProfileAbs_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP */
extern void FindStartOfNewSpeedProfileAbs_L(
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::i */ kcg_int i,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::Acc */ kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::distance_in */ L_internal_Type_Obu_BasicTypes_ distance_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::Profile_in */ StaticSpeedProfile_t_TrackAtlas *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::cont */ kcg_bool *cont,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::relevant_section */ kcg_int *relevant_section);

#endif /* _FindStartOfNewSpeedProfileAbs_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FindStartOfNewSpeedProfileAbs_L.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

