/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004 */
void ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::newP004 */P004_TM_TrainToTrack *newP004,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::oldP004 */PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *oldP004)
{
  (*oldP004).valid = (*newP004).valid;
  (*oldP004).m_error = (*newP004).m_error;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-10T18:22:12
*************************************************************$ */

