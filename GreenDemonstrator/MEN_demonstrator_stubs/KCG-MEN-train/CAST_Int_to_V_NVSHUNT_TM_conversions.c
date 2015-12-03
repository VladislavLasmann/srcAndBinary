/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVSHUNT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVSHUNT */
V_NVSHUNT CAST_Int_to_V_NVSHUNT_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVSHUNT::v_nvshunt_int */kcg_int v_nvshunt_int)
{
  /* TM_conversions::CAST_Int_to_V_NVSHUNT::v_nvshunt */ V_NVSHUNT v_nvshunt;
  
  v_nvshunt = v_nvshunt_int * 5;
  return v_nvshunt;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_NVSHUNT_TM_conversions.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

