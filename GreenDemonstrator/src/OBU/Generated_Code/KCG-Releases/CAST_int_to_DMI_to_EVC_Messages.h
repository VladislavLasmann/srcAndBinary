/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */
#ifndef _CAST_int_to_DMI_to_EVC_Messages_H_
#define _CAST_int_to_DMI_to_EVC_Messages_H_

#include "kcg_types.h"
#include "Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"
#include "C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.h"
#include "C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.h"
#include "C_int_to_DMI_Train_Data_DATA_Packets_Bothways.h"
#include "C_int_to_DMI_Level_Data_DATA_Packets_Bothways.h"
#include "Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Messages::CAST_int_to_DMI_to_EVC */
extern void CAST_int_to_DMI_to_EVC_Messages(
  /* Messages::CAST_int_to_DMI_to_EVC::dmi_to_evc_int */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  /* Messages::CAST_int_to_DMI_to_EVC::dmi_to_evc_ct */ DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct);

#endif /* _CAST_int_to_DMI_to_EVC_Messages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_to_EVC_Messages.h
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

