/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isStored_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::SubFunction::isStored */
void isStored_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::SubFunction::isStored::recivedBG_header */ BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::storedBG */ positionedBG_T_TrainPosition_Ty *storedBG,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::go_on */ kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::acc_out */ BG_Header_T_BG_Types_Pkg *acc_out)
{
  kcg_copy_BG_Header_T_BG_Types_P(acc_out, recivedBG_header);
  *go_on = ((*storedBG).nid_bg != (*recivedBG_header).nid_bg) |
    ((*recivedBG_header).nid_c != (*storedBG).nid_c);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isStored_CheckBGConsistency_Pkg.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

