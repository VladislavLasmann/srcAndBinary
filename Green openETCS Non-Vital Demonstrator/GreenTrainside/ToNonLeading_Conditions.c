/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToNonLeading_Conditions.h"

/* Conditions::ToNonLeading */
kcg_bool ToNonLeading_Conditions(
  /* Conditions::ToNonLeading::Train_Permitted_NL */ kcg_bool Train_Permitted_NL,
  /* Conditions::ToNonLeading::Train_Standstill */ kcg_bool Train_Standstill,
  /* Conditions::ToNonLeading::Driver_Req_NL */ kcg_bool Driver_Req_NL)
{
  /* Conditions::ToNonLeading::Condition46 */
  static kcg_bool Condition46;
  
  Condition46 = Driver_Req_NL & Train_Standstill & Train_Permitted_NL;
  return Condition46;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToNonLeading_Conditions.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

