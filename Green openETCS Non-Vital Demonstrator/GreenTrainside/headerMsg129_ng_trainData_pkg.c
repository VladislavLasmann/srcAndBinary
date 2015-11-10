/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "headerMsg129_ng_trainData_pkg.h"

/* trainData_pkg::headerMsg129_ng */
void headerMsg129_ng_trainData_pkg(
  /* trainData_pkg::headerMsg129_ng::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::headerMsg129_ng::t_train */ T_TRAIN t_train,
  /* trainData_pkg::headerMsg129_ng::header */ M_129_T_TM_radio_messages *header)
{
  (*header).valid = kcg_true;
  (*header).nid_message = co129_Validated_Train_Data_Id_P;
  (*header).l_message = 0;
  (*header).t_train = t_train;
  (*header).nid_engine = nidEngine;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** headerMsg129_ng_trainData_pkg.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

