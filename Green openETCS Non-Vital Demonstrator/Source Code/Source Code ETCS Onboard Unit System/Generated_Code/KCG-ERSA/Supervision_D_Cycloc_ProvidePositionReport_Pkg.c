/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_D_Cycloc_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_D_Cycloc */
kcg_bool Supervision_D_Cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::dcycloc */ D_CYCLOC dcycloc)
{
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::trigger */
  static kcg_bool trigger;
  
  trigger = kcg_false;
  return trigger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_D_Cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */
