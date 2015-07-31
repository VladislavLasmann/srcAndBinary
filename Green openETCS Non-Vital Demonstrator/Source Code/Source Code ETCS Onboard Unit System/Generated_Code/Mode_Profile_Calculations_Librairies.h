/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _Mode_Profile_Calculations_Librairies_H_
#define _Mode_Profile_Calculations_Librairies_H_

#include "kcg_types.h"
#include "Position_In_Ack_Area_Librairies.h"
#include "Position_In_Area_Librairies.h"

/* =====================  no input structure  ====================== */


/* Librairies::Mode_Profile_Calculations */
extern void Mode_Profile_Calculations_Librairies(
  /* Librairies::Mode_Profile_Calculations::Selected_Mode */T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Librairies::Mode_Profile_Calculations::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Librairies::Mode_Profile_Calculations::Profile_Mode */T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Librairies::Mode_Profile_Calculations::Train_Speed */Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Librairies::Mode_Profile_Calculations::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Librairies::Mode_Profile_Calculations::Max_Safe_Front_In_Mode_Profile */kcg_bool *Max_Safe_Front_In_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Supervision_Condition_In_Mode_Profile */kcg_bool *Supervision_Condition_In_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Awaited_Mode_Profile */kcg_bool *Awaited_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Estimated_front_End_In_Ack_Area */kcg_bool *Estimated_front_End_In_Ack_Area);

#endif /* _Mode_Profile_Calculations_Librairies_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Mode_Profile_Calculations_Librairies.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

