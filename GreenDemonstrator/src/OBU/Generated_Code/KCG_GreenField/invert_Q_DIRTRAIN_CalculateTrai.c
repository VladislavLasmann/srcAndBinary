/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "invert_Q_DIRTRAIN_CalculateTrai.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN */
Q_DIRTRAIN invert_Q_DIRTRAIN_CalculateTrai(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::in */ Q_DIRTRAIN in)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::out */
  static Q_DIRTRAIN out;
  
  switch (in) {
    case Q_DIRTRAIN_Reverse :
      out = Q_DIRTRAIN_Nominal;
      break;
    case Q_DIRTRAIN_Nominal :
      out = Q_DIRTRAIN_Reverse;
      break;
    case Q_DIRTRAIN_Unknown :
      out = Q_DIRTRAIN_Unknown;
      break;
    
  }
  return out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** invert_Q_DIRTRAIN_CalculateTrai.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

