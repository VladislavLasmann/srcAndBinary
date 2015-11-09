/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "vIntern2Extern_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::vIntern2Extern */
V_TRAIN vIntern2Extern_RadioSupport_Pkg(
  /* RadioSupport_Pkg::vIntern2Extern::v_intern */V_internal_Type_Obu_BasicTypes_Pkg v_intern)
{
  /* RadioSupport_Pkg::vIntern2Extern::v_SRS */
  static V_TRAIN v_SRS;
  
  v_SRS = v_intern * 36 / 200;
  return v_SRS;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** vIntern2Extern_RadioSupport_Pkg.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

