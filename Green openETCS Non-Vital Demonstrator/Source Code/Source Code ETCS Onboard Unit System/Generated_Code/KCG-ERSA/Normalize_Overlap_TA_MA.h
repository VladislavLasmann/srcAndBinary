/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */
#ifndef _Normalize_Overlap_TA_MA_H_
#define _Normalize_Overlap_TA_MA_H_

#include "kcg_types.h"
#include "EVAL_V_Release_TA_Lib_internal.h"
#include "EVAL_Q_OVERLAP_TA_Lib_internal.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_MA::Normalize_Overlap */
extern void Normalize_Overlap_TA_MA(
  /* TA_MA::Normalize_Overlap::d_endsection */ L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* TA_MA::Normalize_Overlap::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA::Normalize_Overlap::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Normalize_Overlap::q_overlap */ kcg_bool *q_overlap,
  /* TA_MA::Normalize_Overlap::overlap */ DP_or_OL_t_TrackAtlasTypes *overlap);

#endif /* _Normalize_Overlap_TA_MA_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Overlap_TA_MA.h
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */

