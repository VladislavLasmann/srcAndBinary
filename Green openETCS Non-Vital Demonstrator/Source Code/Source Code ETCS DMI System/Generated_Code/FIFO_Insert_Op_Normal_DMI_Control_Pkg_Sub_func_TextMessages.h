/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-30T15:42:57
*************************************************************$ */
#ifndef _FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array__31757 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::queue */ queue;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::hh_array */ hh_array;
  array_real_10 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::mm_array */ mm_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  array__31757 /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::queue */ rem_queue;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1[10];
  /* ----------------- no clocks of observable data ------------------ */
} outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal */
extern void FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::Pos */kcg_int Pos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::Messaggio */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::new_mm */kcg_real new_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::new_hh */kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::isFull */kcg_bool isFull,
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-30T15:42:57
*************************************************************$ */

