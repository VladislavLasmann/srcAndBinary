/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_OutputManagement.h"

/* OutputManagement::Output_To_BG_Management */
void Output_To_BG_Management_OutputManagement(
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management_From_Mode */T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* OutputManagement::Output_To_BG_Management::Connection_to_RBC_Requested */kcg_bool Connection_to_RBC_Requested,
  /* OutputManagement::Output_To_BG_Management::PositionReportNeeded */kcg_bool PositionReportNeeded,
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management */T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management)
{
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    Data_To_BG_Management,
    Data_To_BG_Management_From_Mode);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output_To_BG_Management_OutputManagement.c
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

