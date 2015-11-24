/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SimpleValidityCheck_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SimpleValidityCheck */
kcg_bool SimpleValidityCheck_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SimpleValidityCheck::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Input_Wrappers::SimpleValidityCheck::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SDM_Input_Wrappers::SimpleValidityCheck::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SDM_Input_Wrappers::SimpleValidityCheck::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_Input_Wrappers::SimpleValidityCheck::dataFromTrackAtlas */ DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas)
{
  /* SDM_Input_Wrappers::SimpleValidityCheck::exception */ kcg_bool exception;
  
  exception = !((*NationalValues).valid & (*odometry).valid &
      (*TrainPosition).valid & (*trainData).valid &
      (*dataFromTrackAtlas).MRSP[0].valid & (*dataFromTrackAtlas).MA.valid &
      ((*odometry).motionDirection == cabAFirst_Obu_BasicTypes_Pkg) & (0 <=
        (*odometry).speed.v_safeNominal) & ((*odometry).speed.v_safeNominal >=
        (*odometry).speed.v_lower));
  return exception;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SimpleValidityCheck_SDM_Input_Wrappers.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

