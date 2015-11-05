/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Train_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Train_Data_to_int */
void C_DMI_Train_Data_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::dmi_train_data_ct */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_train_data_ct,
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::dmi_train_data_int */ DMI_Train_Data_int_array_T_DATA *dmi_train_data_int)
{
  (*dmi_train_data_int)[1] = (*dmi_train_data_ct).systemTime;
  (*dmi_train_data_int)[3] = (*dmi_train_data_ct).l_train;
  (*dmi_train_data_int)[4] = (*dmi_train_data_ct).m_brakeperct;
  (*dmi_train_data_int)[5] = (*dmi_train_data_ct).v_maxTrain;
  (*dmi_train_data_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_train_data_ct).valid);
  (*dmi_train_data_int)[2] = /* 1 */
    CAST_NC_TRAIN_to_int_TM_conversions((*dmi_train_data_ct).trainCategory);
  (*dmi_train_data_int)[6] = /* 1 */
    CAST_M_AXLELOADCAT_to_int_TM_conversions((*dmi_train_data_ct).m_axleLoad);
  (*dmi_train_data_int)[7] = /* 1 */
    CAST_M_AIRTIGHT_to_int_TM_conversions((*dmi_train_data_ct).m_airTight);
  (*dmi_train_data_int)[8] = /* 1 */
    CAST_M_LOADINGGAUGE_to_int_TM_conversions(
      (*dmi_train_data_ct).m_loadingGauge);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Train_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */
