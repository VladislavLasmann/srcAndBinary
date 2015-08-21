/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_DANGERPOINT_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_Q_DANGERPOINT */
kcg_bool EVAL_Q_DANGERPOINT_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_DANGERPOINT::q_dangerpoint */Q_DANGERPOINT q_dangerpoint)
{
  /* TA_Lib_internal::EVAL_Q_DANGERPOINT::q_dp_bool */
  static kcg_bool q_dp_bool;
  
  q_dp_bool = ENUM_Q_DANGERPOINT_dangerpoint_info_TM_conversions ==
    q_dangerpoint;
  return q_dp_bool;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_Q_DANGERPOINT_TA_Lib_internal.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

