/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackInit_InfraLib.h"

/* InfraLib::TrackInit */
void TrackInit_InfraLib(
  /* InfraLib::TrackInit::TrainPosIn */kcg_real TrainPosIn,
  /* InfraLib::TrackInit::InitialOffset */kcg_int InitialOffset,
  /* InfraLib::TrackInit::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  (*SectionData_out).TrainPosRaw.TrainPos_in = TrainPosIn;
  (*SectionData_out).TrainPosRaw.OffsetTotal = InitialOffset;
  (*SectionData_out).TrainPosRaw.TrainPosCalibrated = 0.0;
  kcg_copy_CompressedBaliseMessage_TM(
    &(*SectionData_out).BG_Message,
    (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackInit_InfraLib.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

