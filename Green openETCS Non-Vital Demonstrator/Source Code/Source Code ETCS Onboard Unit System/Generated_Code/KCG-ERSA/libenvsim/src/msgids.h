//     Project: openETCS libenvsim
//      Module: msgids.h
// Description: Defines the IDs for messages sent between components via TCP/IP
//
// History:
// - 27.10.15, J. Kastner: initial version (extracted from tcp.h)

#ifndef LIBENVSIM_MSGIDS_H
#define LIBENVSIM_MSGIDS_H

/***** COMMON MESSAGES *****/
// Not actually used by a message;
// can be passed to es_tcp_read to indicate that the next pending message should
// be returned, regardless of its message ID.
#define TCPMSG_ANY        -1

// indicates a successful completion of a command (if required)
#define TCPMSG_OK          1
// indicates an error message
#define TCPMSG_ERROR       2
// can be used for flow/execution control
#define TCPMSG_STOP        3
// can be used for flow/execution control
#define TCPMSG_RUN         4


/***** EVC -> DMI *****/
// SCADE data type: API_DMI_Pkg::EVC_to_DMI_Message_int_T
#define TCPMSG_EVC2DMI_BUS 1000
// SCADE data type: API_DMI_Pkg::EVC_to_DMI_Message_T
#define TCPMSG_EVC2DMI     1001
// SCADE data type: API_TIU_Pkg::TIU_Input_msg
#define TCPMSG_TIU2DMI     1002


/***** DMI -> EVC *****/
// SCADE data type: API_DMI_Pkg::DMI_to_EVC_Message_int_T
#define TCPMSG_DMI2EVC_BUS 2000
// SCADE data type: API_DMI_Pkg::DMI_to_EVC_Message_T
#define TCPMSG_DMI2EVC     2001


/***** EVC/EnvSim -> GUI *****/
// SCADE data type: EnvSim::EVC_to_GUI
#define TCPMSG_EVC2GUI     1003
// Response to TCPMSG_TB_GETCONF (current config of EnvSim)
#define TCPMSG_ES_CONF     3000
// Event: triggered balise message (body: TM::CompressedBaliseMessage)
#define TCPMSG_ES_EVT_BMSG 3001
// Event: triggered radio message (body: TM::CompressedRadioMessage)
#define TCPMSG_ES_EVT_RMSG 3002
// Event: radio message from train
#define TCPMSG_ES_EVT_TMSG 3003
// Event: SDM target (body: TargetManagement_types::Target_T)
#define TCPMSG_ES_EVT_TGT  3004


/***** GUI -> EVC/EnvSim *****/
// SCADE data type: EnvSim::GUI_to_EVC
#define TCPMSG_GUI2EVC     2003
// request current config from EnvSim (no message body)
#define TCPMSG_ES_GETCONF  4000
// request to load and execute the specified TCL script (body: file path)
#define TCPMSG_ES_RUNTCL   4001
// request to send events (track messages, train messages), or not.
// body: 0/1 (single byte)
#define TCPMSG_ES_SENDEVTS 4002

#endif //LIBENVSIM_MSGIDS_H
