/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _MRSP_to_DMI_TA_Export_H_
#define _MRSP_to_DMI_TA_Export_H_

#include "kcg_types.h"
#include "MRSP_reduction_TA_Export.h"
#include "MRSP_limit_to_EOA_TA_Export.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_Export::MRSP_to_DMI */
extern void MRSP_to_DMI_TA_Export(
  /* TA_Export::MRSP_to_DMI::EoA */ L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::MRSP_to_DMI::MRSP_in */ MRSP_Profile_t_TrackAtlasTypes *MRSP_in,
  /* TA_Export::MRSP_to_DMI::MRSP_to_DMI */ MRSP_Profile_t_TrackAtlasTypes *MRSP_to_DMI);

#endif /* _MRSP_to_DMI_TA_Export_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MRSP_to_DMI_TA_Export.h
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

