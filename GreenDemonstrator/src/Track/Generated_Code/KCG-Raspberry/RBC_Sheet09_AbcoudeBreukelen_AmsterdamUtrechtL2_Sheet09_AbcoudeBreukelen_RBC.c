/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"

/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen */
void RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  R_data_internal_T_InfraLib tmp1;
  R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_390_D_00067_4_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    RadiaDataIn,
    390000674,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_391_D_00371_4_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &tmp1,
    391003714,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_393_D_00064_8_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &tmp,
    393000648,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_396_D_00077_7_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &tmp1,
    396000777,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.c
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

