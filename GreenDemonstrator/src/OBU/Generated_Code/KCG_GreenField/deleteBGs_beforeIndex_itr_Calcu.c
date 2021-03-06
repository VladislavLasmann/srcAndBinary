/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBGs_beforeIndex_itr_Calcu.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr */
void deleteBGs_beforeIndex_itr_Calcu(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::BG_out */ positionedBG_T_TrainPosition_Ty *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr */
  static positionedBG_T_TrainPosition_Ty tmp;
  
  if ((0 <= iteratorIndex) & (iteratorIndex < 41)) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &(*BGs_in)[iteratorIndex]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &tmp,
      (positionedBG_T_TrainPosition_Ty *) &cEmptyPositionedBG_CalculateTra);
  }
  *cont = tmp.valid;
  if ((0 <= indexOfBG + iteratorIndex) & (indexOfBG + iteratorIndex < 41)) {
    kcg_copy_positionedBG_T_TrainPo(
      BG_out,
      &(*BGs_in)[indexOfBG + iteratorIndex]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      BG_out,
      (positionedBG_T_TrainPosition_Ty *) &cEmptyPositionedBG_CalculateTra);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteBGs_beforeIndex_itr_Calcu.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

