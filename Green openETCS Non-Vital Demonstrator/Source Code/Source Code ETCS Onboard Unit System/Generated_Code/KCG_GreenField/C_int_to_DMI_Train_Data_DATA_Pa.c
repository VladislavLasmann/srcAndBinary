/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Train_Data_DATA_Pa.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Train_Data */
void C_int_to_DMI_Train_Data_DATA_Pa(
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::dmi_train_data_int */ DMI_Train_Data_int_array_T_DATA *dmi_train_data_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::dmi_train_data_ct */ DMI_Train_Data_T_DMI_Messages_B *dmi_train_data_ct)
{
  (*dmi_train_data_ct).systemTime = (*dmi_train_data_int)[1];
  (*dmi_train_data_ct).l_train = (*dmi_train_data_int)[3];
  (*dmi_train_data_ct).m_brakeperct = (*dmi_train_data_int)[4];
  (*dmi_train_data_ct).v_maxTrain = (*dmi_train_data_int)[5];
  (*dmi_train_data_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_train_data_int)[0]);
  (*dmi_train_data_ct).trainCategory = /* 1 */
    CAST_Int_to_NC_TRAIN_TM_convers((*dmi_train_data_int)[2]);
  (*dmi_train_data_ct).m_axleLoad = /* 1 */
    CAST_Int_to_M_AXLELOADCAT_TM_co((*dmi_train_data_int)[6]);
  (*dmi_train_data_ct).m_airTight = /* 1 */
    CAST_Int_to_M_AIRTIGHT_TM_conve((*dmi_train_data_int)[7]);
  (*dmi_train_data_ct).m_loadingGauge = /* 1 */
    CAST_Int_to_M_LOADINGGAUGE_TM_c((*dmi_train_data_int)[8]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Train_Data_DATA_Pa.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

