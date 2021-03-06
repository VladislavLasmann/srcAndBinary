/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_MaxTrainSpeed_TA_SpeedProfil.h"

/* TA_SpeedProfiles::SP_MaxTrainSpeed */
void SP_MaxTrainSpeed_TA_SpeedProfil(
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::TrainDataIn */ kcg_int TrainDataIn,
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::MaxTrainSpeed */ SSP_cat_t_TA_MRSP *MaxTrainSpeed)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    MaxTrainSpeed,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_MaxTrainSpeed_TA_SpeedProfil.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

