/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */
#include "_1_EVC.h"

/* EVC::EVC_reset */
kcg_bool EVC_reset;
/* EVC::API_Odometry */
odometry_T_Obu_BasicTypes_Pkg API_Odometry;
/* EVC::API_SystemTime */
T_internal_Type_Obu_BasicTypes_Pkg API_SystemTime;
/* EVC::API_fromTrack */
API_TrackSideInput_T_API_Msg_Pkg API_fromTrack;
/* EVC::API_fromDMI */
DMI_to_EVC_Message_int_T_API_DMI_Pkg API_fromDMI;
/* EVC::API_fromTIU */
TIU_Input_msg_API_TIU_Pkg API_fromTIU;
/* EVC::API_mobileHWStatus */
mobileHWStatus_Type_MoRC_Pck API_mobileHWStatus;
/* EVC::API_persistentData */
ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg API_persistentData;

/* $**************** KCG Version 6.4 (build i21) ****************
** _1_EVC_inputs.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

