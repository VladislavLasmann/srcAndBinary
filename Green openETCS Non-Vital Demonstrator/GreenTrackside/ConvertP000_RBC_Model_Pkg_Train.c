/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP000_RBC_Model_Pkg_Train.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000 */
void ConvertP000_RBC_Model_Pkg_Train(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::newP000 */ P000_TM_TrainToTrack *newP000,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::oldP000 */ PT0_PositionReport_T_Packet_Tra *oldP000)
{
  (*oldP000).valid = (*newP000).valid;
  (*oldP000).packet0.qscale = (*newP000).q_scale;
  (*oldP000).packet0.dirlrbg = (*newP000).q_dirlrbg;
  (*oldP000).packet0.dlrbg = (*newP000).q_dlrbg;
  (*oldP000).packet0.length = (*newP000).q_length;
  (*oldP000).packet0.dirtrain = (*newP000).q_dirtrain;
  (*oldP000).packet0.mode = (*newP000).m_mode;
  (*oldP000).packet0.level = (*newP000).m_level;
  (*oldP000).packet0.NID_PACKET = /* 1 */
    CAST_NID_PACKET_to_int_TM_conve((*newP000).nid_packet);
  (*oldP000).packet0.L_PACKET = /* 1 */
    CAST_L_PACKET_to_int_TM_convers((*newP000).l_packet);
  (*oldP000).packet0.NID_LRBG = /* 1 */
    CAST_NID_LRBG_to_int_TM_convers((*newP000).nid_lrbg);
  (*oldP000).packet0.D_LRBG = /* 1 */
    CAST_D_LRBG_to_int_TM_conversio((*newP000).d_lrbg);
  (*oldP000).packet0.L_DOUBTOVER = /* 1 */
    CAST_L_DOUBTOVER_to_int_TM_conv((*newP000).l_doubtover);
  (*oldP000).packet0.L_DOUBTUNDER = /* 1 */
    CAST_L_DOUBTUNDER_to_int_TM_con((*newP000).l_doubtunder);
  (*oldP000).packet0.L_TRAININT = /* 1 */
    CAST_L_TRAININT_to_int_TM_conve((*newP000).l_trainint);
  (*oldP000).packet0.V_TRAIN = /* 1 */
    CAST_V_TRAIN_to_int_TM_conversi((*newP000).v_train);
  (*oldP000).packet0.NID_NTC = /* 1 */
    CAST_NID_NTC_to_int_TM_conversi((*newP000).nid_ntc);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP000_RBC_Model_Pkg_Train.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */
