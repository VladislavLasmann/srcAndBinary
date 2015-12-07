/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P005_ForCalcTrainPos_TM_specific.h"

/* TM_specific::Read_P005_ForCalcTrainPos */
void Read_P005_ForCalcTrainPos_TM_specific(
  /* TM_specific::Read_P005_ForCalcTrainPos::RadioMessage_IN */ CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* TM_specific::Read_P005_ForCalcTrainPos::LRBG */ NID_LRBG LRBG,
  /* TM_specific::Read_P005_ForCalcTrainPos::NID_C_onboard */ NID_C NID_C_onboard,
  /* TM_specific::Read_P005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGs_T_BG_Types_Pkg *LinkedBGsOUT)
{
  /* TM_specific::Read_P005_ForCalcTrainPos::_L3 */
  static P005_OBU_T_TM _L3;
  /* TM_specific::Read_P005_ForCalcTrainPos::_L6 */
  static kcg_bool _L6;
  
  /* 1 */ Read_P005_TM(RadioMessage_IN, &_L6, &_L3);
  /* ck__L6 */ if (_L6) {
    /* 1 */
    C_P005_ForCalcTrainPos_TM_conversions(
      &_L3,
      LRBG,
      NID_C_onboard,
      LinkedBGsOUT);
  }
  else {
    kcg_copy_LinkedBGs_T_BG_Types_Pkg(
      LinkedBGsOUT,
      (LinkedBGs_T_BG_Types_Pkg *) &DEFAULT_LinkedBGs_T_TM_specific);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P005_ForCalcTrainPos_TM_specific.c
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

