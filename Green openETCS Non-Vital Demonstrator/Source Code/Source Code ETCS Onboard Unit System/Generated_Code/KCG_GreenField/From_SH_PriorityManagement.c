/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SH_PriorityManagement.h"

/* PriorityManagement::From_SH */
T_Mode_Level_And_Mode_Types_Pkg From_SH_PriorityManagement(
  /* PriorityManagement::From_SH::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_SH::Condtition13 */ kcg_bool Condtition13,
  /* PriorityManagement::From_SH::Condition19 */ kcg_bool Condition19,
  /* PriorityManagement::From_SH::Condition26 */ kcg_bool Condition26,
  /* PriorityManagement::From_SH::Condition27 */ kcg_bool Condition27,
  /* PriorityManagement::From_SH::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_SH::Condition30 */ kcg_bool Condition30,
  /* PriorityManagement::From_SH::Condition46 */ kcg_bool Condition46,
  /* PriorityManagement::From_SH::ConditionSH2TR */ kcg_bool ConditionSH2TR,
  /* PriorityManagement::From_SH::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SH::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SH::FromSH_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSH_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromSH_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromSH_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condtition13) {
    FromSH_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (ConditionSH2TR) {
    FromSH_To_NewMode = TR_Level_And_Mode_Types_Pkg;
  }
  else {
    else_clock_IfBlock1 = Condition19 | Condition27 | Condition30;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      FromSH_To_NewMode = SB_Level_And_Mode_Types_Pkg;
    }
    else /* ck_anon_activ */ if (Condition46) {
      FromSH_To_NewMode = NL_Level_And_Mode_Types_Pkg;
    }
    else /* ck_anon_activ */ if (Condition26) {
      FromSH_To_NewMode = PS_Level_And_Mode_Types_Pkg;
    }
    else {
      FromSH_To_NewMode = previousMode_Loc;
    }
  }
  return FromSH_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_SH_PriorityManagement.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

