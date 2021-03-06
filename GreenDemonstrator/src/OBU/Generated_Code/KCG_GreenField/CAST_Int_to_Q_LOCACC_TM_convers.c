/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LOCACC_TM_convers.h"

/* TM_conversions::CAST_Int_to_Q_LOCACC */
Q_LOCACC CAST_Int_to_Q_LOCACC_TM_convers(
  /* TM_conversions::CAST_Int_to_Q_LOCACC::q_locacc_int */ kcg_int q_locacc_int)
{
  /* TM_conversions::CAST_Int_to_Q_LOCACC::q_locacc */
  static Q_LOCACC q_locacc;
  
  q_locacc = q_locacc_int;
  return q_locacc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LOCACC_TM_convers.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

