/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculate_MRSP1_TA_MRSP.h"

/* TA_MRSP::Calculate_MRSP1 */
void Calculate_MRSP1_TA_MRSP(
  /* TA_MRSP::Calculate_MRSP1::SSP_matrix_in */SSP_matrix_t_TA_MRSP *SSP_matrix_in,
  /* TA_MRSP::Calculate_MRSP1::MRSP */MRSP_Profile_t_TrackAtlasTypes *MRSP)
{
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    MRSP,
    (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Calculate_MRSP1_TA_MRSP.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

