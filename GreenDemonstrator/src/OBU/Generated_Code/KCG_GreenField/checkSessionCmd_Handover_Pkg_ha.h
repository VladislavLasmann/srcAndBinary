/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _checkSessionCmd_Handover_Pkg_h
#define _checkSessionCmd_Handover_Pkg_h

#include "kcg_types.h"
#include "Read_P042_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd */
extern void checkSessionCmd_Handover_Pkg_ha(
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::p42_sessionCmd_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_in,
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::currentMoRCStatus */ morcStatus_T_RCM_Session_Types_ *currentMoRCStatus,
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::p42_sessionCmd_out */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_out);

#endif /* _checkSessionCmd_Handover_Pkg_h */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkSessionCmd_Handover_Pkg_ha.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

