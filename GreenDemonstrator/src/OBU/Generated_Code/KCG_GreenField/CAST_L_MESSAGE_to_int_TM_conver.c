/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_MESSAGE_to_int_TM_conver.h"

/* TM_conversions::CAST_L_MESSAGE_to_int */
kcg_int CAST_L_MESSAGE_to_int_TM_conver(
  /* TM_conversions::CAST_L_MESSAGE_to_int::l_message */ L_MESSAGE l_message)
{
  /* TM_conversions::CAST_L_MESSAGE_to_int::l_message_int */
  static kcg_int l_message_int;
  
  l_message_int = l_message;
  return l_message_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_L_MESSAGE_to_int_TM_conver.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

