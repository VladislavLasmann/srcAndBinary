/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Train_Running_Numb.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number */
void C_int_to_DMI_Train_Running_Numb(
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::dmi_train_running_number_int */ DMI_Train_Running_Number_int_ar *dmi_train_running_number_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::dmi_train_running_number_ct */ _25_DMI_Train_Running_Number_T_ *dmi_train_running_number_ct)
{
  (*dmi_train_running_number_ct).systemTime =
    (*dmi_train_running_number_int)[1];
  (*dmi_train_running_number_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_train_running_number_int)[0]);
  (*dmi_train_running_number_ct).trainRunningNumber = /* 1 */
    CAST_Int_to_NID_OPERATIONAL_TM_((*dmi_train_running_number_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Train_Running_Numb.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

