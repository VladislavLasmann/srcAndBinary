/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompareSectionTimer_MA_Request.h"

/* MA_Request::CompareSectionTimer */
T_internal_Type_Obu_BasicTypes_Pkg CompareSectionTimer_MA_Request(
  /* MA_Request::CompareSectionTimer::timer */T_internal_Type_Obu_BasicTypes_Pkg timer,
  /* MA_Request::CompareSectionTimer::ma_section */MovementAuthoritySection_t_TrackAtlasTypes *ma_section)
{
  /* MA_Request::CompareSectionTimer::smallestTimer */
  static T_internal_Type_Obu_BasicTypes_Pkg smallestTimer;
  
  if (!((*ma_section).valid & (*ma_section).q_sectiontimer) | (timer <=
      (*ma_section).t_sectiontimer)) {
    smallestTimer = timer;
  }
  else {
    smallestTimer = (*ma_section).t_sectiontimer;
  }
  return smallestTimer;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CompareSectionTimer_MA_Request.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

