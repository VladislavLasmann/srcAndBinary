/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompareSectionTimer_TA_MA_Reque.h"

/* TA_MA_Request::CompareSectionTimer */
T_internal_Type_Obu_BasicTypes_ CompareSectionTimer_TA_MA_Reque(
  /* TA_MA_Request::CompareSectionTimer::timer */ T_internal_Type_Obu_BasicTypes_ timer,
  /* TA_MA_Request::CompareSectionTimer::ma_section */ _22_MovementAuthoritySection_t_ *ma_section)
{
  /* TA_MA_Request::CompareSectionTimer::smallestTimer */
  static T_internal_Type_Obu_BasicTypes_ smallestTimer;
  
  /* 1 */ if (!((*ma_section).valid & (*ma_section).q_sectiontimer) | (timer <=
      (*ma_section).t_sectiontimer)) {
    smallestTimer = timer;
  }
  else {
    smallestTimer = (*ma_section).t_sectiontimer;
  }
  return smallestTimer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CompareSectionTimer_TA_MA_Reque.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

