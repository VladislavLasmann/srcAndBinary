/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_NID_PRVLRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_NID_PRVLRBG */
void PosData__Set_NID_PRVLRBG_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_NID_PRVLRBG::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_NID_PRVLRBG::in_NID_PRVLRBG */NID_PRVLRBG in_NID_PRVLRBG,
  /* RBC_Session_Pkg::PosData__Set_NID_PRVLRBG::outPosData */PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).nid_prvlrbg = in_NID_PRVLRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Set_NID_PRVLRBG_RBC_Session_Pkg.c
** Generation date: 2015-11-23T09:24:24
*************************************************************$ */

