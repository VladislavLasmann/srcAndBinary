/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVSUPOVTRP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVSUPOVTRP */
V_NVSUPOVTRP CAST_Int_to_V_NVSUPOVTRP_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVSUPOVTRP::v_nvsupovtrp_int */kcg_int v_nvsupovtrp_int)
{
  /* TM_conversions::CAST_Int_to_V_NVSUPOVTRP::v_nvsupovtrp */ V_NVSUPOVTRP v_nvsupovtrp;
  
  v_nvsupovtrp = v_nvsupovtrp_int * 5;
  return v_nvsupovtrp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_NVSUPOVTRP_TM_conversions.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

