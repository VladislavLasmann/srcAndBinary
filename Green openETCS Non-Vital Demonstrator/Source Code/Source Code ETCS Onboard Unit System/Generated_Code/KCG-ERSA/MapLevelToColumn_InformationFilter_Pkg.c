/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapLevelToColumn_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapLevelToColumn */
kcg_int MapLevelToColumn_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapLevelToColumn::inLevel */ M_LEVEL inLevel)
{
  /* InformationFilter_Pkg::MapLevelToColumn::outColumn */ kcg_int outColumn;
  
  switch (inLevel) {
    case M_LEVEL_Level_0 :
      outColumn = 0;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      outColumn = 1;
      break;
    case M_LEVEL_Level_1 :
      outColumn = 2;
      break;
    case M_LEVEL_Level_2 :
      outColumn = 3;
      break;
    case M_LEVEL_Level_3 :
      outColumn = 4;
      break;
    
  }
  return outColumn;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MapLevelToColumn_InformationFilter_Pkg.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

