/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Activate_Packet0_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Activate_Packet0 */
void Activate_Packet0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Activate_Packet0::in_packet0 */ Position_Report_TrainToTrack *in_packet0,
  /* ProvidePositionReport_Pkg::Activate_Packet0::out_packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *out_packet0)
{
  (*out_packet0).valid = kcg_true;
  kcg_copy_Position_Report_TrainToTrack(&(*out_packet0).packet0, in_packet0);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Activate_Packet0_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

