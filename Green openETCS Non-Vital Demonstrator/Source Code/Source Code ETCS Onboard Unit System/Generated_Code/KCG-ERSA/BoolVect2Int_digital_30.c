/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BoolVect2Int_digital_30.h"

/* digital::BoolVect2Int */
kcg_int BoolVect2Int_digital_30(
  /* digital::BoolVect2Int::BV */array_bool_30 *BV)
{
  static kcg_int i;
  /* digital::BoolVect2Int::Out */
  static kcg_int Out;
  
  Out = 0;
  for (i = 0; i < 30; i++) {
    if ((*BV)[i]) {
      Out = 1 + Out * 2;
    }
    else {
      Out = 0 + Out * 2;
    }
  }
  return Out;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BoolVect2Int_digital_30.c
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

