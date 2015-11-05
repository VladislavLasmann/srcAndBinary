/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteElement_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::deleteElement */
void deleteElement_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::deleteElement::indexMAPwi */ kcg_int indexMAPwi,
  /* manage_TextMessages_Pkg::deleteElement::fromStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* manage_TextMessages_Pkg::deleteElement::inMessageID */ DMI_TextMessage_ID_T_DMI_Types_Pkg inMessageID,
  /* manage_TextMessages_Pkg::deleteElement::continue */ kcg_bool *_1_continue,
  /* manage_TextMessages_Pkg::deleteElement::toStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *toStore)
{
  /* manage_TextMessages_Pkg::deleteElement::deleteIt */
  static kcg_bool deleteIt;
  
  deleteIt = (*fromStore).valid & ((*fromStore).dmi_textMessageID ==
      inMessageID);
  /* ck_deleteIt */ if (deleteIt) {
    *_1_continue = kcg_false;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      toStore,
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
        &cFreeTestStatusElement_DMI_Types_Pkg);
  }
  else {
    *_1_continue = kcg_true;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(toStore, fromStore);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteElement_manage_TextMessages_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

