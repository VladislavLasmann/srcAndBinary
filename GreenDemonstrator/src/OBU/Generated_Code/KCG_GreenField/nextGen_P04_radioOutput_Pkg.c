/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P04_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P04 */
void nextGen_P04_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_P04::inP4 */ PT4_ErrorReporting_T_Packet_Tra *inP4,
  /* radioOutput_Pkg::nextGen_P04::outP4 */ P004_TM_TrainToTrack *outP4)
{
  (*outP4).valid = (*inP4).valid;
  (*outP4).nid_packet = cp004_ErrorReporting_ids;
  (*outP4).l_packet = 0;
  (*outP4).m_error = (*inP4).m_error;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_P04_radioOutput_Pkg.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

