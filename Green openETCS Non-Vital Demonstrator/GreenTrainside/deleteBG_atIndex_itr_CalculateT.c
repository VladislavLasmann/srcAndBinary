/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBG_atIndex_itr_CalculateT.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr */
void deleteBG_atIndex_itr_CalculateT(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_in */ positionedBG_T_TrainPosition_Ty *BG_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_shifted_in */ positionedBG_T_TrainPosition_Ty *BG_shifted_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_out */ positionedBG_T_TrainPosition_Ty *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = iteratorIndex < indexOfBG;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    *cont = kcg_true;
    kcg_copy_positionedBG_T_TrainPo(BG_out, BG_in);
  }
  else {
    else_clock_IfBlock1 = iteratorIndex == indexOfBG;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      *cont = kcg_true;
      kcg_copy_positionedBG_T_TrainPo(BG_out, BG_shifted_in);
    }
    else {
      *cont = (*BG_shifted_in).valid;
      kcg_copy_positionedBG_T_TrainPo(BG_out, BG_shifted_in);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteBG_atIndex_itr_CalculateT.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

