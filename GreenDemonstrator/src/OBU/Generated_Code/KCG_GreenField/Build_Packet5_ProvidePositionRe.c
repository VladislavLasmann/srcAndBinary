/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet5_ProvidePositionRe.h"

/* ProvidePositionReport_Pkg::Build_Packet5 */
void Build_Packet5_ProvidePositionRe(
  /* ProvidePositionReport_Pkg::Build_Packet5::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet5::packet5 */ PT5_TrainRunningNumber_Packet_T *packet5)
{
  (*packet5).valid = kcg_true;
  (*packet5).TrainRunningNumber = (*trainProps).nid_operational;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet5_ProvidePositionRe.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

