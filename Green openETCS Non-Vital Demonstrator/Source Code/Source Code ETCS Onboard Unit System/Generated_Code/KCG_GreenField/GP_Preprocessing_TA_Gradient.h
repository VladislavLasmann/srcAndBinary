/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _GP_Preprocessing_TA_Gradient_H
#define _GP_Preprocessing_TA_Gradient_H

#include "kcg_types.h"
#include "MoveGPSectionsAbsolute_TA_Lib_i.h"
#include "_205_GP_Convert_P21_to_Distance.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_Gradient::GP_Preprocessing */
extern void GP_Preprocessing_TA_Gradient(
  /* TA_Gradient::GP_Preprocessing::p21 */ P021_OBU_T_TM *p21,
  /* TA_Gradient::GP_Preprocessing::reset */ kcg_bool reset,
  /* TA_Gradient::GP_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Gradient::GP_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Gradient::GP_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::GP */ GradientProfile_t_TrackAtlasTyp *GP);

#endif /* _GP_Preprocessing_TA_Gradient_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Preprocessing_TA_Gradient.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

