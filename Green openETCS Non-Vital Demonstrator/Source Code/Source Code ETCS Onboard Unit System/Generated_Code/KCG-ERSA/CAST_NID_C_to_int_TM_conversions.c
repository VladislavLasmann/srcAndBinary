/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_C_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_C_to_int */
kcg_int CAST_NID_C_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_C_to_int::nid_c */NID_C nid_c)
{
  /* TM_conversions::CAST_NID_C_to_int::nid_c_int */
  static kcg_int nid_c_int;
  
  nid_c_int = nid_c;
  return nid_c_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_C_to_int_TM_conversions.c
** Generation date: 2015-11-09T11:52:23
*************************************************************$ */

