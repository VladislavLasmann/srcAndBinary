/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_MESSAGE_to_int_TM_conversions.h"

/* TM_conversions::CAST_L_MESSAGE_to_int */
kcg_int CAST_L_MESSAGE_to_int_TM_conversions(
  /* TM_conversions::CAST_L_MESSAGE_to_int::l_message */ L_MESSAGE l_message)
{
  /* TM_conversions::CAST_L_MESSAGE_to_int::l_message_int */
  static kcg_int l_message_int;
  
  l_message_int = l_message;
  return l_message_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_L_MESSAGE_to_int_TM_conversions.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

