/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */
void insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::insert */kcg_bool insert,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::overrun */kcg_bool *overrun)
{
  static positionedBG_T_TrainPosition_Types_Pck tmp2;
  static positionedBGs_T_TrainPosition_Types_Pck tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L12 */
  static array__131293 _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L15 */
  static array__129125 _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L16 */
  static kcg_int _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L34 */
  static kcg_bool _L34;
  
  if ((0 <= indexOfBG) & (indexOfBG < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp2,
      &(*BGs_in)[indexOfBG]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp2,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  tmp = /* 1 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp2,
      BG);
  *overrun = !tmp & (*BGs_in)[40].valid;
  _L34 = insert & (indexOfBG >= 0) & (indexOfBG <
      cMaxNoOfStoredBGs_TrainPosition_Types_Pck) & (*BG).valid & !*overrun;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L12[0],
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if (tmp) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp1, BGs_in);
  }
  else {
    kcg_copy_array__131293(&tmp1[0], &_L12);
    kcg_copy_array__137060(&tmp1[1], (array__137060 *) &(*BGs_in)[0]);
  }
  if (_L34) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        indexOfBG,
        BG,
        &(*BGs_in)[i],
        &tmp1[i],
        &tmp,
        &_L15[i]);
      _L16 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L16 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L16; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L15[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  if (_L34) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, BGs_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

