/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_REVERSEAREA_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_REVERSEAREA */
L_REVERSEAREA CAST_Int_to_L_REVERSEAREA_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_REVERSEAREA::l_reversearea_int */kcg_int l_reversearea_int)
{
  /* TM_conversions::CAST_Int_to_L_REVERSEAREA::l_reversearea */
  static L_REVERSEAREA l_reversearea;
  
  l_reversearea = l_reversearea_int;
  return l_reversearea;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_L_REVERSEAREA_TM_conversions.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

