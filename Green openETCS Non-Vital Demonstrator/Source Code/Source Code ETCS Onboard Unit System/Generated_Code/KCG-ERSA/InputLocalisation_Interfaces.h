/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */
#ifndef _InputLocalisation_Interfaces_H_
#define _InputLocalisation_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* Interfaces::InputLocalisation */
extern void InputLocalisation_Interfaces(
  /* Interfaces::InputLocalisation::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Interfaces::InputLocalisation::BG_In_Expected_List_In_SR */kcg_bool *BG_In_Expected_List_In_SR,
  /* Interfaces::InputLocalisation::BG_In_Expected_List_In_SH */kcg_bool *BG_In_Expected_List_In_SH,
  /* Interfaces::InputLocalisation::Linked_BG_Pased_In_Wrong_Direction */kcg_bool *Linked_BG_Pased_In_Wrong_Direction,
  /* Interfaces::InputLocalisation::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Interfaces::InputLocalisation::Train_Speed */Speed_T_Obu_BasicTypes_Pkg *Train_Speed,
  /* Interfaces::InputLocalisation::Train_Standstill */kcg_bool *Train_Standstill);

#endif /* _InputLocalisation_Interfaces_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputLocalisation_Interfaces.h
** Generation date: 2015-11-09T11:52:22
*************************************************************$ */

