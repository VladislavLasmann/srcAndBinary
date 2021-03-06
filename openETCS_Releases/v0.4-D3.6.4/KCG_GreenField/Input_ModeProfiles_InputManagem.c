/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_ModeProfiles_InputManagem.h"

/* InputManagement::Input_ModeProfiles */
void Input_ModeProfiles_InputManagem(
  /* InputManagement::Input_ModeProfiles::P_80_One_Iter */ P80_ModeProfile_T_Packet_Types_ *P_80_One_Iter,
  /* InputManagement::Input_ModeProfiles::referenceLocation */ L_internal_Type_Obu_BasicTypes_ referenceLocation,
  /* InputManagement::Input_ModeProfiles::Mode_Profile_On_Borad */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Borad)
{
  (*Mode_Profile_On_Borad).Distance = referenceLocation +
    (*P_80_One_Iter).d_mamode;
  (*Mode_Profile_On_Borad).Speed = (*P_80_One_Iter).v_mamode;
  (*Mode_Profile_On_Borad).Length = (*P_80_One_Iter).l_mamode;
  (*Mode_Profile_On_Borad).Length_Ack = (*P_80_One_Iter).l_ackmamode;
  /* ck_Loc_MO_Profile_Available */ if ((*P_80_One_Iter).valid) {
    switch ((*P_80_One_Iter).m_mamode) {
      case M_MAMODE_On_Sight :
        (*Mode_Profile_On_Borad).Mode = Profile_OS_Level_And_Mode_Types;
        break;
      case M_MAMODE_Shunting :
        (*Mode_Profile_On_Borad).Mode = Profile_SH_Level_And_Mode_Types;
        break;
      case M_MAMODE_Limited_Supervision :
        (*Mode_Profile_On_Borad).Mode = Profile_LS_Level_And_Mode_Types;
        break;
      
    }
  }
  else {
    (*Mode_Profile_On_Borad).Mode = No_Profile_Level_And_Mode_Types;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_ModeProfiles_InputManagem.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

