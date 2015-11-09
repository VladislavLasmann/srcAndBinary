/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_pwlinear_int.h"

void Counter_reset_pwlinear_int(outC_Counter_pwlinear_int *outC)
{
  outC->init = kcg_true;
}

/* pwlinear::Counter */
void Counter_pwlinear_int(
  /* pwlinear::Counter::Incr */kcg_int Incr,
  /* pwlinear::Counter::Reset */kcg_bool Reset,
  outC_Counter_pwlinear_int *outC)
{
  static kcg_int tmp;
  
  if (Reset) {
    tmp = 0;
  }
  else if (outC->init) {
    tmp = 0;
  }
  else {
    tmp = outC->Count;
  }
  outC->init = kcg_false;
  outC->Count = tmp + Incr;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Counter_pwlinear_int.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

