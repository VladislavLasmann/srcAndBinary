/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "storeDriverInput_trainData_pkg.h"

/* trainData_pkg::storeDriverInput */
void storeDriverInput_trainData_pkg(
  /* trainData_pkg::storeDriverInput::fromDMI_TrainData */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *fromDMI_TrainData,
  /* trainData_pkg::storeDriverInput::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::storeDriverInput::originalTrainData */ trainData_T_TIU_Types_Pkg *originalTrainData,
  /* trainData_pkg::storeDriverInput::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::storeDriverInput::trainDataForEVC */ trainData_T_TIU_Types_Pkg *trainDataForEVC,
  /* trainData_pkg::storeDriverInput::updatedStatus */ trainDataStatus_T_trainData_Types_pkg *updatedStatus)
{
  /* trainData_pkg::storeDriverInput::newState */
  static kcg_bool newState;
  
  /* 1 */ if ((*trainDataAckfromDriver).valid) {
    newState = (*trainDataAckfromDriver).acknowledged;
  }
  else {
    newState = (*originalTrainData).acknowledgedByDriver;
  }
  /* ck_updateTrainData */ if ((*fromDMI_TrainData).valid) {
    (*trainDataForEVC).valid = (*originalTrainData).valid;
    (*trainDataForEVC).acknowledgedByDriver = newState;
    (*trainDataForEVC).trainCategory = (*fromDMI_TrainData).trainCategory;
    (*trainDataForEVC).cantDeficientcy = (*originalTrainData).cantDeficientcy;
    (*trainDataForEVC).trainLength = (*fromDMI_TrainData).l_train;
    (*trainDataForEVC).brakePerctage = (*fromDMI_TrainData).m_brakeperct;
    (*trainDataForEVC).maxTrainSpeed = (*fromDMI_TrainData).v_maxTrain;
    (*trainDataForEVC).loadingGauge = (*fromDMI_TrainData).m_loadingGauge;
    (*trainDataForEVC).axleLoadCategory = (*fromDMI_TrainData).m_axleLoad;
    (*trainDataForEVC).airtightSystem = (*fromDMI_TrainData).m_airTight;
    (*trainDataForEVC).axleNumber = (*originalTrainData).axleNumber;
    (*trainDataForEVC).numberNationalSystems =
      (*originalTrainData).numberNationalSystems;
    kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &(*trainDataForEVC).nationSystems,
      &(*originalTrainData).nationSystems);
    (*trainDataForEVC).numberTractionSystems =
      (*originalTrainData).numberTractionSystems;
    kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &(*trainDataForEVC).tractionSystem,
      &(*originalTrainData).tractionSystem);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(trainDataForEVC, originalTrainData);
    (*trainDataForEVC).acknowledgedByDriver = newState;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(updatedStatus, actualStatus);
  (*updatedStatus).validatedByDriver = newState;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** storeDriverInput_trainData_pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

