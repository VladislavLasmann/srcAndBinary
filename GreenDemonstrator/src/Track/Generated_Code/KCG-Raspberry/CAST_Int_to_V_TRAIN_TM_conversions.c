/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_TRAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_TRAIN */
V_TRAIN CAST_Int_to_V_TRAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_TRAIN::v_train_int */kcg_int v_train_int)
{
  /* TM_conversions::CAST_Int_to_V_TRAIN::v_train */ V_TRAIN v_train;
  
  v_train = v_train_int * 5;
  return v_train;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_TRAIN_TM_conversions.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

