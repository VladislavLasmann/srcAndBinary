/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Interdistance_InfraLib.h"

/* InfraLib::Balise_Interdistance */
kcg_real Balise_Interdistance_InfraLib(
  /* InfraLib::Balise_Interdistance::pig0 */kcg_int pig0,
  /* InfraLib::Balise_Interdistance::n_pig */kcg_int n_pig)
{
  /* InfraLib::Balise_Interdistance::_L11 */ kcg_int _L11;
  /* InfraLib::Balise_Interdistance::distance_BB */ kcg_real distance_BB;
  
  _L11 = n_pig - pig0;
  if (0 <= _L11) {
    distance_BB = (kcg_real) _L11 * Distance_Balises_in_BG_InfraLib;
  }
  else {
    distance_BB = (kcg_real) - _L11 * Distance_Balises_in_BG_InfraLib;
  }
  return distance_BB;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Interdistance_InfraLib.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

