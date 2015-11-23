/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:20
*************************************************************$ */
#ifndef _sendDynamic_manage_DMI_Output_Pkg_H_
#define _sendDynamic_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.h"
#include "calcDistances_manage_DMI_Output_Pkg.h"
#include "convert_cm_s_km_h_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */


/* manage_DMI_Output_Pkg::sendDynamic */
extern void sendDynamic_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendDynamic::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendDynamic::inOdometry */odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::sendDynamic::inTrainPosition */trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::sendDynamic::inSpeedSupervision */speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::sendDynamic::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::sendDynamic::inNationalValues */nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::sendDynamic::inMoRC_status */morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* manage_DMI_Output_Pkg::sendDynamic::inMovementAuthority */movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::sendDynamic::inNTC */NID_NTC inNTC,
  /* manage_DMI_Output_Pkg::sendDynamic::packetDynamic */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *packetDynamic);

#endif /* _sendDynamic_manage_DMI_Output_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendDynamic_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-23T09:24:20
*************************************************************$ */

