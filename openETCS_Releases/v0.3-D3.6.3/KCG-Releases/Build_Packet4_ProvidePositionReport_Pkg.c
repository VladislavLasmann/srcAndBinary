/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet4_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet4 */
void Build_Packet4_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet4::errorMsg */ ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::Build_Packet4::packet4 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *packet4)
{
  (*packet4).valid = (*errorMsg).present;
  (*packet4).m_error = (*errorMsg).errorType;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet4_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

