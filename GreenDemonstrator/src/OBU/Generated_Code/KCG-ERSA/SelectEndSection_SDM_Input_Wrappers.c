/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectEndSection_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SelectEndSection */
void SelectEndSection_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SelectEndSection::I */ L_internal_Type_Obu_BasicTypes_Pkg I,
  /* SDM_Input_Wrappers::SelectEndSection::section */ MovementAuthoritySection_t_TrackAtlasTypes *section,
  /* SDM_Input_Wrappers::SelectEndSection::go_on */ kcg_bool *go_on,
  /* SDM_Input_Wrappers::SelectEndSection::eoa */ L_internal_Type_Obu_BasicTypes_Pkg *eoa)
{
  /* SDM_Input_Wrappers::SelectEndSection::_L11 */ kcg_bool _L11;
  
  _L11 = (*section).valid & (*section).q_endsection;
  /* 1 */ if (_L11) {
    *eoa = (*section).l_section;
  }
  else {
    *eoa = I;
  }
  *go_on = !_L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectEndSection_SDM_Input_Wrappers.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

