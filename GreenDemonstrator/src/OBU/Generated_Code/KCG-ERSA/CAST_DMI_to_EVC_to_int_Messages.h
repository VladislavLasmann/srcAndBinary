/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */
#ifndef _CAST_DMI_to_EVC_to_int_Messages_H_
#define _CAST_DMI_to_EVC_to_int_Messages_H_

#include "kcg_types.h"
#include "C_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways.h"
#include "C_DMI_Train_Data_to_int_DATA_Packets_Bothways.h"
#include "C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.h"
#include "C_DMI_Level_Data_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Icon_Ack_to_int1_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Messages::CAST_DMI_to_EVC_to_int */
extern void CAST_DMI_to_EVC_to_int_Messages(
  /* Messages::CAST_DMI_to_EVC_to_int::dmi_to_evc_ct */ DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct,
  /* Messages::CAST_DMI_to_EVC_to_int::dmi_to_evc_int */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int);

#endif /* _CAST_DMI_to_EVC_to_int_Messages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_to_EVC_to_int_Messages.h
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

