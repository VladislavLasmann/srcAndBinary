/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _InputTIUManagement_Interfaces_
#define _InputTIUManagement_Interfaces_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Interfaces::InputTIUManagement */
extern void InputTIUManagement_Interfaces(
  /* Interfaces::InputTIUManagement::Data_from_TIU */ Message_Train_Interface_to_EVC_ *Data_from_TIU,
  /* Interfaces::InputTIUManagement::Cab */ cab_ID_T_TIU_Types_Pkg Cab,
  /* Interfaces::InputTIUManagement::Train_Permitted_NL */ kcg_bool *Train_Permitted_NL,
  /* Interfaces::InputTIUManagement::Train_Permitted_PS */ kcg_bool *Train_Permitted_PS,
  /* Interfaces::InputTIUManagement::Train_Req_SL */ kcg_bool *Train_Req_SL,
  /* Interfaces::InputTIUManagement::All_Desks_Closed */ kcg_bool *All_Desks_Closed,
  /* Interfaces::InputTIUManagement::Desk_Open */ kcg_bool *Desk_Open,
  /* Interfaces::InputTIUManagement::OnBoard_Powered */ kcg_bool *OnBoard_Powered,
  /* Interfaces::InputTIUManagement::Valid_Train_Data_Stored */ kcg_bool *Valid_Train_Data_Stored);

#endif /* _InputTIUManagement_Interfaces_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InputTIUManagement_Interfaces.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

