/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T13:23:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN */
void PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN::in_Q_DIRTRAIN */Q_DIRTRAIN in_Q_DIRTRAIN,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN::outPosData */PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).q_dirtrain = in_Q_DIRTRAIN;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg.c
** Generation date: 2015-11-20T13:23:31
*************************************************************$ */

