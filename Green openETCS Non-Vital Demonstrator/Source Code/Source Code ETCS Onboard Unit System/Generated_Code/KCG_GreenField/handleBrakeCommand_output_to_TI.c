/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handleBrakeCommand_output_to_TI.h"

#ifndef KCG_USER_DEFINED_INIT
void handleBrakeCommand_init_output_(outC_handleBrakeCommand_output_ *outC)
{
  outC->init = kcg_true;
  outC->rem_in_brake_command.valid = kcg_true;
  outC->rem_in_brake_command.m_servicebrake_cm =
    brake_signal_command_not_define;
  outC->rem_in_brake_command.m_emergencybrake_cm =
    brake_signal_command_not_define;
  outC->out_brake_command.valid = kcg_true;
  outC->out_brake_command.m_servicebrake_cm = brake_signal_command_not_define;
  outC->out_brake_command.m_emergencybrake_cm = brake_signal_command_not_define;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handleBrakeCommand_reset_output(outC_handleBrakeCommand_output_ *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* output_to_TIU_API_Pkg::handleBrakeCommand */
void handleBrakeCommand_output_to_TI(
  /* output_to_TIU_API_Pkg::handleBrakeCommand::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  outC_handleBrakeCommand_output_ *outC)
{
  /* output_to_TIU_API_Pkg::handleBrakeCommand */
  static Brake_command_T_TIU_Types_Pkg tmp;
  
  /* last_init_ck_in_brake_command */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_Brake_command_T_TIU_Ty(
      &tmp,
      (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Ty(&tmp, &outC->rem_in_brake_command);
  }
  /* 1 */ if ((*in_brake_command).valid & !kcg_comp_Brake_command_T_TIU_Ty(
      in_brake_command,
      &tmp)) {
    kcg_copy_Brake_command_T_TIU_Ty(&outC->out_brake_command, in_brake_command);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Ty(
      &outC->out_brake_command,
      (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
  }
  kcg_copy_Brake_command_T_TIU_Ty(
    &outC->rem_in_brake_command,
    in_brake_command);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** handleBrakeCommand_output_to_TI.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

