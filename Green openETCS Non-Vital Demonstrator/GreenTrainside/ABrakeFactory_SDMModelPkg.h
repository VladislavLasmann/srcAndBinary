/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
#ifndef _ABrakeFactory_SDMModelPkg_H_
#define _ABrakeFactory_SDMModelPkg_H_

#include "kcg_types.h"
#include "LimitToReducedAdhesion_SDMModel.h"
#include "brakeBuildUp_SDMConversionModel.h"
#include "A_brake_safe_SDMConversionModel.h"
#include "brakePercentToABrake_SDMConvers.h"
#include "InflateABrakeSafe_SDMConversion.h"
#include "InflateABrakeService_SDMConvers.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDMModelPkg::ABrakeFactory */
extern void ABrakeFactory_SDMModelPkg(
  /* SDMModelPkg::ABrakeFactory::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMModelPkg::ABrakeFactory::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDMModelPkg::ABrakeFactory::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* SDMModelPkg::ABrakeFactory::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::ABrakeFactory::aBrakeService */ ASafe_T_CalcBrakingCurves_types *aBrakeService);

#endif /* _ABrakeFactory_SDMModelPkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ABrakeFactory_SDMModelPkg.h
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
