/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */
#ifndef _determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg_H_
#define _determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC */
extern void determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::morcStatus_1 */morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::morcStatus_2 */morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::handingOverMobile_is_mobile_1 */kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::useInformationFromAcceptingRBC */kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervisingRBC */connection_ids_T_Handover_Pkg *supervisingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_1 */kcg_bool *supervising_isMobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_2 */kcg_bool *supervising_isMobile_2);

#endif /* _determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

