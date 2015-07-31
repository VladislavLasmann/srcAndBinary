/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_OVERLAP_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_Q_OVERLAP */
kcg_bool EVAL_Q_OVERLAP_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_OVERLAP::q_overlap */Q_OVERLAP q_overlap)
{
  /* TA_Lib_internal::EVAL_Q_OVERLAP::q_dp_bool */
  static kcg_bool q_dp_bool;
  
  q_dp_bool = ENUM_Q_OVERLAP_overlap_info_TM_conversions == q_overlap;
  return q_dp_bool;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_Q_OVERLAP_TA_Lib_internal.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

