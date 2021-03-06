/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompareSectionTimer_TA_MA_Request.h"

/* TA_MA_Request::CompareSectionTimer */
T_internal_Type_Obu_BasicTypes_Pkg CompareSectionTimer_TA_MA_Request(
  /* TA_MA_Request::CompareSectionTimer::timer */ T_internal_Type_Obu_BasicTypes_Pkg timer,
  /* TA_MA_Request::CompareSectionTimer::ma_section */ MovementAuthoritySection_t_TrackAtlasTypes *ma_section)
{
  /* TA_MA_Request::CompareSectionTimer::smallestTimer */
  static T_internal_Type_Obu_BasicTypes_Pkg smallestTimer;
  
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
** CompareSectionTimer_TA_MA_Request.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

