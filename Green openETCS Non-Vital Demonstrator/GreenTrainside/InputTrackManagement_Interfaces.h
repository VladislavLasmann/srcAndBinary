/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
#ifndef _InputTrackManagement_Interface
#define _InputTrackManagement_Interface

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Interfaces::InputTrackManagement */
extern void InputTrackManagement_Interfaces(
  /* Interfaces::InputTrackManagement::Data_From_Track */ T_Data_From_Track_To_Mode_Level *Data_From_Track,
  /* Interfaces::InputTrackManagement::MA_SSP_Gradient_Available */ kcg_bool *MA_SSP_Gradient_Available,
  /* Interfaces::InputTrackManagement::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Interfaces::InputTrackManagement::Shunting_Granted_By_RBC */ kcg_bool *Shunting_Granted_By_RBC,
  /* Interfaces::InputTrackManagement::Trip_Order_Given_By_Balise */ kcg_bool *Trip_Order_Given_By_Balise,
  /* Interfaces::InputTrackManagement::List_BG_Related_To_SR_Empty */ kcg_bool *List_BG_Related_To_SR_Empty,
  /* Interfaces::InputTrackManagement::Stop_If_In_Shunting */ kcg_bool *Stop_If_In_Shunting,
  /* Interfaces::InputTrackManagement::Stop_If_In_SR */ kcg_bool *Stop_If_In_SR,
  /* Interfaces::InputTrackManagement::RCB_Ack_And_EB_Revocked */ kcg_bool *RCB_Ack_And_EB_Revocked,
  /* Interfaces::InputTrackManagement::RBC_Authorized_SR */ kcg_bool *RBC_Authorized_SR,
  /* Interfaces::InputTrackManagement::Reversing_Data */ T_Reversing_Data_Level_And_Mode *Reversing_Data,
  /* Interfaces::InputTrackManagement::Emergency_Stop_Message_Received */ kcg_bool *Emergency_Stop_Message_Received);

#endif /* _InputTrackManagement_Interface */
/* $**************** KCG Version 6.4 (build i21) ****************
** InputTrackManagement_Interfaces.h
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
