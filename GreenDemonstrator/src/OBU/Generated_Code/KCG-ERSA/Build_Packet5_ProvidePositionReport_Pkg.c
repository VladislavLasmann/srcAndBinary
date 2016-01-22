/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet5_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet5 */
void Build_Packet5_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet5::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet5::packet5 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5)
{
  (*packet5).valid = kcg_true;
  (*packet5).TrainRunningNumber = (*trainProps).nid_operational;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet5_ProvidePositionReport_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */
