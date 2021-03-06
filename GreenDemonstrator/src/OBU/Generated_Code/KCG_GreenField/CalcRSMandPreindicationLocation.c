/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRSMandPreindicationLocation.h"

/* SDM_Commands_Pkg::CalcRSMandPreindicationLocation */
void CalcRSMandPreindicationLocation(
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::isPreIndicationLocation */ kcg_bool *isPreIndicationLocation,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::isRSMLocation */ kcg_bool *isRSMLocation)
{
  *isPreIndicationLocation = (((*trainLocations).maxSafeFrontEndPostion >
        (*locations).EBD_preindication_location) &
      (*locations).Preindication_EBD_location_vali) |
    ((*locations).Preindication_SBD_location_vali &
      ((*trainLocations).estimatedFrontEndPosition >
        (*locations).SBD_preindication_location));
  *isRSMLocation = (((*trainLocations).maxSafeFrontEndPostion >
        (*locations).EBD_RSM_start_location) &
      (*locations).RSM_start_location_EBD_valid) |
    ((*locations).RSM_start_location_SBD_valid &
      ((*trainLocations).estimatedFrontEndPosition >
        (*locations).SBD_RSM_start_location));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRSMandPreindicationLocation.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

