/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_TRAIN_TM_conversi.h"

/* TM_conversions::CAST_Int_to_T_TRAIN */
T_TRAIN CAST_Int_to_T_TRAIN_TM_conversi(
  /* TM_conversions::CAST_Int_to_T_TRAIN::t_train_int */ kcg_int t_train_int)
{
  /* TM_conversions::CAST_Int_to_T_TRAIN::t_train */
  static T_TRAIN t_train;
  
  t_train = t_train_int;
  return t_train;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_TRAIN_TM_conversi.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
