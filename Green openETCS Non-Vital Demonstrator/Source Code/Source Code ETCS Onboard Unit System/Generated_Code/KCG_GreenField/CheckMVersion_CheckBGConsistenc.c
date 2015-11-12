/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMVersion_CheckBGConsistenc.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckMVersion */
void CheckMVersion_CheckBGConsistenc(
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::trackVersion */ M_VERSION trackVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::trainVersion */ M_VERSION trainVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::isSameVersion */ kcg_bool *isSameVersion,
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::compatibleVersion */ kcg_bool *compatibleVersion)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L4 */
  static kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMVersion::_L3 */
  static kcg_int _L3;
  
  _L3 = /* 1 */ CAST_M_VERSION_to_int_TM_conver(trainVersion);
  _L4 = /* 2 */ CAST_M_VERSION_to_int_TM_conver(trackVersion);
  *compatibleVersion = _L3 >= _L4;
  *isSameVersion = _L3 == _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMVersion_CheckBGConsistenc.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

