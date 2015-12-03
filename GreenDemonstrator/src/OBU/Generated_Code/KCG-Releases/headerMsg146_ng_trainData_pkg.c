/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "headerMsg146_ng_trainData_pkg.h"

/* trainData_pkg::headerMsg146_ng */
void headerMsg146_ng_trainData_pkg(
  /* trainData_pkg::headerMsg146_ng::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::headerMsg146_ng::t_train */ T_TRAIN t_train,
  /* trainData_pkg::headerMsg146_ng::RBC_timeStamp */ T_TRAIN RBC_timeStamp,
  /* trainData_pkg::headerMsg146_ng::header */ M_146_T_TM_radio_messages *header)
{
  (*header).valid = kcg_true;
  (*header).nid_message = co146_Acknowledgement_Id_Pkg;
  (*header).l_message = 0;
  (*header).t_train = t_train;
  (*header).nid_engine = nidEngine;
  (*header).t_train_req = RBC_timeStamp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** headerMsg146_ng_trainData_pkg.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

