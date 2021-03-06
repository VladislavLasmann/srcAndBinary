/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Move_DP_or_OL_new_TA_Lib_intern.h"

/* TA_Lib_internal::Move_DP_or_OL_new */
void Move_DP_or_OL_new_TA_Lib_intern(
  /* TA_Lib_internal::Move_DP_or_OL_new::DP_or_OL_in */ DP_or_OL_t_TrackAtlasTypes *DP_or_OL_in,
  /* TA_Lib_internal::Move_DP_or_OL_new::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Lib_internal::Move_DP_or_OL_new::DP_or_OL_out */ DP_or_OL_t_TrackAtlasTypes *DP_or_OL_out)
{
  kcg_copy_DP_or_OL_t_TrackAtlasT(DP_or_OL_out, DP_or_OL_in);
  (*DP_or_OL_out).d_DP_or_OL = (*DP_or_OL_in).d_DP_or_OL + pos_LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Move_DP_or_OL_new_TA_Lib_intern.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

