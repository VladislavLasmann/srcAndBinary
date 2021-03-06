/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EntryInLevel2or3_OutputToRBC.h"

/* OutputToRBC::EntryInLevel2or3 */
kcg_bool EntryInLevel2or3_OutputToRBC(
  /* OutputToRBC::EntryInLevel2or3::last_level */ M_LEVEL last_level,
  /* OutputToRBC::EntryInLevel2or3::new_level */ M_LEVEL new_level)
{
  /* OutputToRBC::EntryInLevel2or3::PositionReportNeeded */ kcg_bool PositionReportNeeded;
  
  PositionReportNeeded = (last_level != new_level) & ((new_level ==
        M_LEVEL_Level_2) | (new_level == M_LEVEL_Level_3)) & ((last_level ==
        M_LEVEL_Level_0) | (last_level == M_LEVEL_Level_1) | (last_level ==
        M_LEVEL_Level_NTC_specified_by_NID_NTC));
  return PositionReportNeeded;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EntryInLevel2or3_OutputToRBC.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

