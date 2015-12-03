/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC.h"

/* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS */
void RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  R_data_internal_T_InfraLib tmp1;
  R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_439_D_00050_9_M015_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    RadiaDataIn,
    439000509,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_440_D_00295_6_M015_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &tmp,
    440002956,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_441_D_00052_1_M015_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &tmp1,
    441000521,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC.c
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

