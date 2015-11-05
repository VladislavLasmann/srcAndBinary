/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int */
void CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::Input1 */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *Input1,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::Output1 */ DMI_Track_Description_int_array_T *Output1)
{
  (&(&(&(*Output1)[0])[0])[0])[1] = (*Input1).system_clock;
  (&(&(&(*Output1)[0])[0])[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*Input1).valid);
  /* 1 */
  CAST_DMI_speedProfile_to_int_DATA_Variables(
    &(*Input1).speedProfiles,
    (DMI_speedProfile_int_array_T_DATA *) &(&(&(*Output1)[0])[0])[2]);
  /* 1 */
  CAST_DMI_gradientProfile_to_int_DATA_Variables(
    &(*Input1).gradientProfiles,
    (DMI_gradientProfile_int_arrayT *) &(&(*Output1)[0])[131]);
  /* 1 */
  CAST_DMI_trackCondition_to_int_DATA_Variables(
    &(*Input1).trackConditions,
    (DMI_trackCondition_int_array_T *) &(*Output1)[260]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

