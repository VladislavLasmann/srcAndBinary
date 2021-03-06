/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG */
Q_DIRTRAIN trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refBG */ positionedBG_T_TrainPosition_Types_Pck *refBG)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::direction */ Q_DIRTRAIN direction;
  
  /* 2 */ if (((*currentOdometry).motionDirection ==
      unknownDirection_Obu_BasicTypes_Pkg) | !(*currentOdometry).valid |
    !(*refBG).valid | !(*refBG).infoFromPassing.valid |
    !(*refBG).infoFromPassing.BG_Header.valid |
    !(*refBG).infoFromPassing.BG_Header.bgPosition.valid) {
    direction = Q_DIRTRAIN_Unknown;
  }
  else /* 1 */ if ((*currentOdometry).motionDirection ==
    (*refBG).infoFromPassing.BG_Header.bgPosition.motionDirection) {
    direction = (*refBG).infoFromPassing.BG_Header.trainRunningDirectionToBG;
  }
  else {
    direction = /* 1 */
      invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
        (*refBG).infoFromPassing.BG_Header.trainRunningDirectionToBG);
  }
  return direction;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

