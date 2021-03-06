/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBCSessionRequests_OutputToRBC.h"

/* OutputToRBC::RBCSessionRequests */
kcg_bool RBCSessionRequests_OutputToRBC(
  /* OutputToRBC::RBCSessionRequests::last_level */ M_LEVEL last_level,
  /* OutputToRBC::RBCSessionRequests::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition)
{
  /* OutputToRBC::RBCSessionRequests::Loc_new_level */ M_LEVEL Loc_new_level;
  /* OutputToRBC::RBCSessionRequests::Connection_to_RBC_Requested */ kcg_bool Connection_to_RBC_Requested;
  
  /* 1 */ if ((*selected_level_transition).is_set) {
    Loc_new_level = (*selected_level_transition).transition.level;
  }
  else {
    Loc_new_level = last_level;
  }
  Connection_to_RBC_Requested = (last_level != Loc_new_level) &
    ((Loc_new_level == M_LEVEL_Level_2) | (Loc_new_level == M_LEVEL_Level_3)) &
    ((last_level == M_LEVEL_Level_0) | (last_level == M_LEVEL_Level_1) |
      (last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC));
  return Connection_to_RBC_Requested;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBCSessionRequests_OutputToRBC.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

