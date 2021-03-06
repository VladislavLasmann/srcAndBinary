/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSSPSectionsAbsolute_Loop_TA_Lib_internal.h"

/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop */
void MoveSSPSectionsAbsolute_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::i */ kcg_int i,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::ProfileIn */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::ProfileOut */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileOut)
{
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop */
  static StaticSpeedSection_t_TrackAtlasTypes tmp1;
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop */
  static kcg_int tmp;
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L6 */
  static StaticSpeedSection_t_TrackAtlasTypes _L6;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L6, &(*ProfileIn)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L6,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  IfBlock1_clock = msg_LRBG & !msg_prvLRBG;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = !msg_LRBG & msg_prvLRBG;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(ProfileOut, ProfileIn);
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&tmp1, &_L6);
  tmp1.d_static_LRBG = 0;
  /* 1 */ if (_L6.valid) {
    /* ck_IfBlock1 */ if (IfBlock1_clock) {
      tmp = pos_LRBG;
    }
    else /* ck_anon_activ */ if (else_clock_IfBlock1) {
      tmp = pos_prvLRBG;
    }
    else {
      tmp = 0;
    }
  }
  else {
    tmp = 0;
  }
  tmp1.d_static_abs = _L6.d_static_abs + tmp;
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&(*ProfileOut)[i], &tmp1);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveSSPSectionsAbsolute_Loop_TA_Lib_internal.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

