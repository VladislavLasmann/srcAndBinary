/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_V_TRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_V_TRAIN_to_int */
kcg_int CAST_V_TRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_V_TRAIN_to_int::v_train */V_TRAIN v_train)
{
  /* TM_conversions::CAST_V_TRAIN_to_int::v_train_int */ kcg_int v_train_int;
  
  v_train_int = v_train / 5;
  return v_train_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_V_TRAIN_to_int_TM_conversions.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

