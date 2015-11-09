/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_OL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_OL */
T_OL CAST_Int_to_T_OL_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_OL::t_ol_int */kcg_int t_ol_int)
{
  /* TM_conversions::CAST_Int_to_T_OL::t_ol */
  static T_OL t_ol;
  
  t_ol = t_ol_int;
  return t_ol;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_T_OL_TM_conversions.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

