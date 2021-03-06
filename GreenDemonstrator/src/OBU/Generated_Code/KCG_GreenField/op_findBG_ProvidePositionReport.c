/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_findBG_ProvidePositionReport.h"

/* ProvidePositionReport_Pkg::op_findBG */
void op_findBG_ProvidePositionReport(
  /* ProvidePositionReport_Pkg::op_findBG::acc */ kcg_bool acc,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG */ positionedBG_T_TrainPosition_Ty *Input_BG,
  /* ProvidePositionReport_Pkg::op_findBG::Input_BG_IDToCheck */ NID_BG Input_BG_IDToCheck,
  /* ProvidePositionReport_Pkg::op_findBG::cond */ kcg_bool *cond,
  /* ProvidePositionReport_Pkg::op_findBG::fd */ kcg_bool *fd)
{
  *cond = (*Input_BG).valid & ((*Input_BG).nid_bg != Input_BG_IDToCheck);
  *fd = acc | !*cond;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_findBG_ProvidePositionReport.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

