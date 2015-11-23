/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_STM_SystemSpeed_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_STM_SystemSpeed */
void SP_STM_SystemSpeed_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_STM_SystemSpeed::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_STM_SystemSpeed::PacketsIn */ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_STM_SystemSpeed::STM_SystemSpeed */SSP_cat_t_TA_MRSP *STM_SystemSpeed)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    STM_SystemSpeed,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_STM_SystemSpeed_TA_SpeedProfiles.c
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

