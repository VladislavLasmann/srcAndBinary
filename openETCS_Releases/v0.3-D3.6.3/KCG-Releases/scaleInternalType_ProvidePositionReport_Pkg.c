/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaleInternalType_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::scaleInternalType */
kcg_int scaleInternalType_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::scaleInternalType::scale */ Q_SCALE scale,
  /* ProvidePositionReport_Pkg::scaleInternalType::internalValue */ kcg_int internalValue)
{
  /* ProvidePositionReport_Pkg::scaleInternalType::scaledValue */
  static kcg_int scaledValue;
  
  switch (scale) {
    case Q_SCALE_10_cm_scale :
      scaledValue = internalValue /
        cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_1_m_scale :
      scaledValue = internalValue /
        cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_10_m_scale :
      scaledValue = internalValue /
        cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
      break;
    
  }
  return scaledValue;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaleInternalType_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

