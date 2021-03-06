/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getTIUStatusFromData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::getTIUStatusFromData */
void getTIUStatusFromData_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::inTIUActualData */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *inTIUActualData,
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::outStatus */ TIU_trainStatus_T_TIU_Types_Pkg *outStatus)
{
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::isA */
  static kcg_bool isA;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::isB */
  static kcg_bool isB;
  
  isA = (*inTIUActualData).train_status.m_cab_st ==
    desk_A_is_open_TIU_Types_Pkg;
  isB = (*inTIUActualData).train_status.m_cab_st ==
    desk_B_is_open_TIU_Types_Pkg;
  /* 1 */ if (isA) {
    (*outStatus).ownCab = CabA_TIU_Types_Pkg;
  }
  else /* 2 */ if (isB) {
    (*outStatus).ownCab = CabB_TIU_Types_Pkg;
  }
  else {
    (*outStatus).ownCab = CabUndefined_TIU_Types_Pkg;
  }
  (*outStatus).activeCab = (*outStatus).ownCab;
  (*outStatus).valid = (*inTIUActualData).train_status.valid;
  (*outStatus).deskOpen = ((*inTIUActualData).train_status.m_cab_st ==
      both_desks_are_open_TIU_Types_Pkg) | isA | isB;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getTIUStatusFromData_input_from_TIU_API_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

