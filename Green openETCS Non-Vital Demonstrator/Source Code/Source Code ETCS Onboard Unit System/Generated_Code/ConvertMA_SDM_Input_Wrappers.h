/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _ConvertMA_SDM_Input_Wrappers_H_
#define _ConvertMA_SDM_Input_Wrappers_H_

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"
#include "TransformV_intToV_real_SDM_Types_Pkg.h"
#include "SummarizeSections_SDM_Input_Wrappers.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Input_Wrappers::ConvertMA */
extern void ConvertMA_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertMA::LRBGlocation */ LocWithInAcc_T_Obu_BasicTypes_Pkg *LRBGlocation,
  /* SDM_Input_Wrappers::ConvertMA::Ma_in */ MovementAuthority_t_TrackAtlasTypes *Ma_in,
  /* SDM_Input_Wrappers::ConvertMA::Ma_out */ MA_section_real_T_TargetManagement_types *Ma_out);

#endif /* _ConvertMA_SDM_Input_Wrappers_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertMA_SDM_Input_Wrappers.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

