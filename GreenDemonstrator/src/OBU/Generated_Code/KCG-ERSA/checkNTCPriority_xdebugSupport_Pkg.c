/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkNTCPriority_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::checkNTCPriority */
kcg_bool checkNTCPriority_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::checkNTCPriority::p41 */ P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41)
{
  /* xdebugSupport_Pkg::checkNTCPriority::isNTC */ kcg_bool isNTC;
  
  isNTC = (*p41)[0].m_leveltr == M_LEVELTR_Level_NTC_specified_by_NID_NTC;
  return isNTC;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkNTCPriority_xdebugSupport_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

