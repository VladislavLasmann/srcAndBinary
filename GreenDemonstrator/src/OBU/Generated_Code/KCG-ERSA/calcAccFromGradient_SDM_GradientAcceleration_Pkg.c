/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcAccFromGradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::calcAccFromGradient */
void calcAccFromGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::GradientSection */ Gradient_section_real_t_SDM_GradientAcceleration_types *GradientSection,
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::A_gradient_section */ A_gradient_element_t_SDM_GradientAcceleration_types *A_gradient_section)
{
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient */ Percentage_T_SDM_Types_Pkg tmp;
  
  (*A_gradient_section).position = (*GradientSection).location;
  (*A_gradient_section).valid = (*GradientSection).valid;
  /* 1 */ if ((*GradientSection).gradient <= 0.0) {
    tmp = M_rotating_min_SDM_Types_Pkg;
  }
  else {
    tmp = M_rotating_max_SDM_Types_Pkg;
  }
  (*A_gradient_section).gradient_acceleration = /* 1 */
    TransformA_intToA_real_SDM_Types_Pkg(A_gravity_SDM_Types_Pkg) *
    (*GradientSection).gradient / (kcg_real) (1000 + tmp * 10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calcAccFromGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

