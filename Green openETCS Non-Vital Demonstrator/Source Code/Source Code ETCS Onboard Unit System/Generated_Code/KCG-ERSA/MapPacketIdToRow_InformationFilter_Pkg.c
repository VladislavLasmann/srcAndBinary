/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapPacketIdToRow */
kcg_int MapPacketIdToRow_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapPacketIdToRow::inPacketId */kcg_int inPacketId)
{
  /* InformationFilter_Pkg::MapPacketIdToRow::outRow */
  static kcg_int outRow;
  
  outRow = inPacketId;
  return outRow;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MapPacketIdToRow_InformationFilter_Pkg.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

