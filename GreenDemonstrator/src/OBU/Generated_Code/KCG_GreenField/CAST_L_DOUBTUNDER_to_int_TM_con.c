/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_DOUBTUNDER_to_int_TM_con.h"

/* TM_conversions::CAST_L_DOUBTUNDER_to_int */
kcg_int CAST_L_DOUBTUNDER_to_int_TM_con(
  /* TM_conversions::CAST_L_DOUBTUNDER_to_int::l_doubtunder */ L_DOUBTUNDER l_doubtunder)
{
  /* TM_conversions::CAST_L_DOUBTUNDER_to_int::l_doubtunder_int */
  static kcg_int l_doubtunder_int;
  
  l_doubtunder_int = l_doubtunder;
  return l_doubtunder_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_L_DOUBTUNDER_to_int_TM_con.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

