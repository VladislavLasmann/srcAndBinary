/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_NC_CDTRAIN_RBC_S.h"

/* RBC_Session_Pkg::TrainData__Set_NC_CDTRAIN */
void TrainData__Set_NC_CDTRAIN_RBC_S(
  /* RBC_Session_Pkg::TrainData__Set_NC_CDTRAIN::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_NC_CDTRAIN::in_NC_CDTRAIN */ NC_CDTRAIN in_NC_CDTRAIN,
  /* RBC_Session_Pkg::TrainData__Set_NC_CDTRAIN::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).nc_cdtrain = in_NC_CDTRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_NC_CDTRAIN_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */
