/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_LS_PriorityManagement.h"

/* PriorityManagement::From_LS */
T_Mode_Level_And_Mode_Types_Pkg From_LS_PriorityManagement(
  /* PriorityManagement::From_LS::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_LS::Condition5 */ kcg_bool Condition5,
  /* PriorityManagement::From_LS::Condition6 */ kcg_bool Condition6,
  /* PriorityManagement::From_LS::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_LS::Condition15 */ kcg_bool Condition15,
  /* PriorityManagement::From_LS::Condition21 */ kcg_bool Condition21,
  /* PriorityManagement::From_LS::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_LS::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_LS::Condition31 */ kcg_bool Condition31,
  /* PriorityManagement::From_LS::Condition32 */ kcg_bool Condition32,
  /* PriorityManagement::From_LS::Condition37 */ kcg_bool Condition37,
  /* PriorityManagement::From_LS::Condition46 */ kcg_bool Condition46,
  /* PriorityManagement::From_LS::Condition50 */ kcg_bool Condition50,
  /* PriorityManagement::From_LS::Condition51 */ kcg_bool Condition51,
  /* PriorityManagement::From_LS::Condition56 */ kcg_bool Condition56,
  /* PriorityManagement::From_LS::Condition59 */ kcg_bool Condition59,
  /* PriorityManagement::From_LS::Condition73 */ kcg_bool Condition73,
  /* PriorityManagement::From_LS::ConditionLS2TR */ kcg_bool ConditionLS2TR,
  /* PriorityManagement::From_LS::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* PriorityManagement::From_LS::FromLS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromLS_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromLS_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromLS_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition13) {
    FromLS_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (ConditionLS2TR) {
    FromLS_To_NewMode = TR_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition28) {
    FromLS_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition46) {
    FromLS_To_NewMode = NL_Level_And_Mode_Types_Pkg;
  }
  else {
    _2_else_clock_IfBlock1 = Condition5 | Condition6 | Condition50 |
      Condition51;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      FromLS_To_NewMode = SH_Level_And_Mode_Types_Pkg;
    }
    else /* ck_anon_activ */ if (Condition56) {
      FromLS_To_NewMode = SN_Level_And_Mode_Types_Pkg;
    }
    else {
      _1_else_clock_IfBlock1 = Condition31 | Condition32;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        FromLS_To_NewMode = FS_Level_And_Mode_Types_Pkg;
      }
      else /* ck_anon_activ */ if (Condition37) {
        FromLS_To_NewMode = SR_Level_And_Mode_Types_Pkg;
      }
      else {
        else_clock_IfBlock1 = Condition15 | Condition73;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          FromLS_To_NewMode = OS_Level_And_Mode_Types_Pkg;
        }
        else /* ck_anon_activ */ if (Condition21) {
          FromLS_To_NewMode = UN_Level_And_Mode_Types_Pkg;
        }
        else /* ck_anon_activ */ if (Condition59) {
          FromLS_To_NewMode = RV_Level_And_Mode_Types_Pkg;
        }
        else {
          FromLS_To_NewMode = previousMode_Loc;
        }
      }
    }
  }
  return FromLS_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_LS_PriorityManagement.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

