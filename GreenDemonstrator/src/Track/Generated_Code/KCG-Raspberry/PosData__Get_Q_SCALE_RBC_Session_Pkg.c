/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_Q_SCALE_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Get_Q_SCALE */
Q_SCALE PosData__Get_Q_SCALE_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Get_Q_SCALE::inPosData */PosData_T *inPosData)
{
  /* RBC_Session_Pkg::PosData__Get_Q_SCALE::out_Q_SCALE */ Q_SCALE out_Q_SCALE;
  
  out_Q_SCALE = (*inPosData).q_scale;
  return out_Q_SCALE;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Get_Q_SCALE_RBC_Session_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

