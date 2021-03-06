/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculate_MRSP1_TA_MRSP_new.h"

/* TA_MRSP_new::Calculate_MRSP1 */
void Calculate_MRSP1_TA_MRSP_new(
  /* TA_MRSP_new::Calculate_MRSP1::SSP_matrix_in */ SSP_matrix_t_TA_MRSP_new *SSP_matrix_in,
  /* TA_MRSP_new::Calculate_MRSP1::MRSP */ MRSP_Profile_t_TrackAtlasTypes *MRSP)
{
  kcg_copy_MRSP_Profile_t_TrackAt(
    MRSP,
    (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP_ne);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Calculate_MRSP1_TA_MRSP_new.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

