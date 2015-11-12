/*********************************************************
 **
 ** File  SDY1_DMI_DMI.h.cosimu
 **
 ** Specification File:  R:\Repositories\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 **
 ** Automatically generated by SCADE Display CG Simu
 ** Version 6.6 i23
 **
 ** Date of generation: 2015-11-12T10:32:14
 ** Command line: ScadeDisplayCGSimu.exe -outdir R:\Repositories\modeling\model\Scade\System\OBU_PreIntegrations\Testbench_Integration\TCP_DMI_Standalone\SDY1_DMI\Code -prefix SDY1_DMI_ R:\Repositories\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx R:\Repositories\modeling\model\Scade\System\DMI_Control\SCADE Display\texture_table.stt R:\Repositories\modeling\model\Scade\System\DMI_Control\SCADE Display\font_table.sft R:\Repositories\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sct R:\Repositories\modeling\model\Scade\System\DMI_Control\SCADE Display\line_width_table.swt R:\Repositories\modeling\model\Scade\System\DMI_Control\SCADE Display\line_stipple_table.sst
 *********************************************************/

#ifndef _SDY1_DMI_DMI_H_COSIMU
#define _SDY1_DMI_DMI_H_COSIMU

#include "sgl_types.h"
#include "kcg_assign.h"

/* Variables and Accessors */
#ifndef SDY1_DMI_DMI_G_TrainPosition
#define SDY1_DMI_DMI_G_TrainPosition(_C_) ((_C_)->TrainPosition)
#define SDY1_DMI_DMI_S_TrainPosition(_C_,_V_) (_C_)->TrainPosition = (_V_)
#endif /* SDY1_DMI_DMI_G_TrainPosition */
#ifndef SDY1_DMI_DMI_G_DistanceToTarget
#define SDY1_DMI_DMI_G_DistanceToTarget(_C_) ((_C_)->DistanceToTarget)
#define SDY1_DMI_DMI_S_DistanceToTarget(_C_,_V_) (_C_)->DistanceToTarget = (_V_)
#endif /* SDY1_DMI_DMI_G_DistanceToTarget */
#ifndef SDY1_DMI_DMI_G_DistanceToTargetVisibilityDigital
#define SDY1_DMI_DMI_G_DistanceToTargetVisibilityDigital(_C_) ((_C_)->DistanceToTargetVisibilityDigital)
#define SDY1_DMI_DMI_S_DistanceToTargetVisibilityDigital(_C_,_V_) (_C_)->DistanceToTargetVisibilityDigital = (_V_)
#endif /* SDY1_DMI_DMI_G_DistanceToTargetVisibilityDigital */
#ifndef SDY1_DMI_DMI_G_TrainSpeed
#define SDY1_DMI_DMI_G_TrainSpeed(_C_) ((_C_)->TrainSpeed)
#define SDY1_DMI_DMI_S_TrainSpeed(_C_,_V_) (_C_)->TrainSpeed = (_V_)
#endif /* SDY1_DMI_DMI_G_TrainSpeed */
#ifndef SDY1_DMI_DMI_G_PointerColor
#define SDY1_DMI_DMI_G_PointerColor(_C_) ((_C_)->PointerColor)
#define SDY1_DMI_DMI_S_PointerColor(_C_,_V_) (_C_)->PointerColor = (_V_)
#endif /* SDY1_DMI_DMI_G_PointerColor */
#ifndef SDY1_DMI_DMI_G_SpeedDigitOne
#define SDY1_DMI_DMI_G_SpeedDigitOne(_C_) ((_C_)->SpeedDigitOne)
#define SDY1_DMI_DMI_S_SpeedDigitOne(_C_,_V_) (_C_)->SpeedDigitOne = (_V_)
#endif /* SDY1_DMI_DMI_G_SpeedDigitOne */
#ifndef SDY1_DMI_DMI_G_SpeedDigitTwo
#define SDY1_DMI_DMI_G_SpeedDigitTwo(_C_) ((_C_)->SpeedDigitTwo)
#define SDY1_DMI_DMI_S_SpeedDigitTwo(_C_,_V_) (_C_)->SpeedDigitTwo = (_V_)
#endif /* SDY1_DMI_DMI_G_SpeedDigitTwo */
#ifndef SDY1_DMI_DMI_G_SpeedDigitThree
#define SDY1_DMI_DMI_G_SpeedDigitThree(_C_) ((_C_)->SpeedDigitThree)
#define SDY1_DMI_DMI_S_SpeedDigitThree(_C_,_V_) (_C_)->SpeedDigitThree = (_V_)
#endif /* SDY1_DMI_DMI_G_SpeedDigitThree */
#ifndef SDY1_DMI_DMI_G_Vperm
#define SDY1_DMI_DMI_G_Vperm(_C_) ((_C_)->Vperm)
#define SDY1_DMI_DMI_S_Vperm(_C_,_V_) (_C_)->Vperm = (_V_)
#endif /* SDY1_DMI_DMI_G_Vperm */
#ifndef SDY1_DMI_DMI_G_Vtarget
#define SDY1_DMI_DMI_G_Vtarget(_C_) ((_C_)->Vtarget)
#define SDY1_DMI_DMI_S_Vtarget(_C_,_V_) (_C_)->Vtarget = (_V_)
#endif /* SDY1_DMI_DMI_G_Vtarget */
#ifndef SDY1_DMI_DMI_G_Vrelease
#define SDY1_DMI_DMI_G_Vrelease(_C_) ((_C_)->Vrelease)
#define SDY1_DMI_DMI_S_Vrelease(_C_,_V_) (_C_)->Vrelease = (_V_)
#endif /* SDY1_DMI_DMI_G_Vrelease */
#ifndef SDY1_DMI_DMI_G_VpermColor
#define SDY1_DMI_DMI_G_VpermColor(_C_) ((_C_)->VpermColor)
#define SDY1_DMI_DMI_S_VpermColor(_C_,_V_) (_C_)->VpermColor = (_V_)
#endif /* SDY1_DMI_DMI_G_VpermColor */
#ifndef SDY1_DMI_DMI_G_VtargetColor
#define SDY1_DMI_DMI_G_VtargetColor(_C_) ((_C_)->VtargetColor)
#define SDY1_DMI_DMI_S_VtargetColor(_C_,_V_) (_C_)->VtargetColor = (_V_)
#endif /* SDY1_DMI_DMI_G_VtargetColor */
#ifndef SDY1_DMI_DMI_G_VreleaseColor
#define SDY1_DMI_DMI_G_VreleaseColor(_C_) ((_C_)->VreleaseColor)
#define SDY1_DMI_DMI_S_VreleaseColor(_C_,_V_) (_C_)->VreleaseColor = (_V_)
#endif /* SDY1_DMI_DMI_G_VreleaseColor */
#ifndef SDY1_DMI_DMI_G_ModeSymbol
#define SDY1_DMI_DMI_G_ModeSymbol(_C_) ((_C_)->ModeSymbol)
#define SDY1_DMI_DMI_S_ModeSymbol(_C_,_V_) (_C_)->ModeSymbol = (_V_)
#endif /* SDY1_DMI_DMI_G_ModeSymbol */
#ifndef SDY1_DMI_DMI_G_LevelSymbol
#define SDY1_DMI_DMI_G_LevelSymbol(_C_) ((_C_)->LevelSymbol)
#define SDY1_DMI_DMI_S_LevelSymbol(_C_,_V_) (_C_)->LevelSymbol = (_V_)
#endif /* SDY1_DMI_DMI_G_LevelSymbol */
#ifndef SDY1_DMI_DMI_G_StatusSymbolBrake
#define SDY1_DMI_DMI_G_StatusSymbolBrake(_C_) ((_C_)->StatusSymbolBrake)
#define SDY1_DMI_DMI_S_StatusSymbolBrake(_C_,_V_) (_C_)->StatusSymbolBrake = (_V_)
#endif /* SDY1_DMI_DMI_G_StatusSymbolBrake */
#ifndef SDY1_DMI_DMI_G_LevelSymbolAnncouncement
#define SDY1_DMI_DMI_G_LevelSymbolAnncouncement(_C_) ((_C_)->LevelSymbolAnncouncement)
#define SDY1_DMI_DMI_S_LevelSymbolAnncouncement(_C_,_V_) (_C_)->LevelSymbolAnncouncement = (_V_)
#endif /* SDY1_DMI_DMI_G_LevelSymbolAnncouncement */
#ifndef SDY1_DMI_DMI_G_InterpolatedDistanceToTarget
#define SDY1_DMI_DMI_G_InterpolatedDistanceToTarget(_C_) ((_C_)->InterpolatedDistanceToTarget)
#define SDY1_DMI_DMI_S_InterpolatedDistanceToTarget(_C_,_V_) (_C_)->InterpolatedDistanceToTarget = (_V_)
#endif /* SDY1_DMI_DMI_G_InterpolatedDistanceToTarget */
#ifndef SDY1_DMI_DMI_G_DriverID_Display
#define SDY1_DMI_DMI_G_DriverID_Display(_C_) ((_C_)->DriverID_Display)
#define SDY1_DMI_DMI_S_DriverID_Display(_C_,_V_) kcg_assign((_C_)->DriverID_Display, (_V_), sizeof(SGLint32 [9UL]))
#endif /* SDY1_DMI_DMI_G_DriverID_Display */
#ifndef SDY1_DMI_DMI_G_buttonEnabler
#define SDY1_DMI_DMI_G_buttonEnabler(_C_) ((_C_)->buttonEnabler)
#define SDY1_DMI_DMI_S_buttonEnabler(_C_,_V_) kcg_assign((_C_)->buttonEnabler, (_V_), sizeof(SGLint32 [30UL]))
#endif /* SDY1_DMI_DMI_G_buttonEnabler */
#ifndef SDY1_DMI_DMI_G_window_mask
#define SDY1_DMI_DMI_G_window_mask(_C_) ((_C_)->window_mask)
#define SDY1_DMI_DMI_S_window_mask(_C_,_V_) kcg_assign((_C_)->window_mask, (_V_), sizeof(SGLbool [15UL]))
#endif /* SDY1_DMI_DMI_G_window_mask */
#ifndef SDY1_DMI_DMI_G_TrainRN_Display
#define SDY1_DMI_DMI_G_TrainRN_Display(_C_) ((_C_)->TrainRN_Display)
#define SDY1_DMI_DMI_S_TrainRN_Display(_C_,_V_) kcg_assign((_C_)->TrainRN_Display, (_V_), sizeof(SGLint32 [9UL]))
#endif /* SDY1_DMI_DMI_G_TrainRN_Display */
#ifndef SDY1_DMI_DMI_G_closeButtonEnabler
#define SDY1_DMI_DMI_G_closeButtonEnabler(_C_) ((_C_)->closeButtonEnabler)
#define SDY1_DMI_DMI_S_closeButtonEnabler(_C_,_V_) (_C_)->closeButtonEnabler = (_V_)
#endif /* SDY1_DMI_DMI_G_closeButtonEnabler */
#ifndef SDY1_DMI_DMI_G_LevelSymbolVisibility
#define SDY1_DMI_DMI_G_LevelSymbolVisibility(_C_) ((_C_)->LevelSymbolVisibility)
#define SDY1_DMI_DMI_S_LevelSymbolVisibility(_C_,_V_) (_C_)->LevelSymbolVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_LevelSymbolVisibility */
#ifndef SDY1_DMI_DMI_G_StatusSymbolVisibility
#define SDY1_DMI_DMI_G_StatusSymbolVisibility(_C_) ((_C_)->StatusSymbolVisibility)
#define SDY1_DMI_DMI_S_StatusSymbolVisibility(_C_,_V_) (_C_)->StatusSymbolVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_StatusSymbolVisibility */
#ifndef SDY1_DMI_DMI_G_DistanceToTargetBarVisibility
#define SDY1_DMI_DMI_G_DistanceToTargetBarVisibility(_C_) ((_C_)->DistanceToTargetBarVisibility)
#define SDY1_DMI_DMI_S_DistanceToTargetBarVisibility(_C_,_V_) (_C_)->DistanceToTargetBarVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_DistanceToTargetBarVisibility */
#ifndef SDY1_DMI_DMI_G_RBC_status_symbol
#define SDY1_DMI_DMI_G_RBC_status_symbol(_C_) ((_C_)->RBC_status_symbol)
#define SDY1_DMI_DMI_S_RBC_status_symbol(_C_,_V_) (_C_)->RBC_status_symbol = (_V_)
#endif /* SDY1_DMI_DMI_G_RBC_status_symbol */
#ifndef SDY1_DMI_DMI_G_TrainDataWindowVisibility
#define SDY1_DMI_DMI_G_TrainDataWindowVisibility(_C_) ((_C_)->TrainDataWindowVisibility)
#define SDY1_DMI_DMI_S_TrainDataWindowVisibility(_C_,_V_) (_C_)->TrainDataWindowVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_TrainDataWindowVisibility */
#ifndef SDY1_DMI_DMI_G_ModeSymbolVisibility
#define SDY1_DMI_DMI_G_ModeSymbolVisibility(_C_) ((_C_)->ModeSymbolVisibility)
#define SDY1_DMI_DMI_S_ModeSymbolVisibility(_C_,_V_) (_C_)->ModeSymbolVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_ModeSymbolVisibility */
#ifndef SDY1_DMI_DMI_G_textMsgLine1
#define SDY1_DMI_DMI_G_textMsgLine1(_C_) ((_C_)->textMsgLine1)
#define SDY1_DMI_DMI_S_textMsgLine1(_C_,_V_) kcg_assign((_C_)->textMsgLine1, (_V_), sizeof(SGLuint8 [45UL]))
#endif /* SDY1_DMI_DMI_G_textMsgLine1 */
#ifndef SDY1_DMI_DMI_G_traindataValidWinVisibility
#define SDY1_DMI_DMI_G_traindataValidWinVisibility(_C_) ((_C_)->traindataValidWinVisibility)
#define SDY1_DMI_DMI_S_traindataValidWinVisibility(_C_,_V_) (_C_)->traindataValidWinVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_traindataValidWinVisibility */
#ifndef SDY1_DMI_DMI_G_trainLenght
#define SDY1_DMI_DMI_G_trainLenght(_C_) ((_C_)->trainLenght)
#define SDY1_DMI_DMI_S_trainLenght(_C_,_V_) (_C_)->trainLenght = (_V_)
#endif /* SDY1_DMI_DMI_G_trainLenght */
#ifndef SDY1_DMI_DMI_G_trainBrakePerc
#define SDY1_DMI_DMI_G_trainBrakePerc(_C_) ((_C_)->trainBrakePerc)
#define SDY1_DMI_DMI_S_trainBrakePerc(_C_,_V_) (_C_)->trainBrakePerc = (_V_)
#endif /* SDY1_DMI_DMI_G_trainBrakePerc */
#ifndef SDY1_DMI_DMI_G_trainMaxSpeed
#define SDY1_DMI_DMI_G_trainMaxSpeed(_C_) ((_C_)->trainMaxSpeed)
#define SDY1_DMI_DMI_S_trainMaxSpeed(_C_,_V_) (_C_)->trainMaxSpeed = (_V_)
#endif /* SDY1_DMI_DMI_G_trainMaxSpeed */
#ifndef SDY1_DMI_DMI_G_trainAxleLoad
#define SDY1_DMI_DMI_G_trainAxleLoad(_C_) ((_C_)->trainAxleLoad)
#define SDY1_DMI_DMI_S_trainAxleLoad(_C_,_V_) (_C_)->trainAxleLoad = (_V_)
#endif /* SDY1_DMI_DMI_G_trainAxleLoad */
#ifndef SDY1_DMI_DMI_G_indexTrainCategory
#define SDY1_DMI_DMI_G_indexTrainCategory(_C_) ((_C_)->indexTrainCategory)
#define SDY1_DMI_DMI_S_indexTrainCategory(_C_,_V_) (_C_)->indexTrainCategory = (_V_)
#endif /* SDY1_DMI_DMI_G_indexTrainCategory */
#ifndef SDY1_DMI_DMI_G_trainAirtightIndex
#define SDY1_DMI_DMI_G_trainAirtightIndex(_C_) ((_C_)->trainAirtightIndex)
#define SDY1_DMI_DMI_S_trainAirtightIndex(_C_,_V_) (_C_)->trainAirtightIndex = (_V_)
#endif /* SDY1_DMI_DMI_G_trainAirtightIndex */
#ifndef SDY1_DMI_DMI_G_trainLoadingGaugeIndex
#define SDY1_DMI_DMI_G_trainLoadingGaugeIndex(_C_) ((_C_)->trainLoadingGaugeIndex)
#define SDY1_DMI_DMI_S_trainLoadingGaugeIndex(_C_,_V_) (_C_)->trainLoadingGaugeIndex = (_V_)
#endif /* SDY1_DMI_DMI_G_trainLoadingGaugeIndex */
#ifndef SDY1_DMI_DMI_G_traindataYesNoIndex
#define SDY1_DMI_DMI_G_traindataYesNoIndex(_C_) ((_C_)->traindataYesNoIndex)
#define SDY1_DMI_DMI_S_traindataYesNoIndex(_C_,_V_) (_C_)->traindataYesNoIndex = (_V_)
#endif /* SDY1_DMI_DMI_G_traindataYesNoIndex */
#ifndef SDY1_DMI_DMI_G_ArrayOfMsgIndex
#define SDY1_DMI_DMI_G_ArrayOfMsgIndex(_C_) ((_C_)->ArrayOfMsgIndex)
#define SDY1_DMI_DMI_S_ArrayOfMsgIndex(_C_,_V_) kcg_assign((_C_)->ArrayOfMsgIndex, (_V_), sizeof(SGLint32 [5UL]))
#endif /* SDY1_DMI_DMI_G_ArrayOfMsgIndex */
#ifndef SDY1_DMI_DMI_G_textMsgEnable
#define SDY1_DMI_DMI_G_textMsgEnable(_C_) ((_C_)->textMsgEnable)
#define SDY1_DMI_DMI_S_textMsgEnable(_C_,_V_) (_C_)->textMsgEnable = (_V_)
#endif /* SDY1_DMI_DMI_G_textMsgEnable */
#ifndef SDY1_DMI_DMI_G_yellowBorderMsg
#define SDY1_DMI_DMI_G_yellowBorderMsg(_C_) ((_C_)->yellowBorderMsg)
#define SDY1_DMI_DMI_S_yellowBorderMsg(_C_,_V_) (_C_)->yellowBorderMsg = (_V_)
#endif /* SDY1_DMI_DMI_G_yellowBorderMsg */
#ifndef SDY1_DMI_DMI_G_closeButtonIndex
#define SDY1_DMI_DMI_G_closeButtonIndex(_C_) ((_C_)->closeButtonIndex)
#define SDY1_DMI_DMI_S_closeButtonIndex(_C_,_V_) (_C_)->closeButtonIndex = (_V_)
#endif /* SDY1_DMI_DMI_G_closeButtonIndex */
#ifndef SDY1_DMI_DMI_G_openDesk
#define SDY1_DMI_DMI_G_openDesk(_C_) ((_C_)->openDesk)
#define SDY1_DMI_DMI_S_openDesk(_C_,_V_) (_C_)->openDesk = (_V_)
#endif /* SDY1_DMI_DMI_G_openDesk */
#ifndef SDY1_DMI_DMI_G_ModeSymbolAnnouncement
#define SDY1_DMI_DMI_G_ModeSymbolAnnouncement(_C_) ((_C_)->ModeSymbolAnnouncement)
#define SDY1_DMI_DMI_S_ModeSymbolAnnouncement(_C_,_V_) (_C_)->ModeSymbolAnnouncement = (_V_)
#endif /* SDY1_DMI_DMI_G_ModeSymbolAnnouncement */
#ifndef SDY1_DMI_DMI_G_iconGroupIndex
#define SDY1_DMI_DMI_G_iconGroupIndex(_C_) ((_C_)->iconGroupIndex)
#define SDY1_DMI_DMI_S_iconGroupIndex(_C_,_V_) (_C_)->iconGroupIndex = (_V_)
#endif /* SDY1_DMI_DMI_G_iconGroupIndex */
#ifndef SDY1_DMI_DMI_G_yellowBorderBrakeSymbol
#define SDY1_DMI_DMI_G_yellowBorderBrakeSymbol(_C_) ((_C_)->yellowBorderBrakeSymbol)
#define SDY1_DMI_DMI_S_yellowBorderBrakeSymbol(_C_,_V_) (_C_)->yellowBorderBrakeSymbol = (_V_)
#endif /* SDY1_DMI_DMI_G_yellowBorderBrakeSymbol */
#ifndef SDY1_DMI_DMI_G_yellowBorderC1Area
#define SDY1_DMI_DMI_G_yellowBorderC1Area(_C_) ((_C_)->yellowBorderC1Area)
#define SDY1_DMI_DMI_S_yellowBorderC1Area(_C_,_V_) (_C_)->yellowBorderC1Area = (_V_)
#endif /* SDY1_DMI_DMI_G_yellowBorderC1Area */
#ifndef SDY1_DMI_DMI_G_translateHourGlass
#define SDY1_DMI_DMI_G_translateHourGlass(_C_) ((_C_)->translateHourGlass)
#define SDY1_DMI_DMI_S_translateHourGlass(_C_,_V_) (_C_)->translateHourGlass = (_V_)
#endif /* SDY1_DMI_DMI_G_translateHourGlass */
#ifndef SDY1_DMI_DMI_G_hourGlassVisibility
#define SDY1_DMI_DMI_G_hourGlassVisibility(_C_) ((_C_)->hourGlassVisibility)
#define SDY1_DMI_DMI_S_hourGlassVisibility(_C_,_V_) (_C_)->hourGlassVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_hourGlassVisibility */
#ifndef SDY1_DMI_DMI_G_Vtarget_permVisible
#define SDY1_DMI_DMI_G_Vtarget_permVisible(_C_) ((_C_)->Vtarget_permVisible)
#define SDY1_DMI_DMI_S_Vtarget_permVisible(_C_,_V_) (_C_)->Vtarget_permVisible = (_V_)
#endif /* SDY1_DMI_DMI_G_Vtarget_permVisible */
#ifndef SDY1_DMI_DMI_G_Vtarget_permColor
#define SDY1_DMI_DMI_G_Vtarget_permColor(_C_) ((_C_)->Vtarget_permColor)
#define SDY1_DMI_DMI_S_Vtarget_permColor(_C_,_V_) (_C_)->Vtarget_permColor = (_V_)
#endif /* SDY1_DMI_DMI_G_Vtarget_permColor */
#ifndef SDY1_DMI_DMI_G_Vinterv
#define SDY1_DMI_DMI_G_Vinterv(_C_) ((_C_)->Vinterv)
#define SDY1_DMI_DMI_S_Vinterv(_C_,_V_) (_C_)->Vinterv = (_V_)
#endif /* SDY1_DMI_DMI_G_Vinterv */
#ifndef SDY1_DMI_DMI_G_VintervColor
#define SDY1_DMI_DMI_G_VintervColor(_C_) ((_C_)->VintervColor)
#define SDY1_DMI_DMI_S_VintervColor(_C_,_V_) (_C_)->VintervColor = (_V_)
#endif /* SDY1_DMI_DMI_G_VintervColor */
#ifndef SDY1_DMI_DMI_G_VintervVisible
#define SDY1_DMI_DMI_G_VintervVisible(_C_) ((_C_)->VintervVisible)
#define SDY1_DMI_DMI_S_VintervVisible(_C_,_V_) (_C_)->VintervVisible = (_V_)
#endif /* SDY1_DMI_DMI_G_VintervVisible */
#ifndef SDY1_DMI_DMI_G_levelMenuVisibility
#define SDY1_DMI_DMI_G_levelMenuVisibility(_C_) ((_C_)->levelMenuVisibility)
#define SDY1_DMI_DMI_S_levelMenuVisibility(_C_,_V_) (_C_)->levelMenuVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_levelMenuVisibility */
#ifndef SDY1_DMI_DMI_G_ArrayLevelIndex
#define SDY1_DMI_DMI_G_ArrayLevelIndex(_C_) ((_C_)->ArrayLevelIndex)
#define SDY1_DMI_DMI_S_ArrayLevelIndex(_C_,_V_) kcg_assign((_C_)->ArrayLevelIndex, (_V_), sizeof(SGLint32 [12UL]))
#endif /* SDY1_DMI_DMI_G_ArrayLevelIndex */
#ifndef SDY1_DMI_DMI_G_LevelIndex
#define SDY1_DMI_DMI_G_LevelIndex(_C_) ((_C_)->LevelIndex)
#define SDY1_DMI_DMI_S_LevelIndex(_C_,_V_) (_C_)->LevelIndex = (_V_)
#endif /* SDY1_DMI_DMI_G_LevelIndex */
#ifndef SDY1_DMI_DMI_G_ListMsg
#define SDY1_DMI_DMI_G_ListMsg(_C_) ((_C_)->ListMsg)
#define SDY1_DMI_DMI_S_ListMsg(_C_,_V_) kcg_assign((_C_)->ListMsg, (_V_), sizeof(SGLuint8 [5UL][50UL]))
#endif /* SDY1_DMI_DMI_G_ListMsg */
#ifndef SDY1_DMI_DMI_G_SingleMsgAckRequiredVisibility
#define SDY1_DMI_DMI_G_SingleMsgAckRequiredVisibility(_C_) ((_C_)->SingleMsgAckRequiredVisibility)
#define SDY1_DMI_DMI_S_SingleMsgAckRequiredVisibility(_C_,_V_) (_C_)->SingleMsgAckRequiredVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_SingleMsgAckRequiredVisibility */
#ifndef SDY1_DMI_DMI_G_IndexFixedMsg
#define SDY1_DMI_DMI_G_IndexFixedMsg(_C_) ((_C_)->IndexFixedMsg)
#define SDY1_DMI_DMI_S_IndexFixedMsg(_C_,_V_) kcg_assign((_C_)->IndexFixedMsg, (_V_), sizeof(SGLint32 [5UL]))
#endif /* SDY1_DMI_DMI_G_IndexFixedMsg */
#ifndef SDY1_DMI_DMI_G_PlainText
#define SDY1_DMI_DMI_G_PlainText(_C_) ((_C_)->PlainText)
#define SDY1_DMI_DMI_S_PlainText(_C_,_V_) kcg_assign((_C_)->PlainText, (_V_), sizeof(SGLuint8 [5UL][30UL]))
#endif /* SDY1_DMI_DMI_G_PlainText */
#ifndef SDY1_DMI_DMI_G_Array_hh
#define SDY1_DMI_DMI_G_Array_hh(_C_) ((_C_)->Array_hh)
#define SDY1_DMI_DMI_S_Array_hh(_C_,_V_) kcg_assign((_C_)->Array_hh, (_V_), sizeof(SGLfloat [5UL]))
#endif /* SDY1_DMI_DMI_G_Array_hh */
#ifndef SDY1_DMI_DMI_G_Array_mm
#define SDY1_DMI_DMI_G_Array_mm(_C_) ((_C_)->Array_mm)
#define SDY1_DMI_DMI_S_Array_mm(_C_,_V_) kcg_assign((_C_)->Array_mm, (_V_), sizeof(SGLfloat [5UL]))
#endif /* SDY1_DMI_DMI_G_Array_mm */
#ifndef SDY1_DMI_DMI_G_isAuxiliarMsg
#define SDY1_DMI_DMI_G_isAuxiliarMsg(_C_) ((_C_)->isAuxiliarMsg)
#define SDY1_DMI_DMI_S_isAuxiliarMsg(_C_,_V_) (_C_)->isAuxiliarMsg = (_V_)
#endif /* SDY1_DMI_DMI_G_isAuxiliarMsg */
#ifndef SDY1_DMI_DMI_G_D_Scale
#define SDY1_DMI_DMI_G_D_Scale(_C_) ((_C_)->D_Scale)
#define SDY1_DMI_DMI_S_D_Scale(_C_,_V_) kcg_assign((_C_)->D_Scale, (_V_), sizeof(SGLfloat [9UL]))
#endif /* SDY1_DMI_DMI_G_D_Scale */
#ifndef SDY1_DMI_DMI_G_D_GradientEndInterpolated
#define SDY1_DMI_DMI_G_D_GradientEndInterpolated(_C_) ((_C_)->D_GradientEndInterpolated)
#define SDY1_DMI_DMI_S_D_GradientEndInterpolated(_C_,_V_) kcg_assign((_C_)->D_GradientEndInterpolated, (_V_), sizeof(SGLfloat [12UL]))
#endif /* SDY1_DMI_DMI_G_D_GradientEndInterpolated */
#ifndef SDY1_DMI_DMI_G_D_GradientsStartInterpolated
#define SDY1_DMI_DMI_G_D_GradientsStartInterpolated(_C_) ((_C_)->D_GradientsStartInterpolated)
#define SDY1_DMI_DMI_S_D_GradientsStartInterpolated(_C_,_V_) kcg_assign((_C_)->D_GradientsStartInterpolated, (_V_), sizeof(SGLfloat [12UL]))
#endif /* SDY1_DMI_DMI_G_D_GradientsStartInterpolated */
#ifndef SDY1_DMI_DMI_G_D_PASP_BreakPointPositions
#define SDY1_DMI_DMI_G_D_PASP_BreakPointPositions(_C_) ((_C_)->D_PASP_BreakPointPositions)
#define SDY1_DMI_DMI_S_D_PASP_BreakPointPositions(_C_,_V_) kcg_assign((_C_)->D_PASP_BreakPointPositions, (_V_), sizeof(SGLfloat [4UL]))
#endif /* SDY1_DMI_DMI_G_D_PASP_BreakPointPositions */
#ifndef SDY1_DMI_DMI_G_D_PASP_FilteredSpeeds
#define SDY1_DMI_DMI_G_D_PASP_FilteredSpeeds(_C_) ((_C_)->D_PASP_FilteredSpeeds)
#define SDY1_DMI_DMI_S_D_PASP_FilteredSpeeds(_C_,_V_) kcg_assign((_C_)->D_PASP_FilteredSpeeds, (_V_), sizeof(SGLfloat [4UL]))
#endif /* SDY1_DMI_DMI_G_D_PASP_FilteredSpeeds */
#ifndef SDY1_DMI_DMI_G_D_SPID_SpeedChangeIndex
#define SDY1_DMI_DMI_G_D_SPID_SpeedChangeIndex(_C_) ((_C_)->D_SPID_SpeedChangeIndex)
#define SDY1_DMI_DMI_S_D_SPID_SpeedChangeIndex(_C_,_V_) kcg_assign((_C_)->D_SPID_SpeedChangeIndex, (_V_), sizeof(SGLint32 [10UL]))
#endif /* SDY1_DMI_DMI_G_D_SPID_SpeedChangeIndex */
#ifndef SDY1_DMI_DMI_G_D_SPDI_speedChangePosition
#define SDY1_DMI_DMI_G_D_SPDI_speedChangePosition(_C_) ((_C_)->D_SPDI_speedChangePosition)
#define SDY1_DMI_DMI_S_D_SPDI_speedChangePosition(_C_,_V_) kcg_assign((_C_)->D_SPDI_speedChangePosition, (_V_), sizeof(SGLfloat [10UL]))
#endif /* SDY1_DMI_DMI_G_D_SPDI_speedChangePosition */
#ifndef SDY1_DMI_DMI_G_D_SPDI_SpeedChangeVisible
#define SDY1_DMI_DMI_G_D_SPDI_SpeedChangeVisible(_C_) ((_C_)->D_SPDI_SpeedChangeVisible)
#define SDY1_DMI_DMI_S_D_SPDI_SpeedChangeVisible(_C_,_V_) kcg_assign((_C_)->D_SPDI_SpeedChangeVisible, (_V_), sizeof(SGLbool [10UL]))
#endif /* SDY1_DMI_DMI_G_D_SPDI_SpeedChangeVisible */
#ifndef SDY1_DMI_DMI_G_D_GradientsVisible
#define SDY1_DMI_DMI_G_D_GradientsVisible(_C_) ((_C_)->D_GradientsVisible)
#define SDY1_DMI_DMI_S_D_GradientsVisible(_C_,_V_) kcg_assign((_C_)->D_GradientsVisible, (_V_), sizeof(SGLbool [12UL]))
#endif /* SDY1_DMI_DMI_G_D_GradientsVisible */
#ifndef SDY1_DMI_DMI_G_PlanningAreaVisibility
#define SDY1_DMI_DMI_G_PlanningAreaVisibility(_C_) ((_C_)->PlanningAreaVisibility)
#define SDY1_DMI_DMI_S_PlanningAreaVisibility(_C_,_V_) (_C_)->PlanningAreaVisibility = (_V_)
#endif /* SDY1_DMI_DMI_G_PlanningAreaVisibility */
#ifndef SDY1_DMI_DMI_G_D_GradientsValue
#define SDY1_DMI_DMI_G_D_GradientsValue(_C_) ((_C_)->D_GradientsValue)
#define SDY1_DMI_DMI_S_D_GradientsValue(_C_,_V_) kcg_assign((_C_)->D_GradientsValue, (_V_), sizeof(SGLfloat [12UL]))
#endif /* SDY1_DMI_DMI_G_D_GradientsValue */
#ifndef SDY1_DMI_DMI_G_D_GradientsEndInterpolated
#define SDY1_DMI_DMI_G_D_GradientsEndInterpolated(_C_) ((_C_)->D_GradientsEndInterpolated)
#define SDY1_DMI_DMI_S_D_GradientsEndInterpolated(_C_,_V_) kcg_assign((_C_)->D_GradientsEndInterpolated, (_V_), sizeof(SGLfloat [12UL]))
#endif /* SDY1_DMI_DMI_G_D_GradientsEndInterpolated */
#ifndef SDY1_DMI_DMI_G_D_PASP_IndicationMarkerPosition
#define SDY1_DMI_DMI_G_D_PASP_IndicationMarkerPosition(_C_) ((_C_)->D_PASP_IndicationMarkerPosition)
#define SDY1_DMI_DMI_S_D_PASP_IndicationMarkerPosition(_C_,_V_) kcg_assign((_C_)->D_PASP_IndicationMarkerPosition, (_V_), sizeof(SGLfloat [1UL]))
#endif /* SDY1_DMI_DMI_G_D_PASP_IndicationMarkerPosition */
#ifndef SDY1_DMI_DMI_G_OverA
#define SDY1_DMI_DMI_G_OverA(_C_) ((_C_)->OverA)
#define SDY1_DMI_DMI_S_OverA(_C_,_V_) (_C_)->OverA = (_V_)
#endif /* SDY1_DMI_DMI_G_OverA */
#ifndef SDY1_DMI_DMI_G_OverC2
#define SDY1_DMI_DMI_G_OverC2(_C_) ((_C_)->OverC2)
#define SDY1_DMI_DMI_S_OverC2(_C_,_V_) (_C_)->OverC2 = (_V_)
#endif /* SDY1_DMI_DMI_G_OverC2 */
#ifndef SDY1_DMI_DMI_G_OverC3
#define SDY1_DMI_DMI_G_OverC3(_C_) ((_C_)->OverC3)
#define SDY1_DMI_DMI_S_OverC3(_C_,_V_) (_C_)->OverC3 = (_V_)
#endif /* SDY1_DMI_DMI_G_OverC3 */
#ifndef SDY1_DMI_DMI_G_OverC4
#define SDY1_DMI_DMI_G_OverC4(_C_) ((_C_)->OverC4)
#define SDY1_DMI_DMI_S_OverC4(_C_,_V_) (_C_)->OverC4 = (_V_)
#endif /* SDY1_DMI_DMI_G_OverC4 */
#ifndef SDY1_DMI_DMI_G_MousePressed
#define SDY1_DMI_DMI_G_MousePressed(_C_) ((_C_)->MousePressed)
#define SDY1_DMI_DMI_S_MousePressed(_C_,_V_) (_C_)->MousePressed = (_V_)
#endif /* SDY1_DMI_DMI_G_MousePressed */
#ifndef SDY1_DMI_DMI_G_VisibleGradients
#define SDY1_DMI_DMI_G_VisibleGradients(_C_) ((_C_)->VisibleGradients)
#define SDY1_DMI_DMI_S_VisibleGradients(_C_,_V_) kcg_assign((_C_)->VisibleGradients, (_V_), sizeof(SGLbool [12UL]))
#endif /* SDY1_DMI_DMI_G_VisibleGradients */
#ifndef SDY1_DMI_DMI_G_keyarray
#define SDY1_DMI_DMI_G_keyarray(_C_) ((_C_)->keyarray)
#define SDY1_DMI_DMI_S_keyarray(_C_,_V_) kcg_assign((_C_)->keyarray, (_V_), sizeof(SGLbool [12UL]))
#endif /* SDY1_DMI_DMI_G_keyarray */
#ifndef SDY1_DMI_DMI_G_confirmTrainData
#define SDY1_DMI_DMI_G_confirmTrainData(_C_) ((_C_)->confirmTrainData)
#define SDY1_DMI_DMI_S_confirmTrainData(_C_,_V_) (_C_)->confirmTrainData = (_V_)
#endif /* SDY1_DMI_DMI_G_confirmTrainData */
#ifndef SDY1_DMI_DMI_G_openTrainData
#define SDY1_DMI_DMI_G_openTrainData(_C_) ((_C_)->openTrainData)
#define SDY1_DMI_DMI_S_openTrainData(_C_,_V_) (_C_)->openTrainData = (_V_)
#endif /* SDY1_DMI_DMI_G_openTrainData */
#ifndef SDY1_DMI_DMI_G_startRequest
#define SDY1_DMI_DMI_G_startRequest(_C_) ((_C_)->startRequest)
#define SDY1_DMI_DMI_S_startRequest(_C_,_V_) (_C_)->startRequest = (_V_)
#endif /* SDY1_DMI_DMI_G_startRequest */
#ifndef SDY1_DMI_DMI_G_traindataAck
#define SDY1_DMI_DMI_G_traindataAck(_C_) ((_C_)->traindataAck)
#define SDY1_DMI_DMI_S_traindataAck(_C_,_V_) (_C_)->traindataAck = (_V_)
#endif /* SDY1_DMI_DMI_G_traindataAck */
#ifndef SDY1_DMI_DMI_G_traindataYesAck
#define SDY1_DMI_DMI_G_traindataYesAck(_C_) ((_C_)->traindataYesAck)
#define SDY1_DMI_DMI_S_traindataYesAck(_C_,_V_) (_C_)->traindataYesAck = (_V_)
#endif /* SDY1_DMI_DMI_G_traindataYesAck */
#ifndef SDY1_DMI_DMI_G_traindataNoAck
#define SDY1_DMI_DMI_G_traindataNoAck(_C_) ((_C_)->traindataNoAck)
#define SDY1_DMI_DMI_S_traindataNoAck(_C_,_V_) (_C_)->traindataNoAck = (_V_)
#endif /* SDY1_DMI_DMI_G_traindataNoAck */
#ifndef SDY1_DMI_DMI_G_textMsgAck
#define SDY1_DMI_DMI_G_textMsgAck(_C_) ((_C_)->textMsgAck)
#define SDY1_DMI_DMI_S_textMsgAck(_C_,_V_) (_C_)->textMsgAck = (_V_)
#endif /* SDY1_DMI_DMI_G_textMsgAck */
#ifndef SDY1_DMI_DMI_G_openTrainRN
#define SDY1_DMI_DMI_G_openTrainRN(_C_) ((_C_)->openTrainRN)
#define SDY1_DMI_DMI_S_openTrainRN(_C_,_V_) (_C_)->openTrainRN = (_V_)
#endif /* SDY1_DMI_DMI_G_openTrainRN */
#ifndef SDY1_DMI_DMI_G_openDriverID
#define SDY1_DMI_DMI_G_openDriverID(_C_) ((_C_)->openDriverID)
#define SDY1_DMI_DMI_S_openDriverID(_C_,_V_) (_C_)->openDriverID = (_V_)
#endif /* SDY1_DMI_DMI_G_openDriverID */
#ifndef SDY1_DMI_DMI_G_closeButton
#define SDY1_DMI_DMI_G_closeButton(_C_) ((_C_)->closeButton)
#define SDY1_DMI_DMI_S_closeButton(_C_,_V_) (_C_)->closeButton = (_V_)
#endif /* SDY1_DMI_DMI_G_closeButton */
#ifndef SDY1_DMI_DMI_G_BrakeStatusSymbolAck
#define SDY1_DMI_DMI_G_BrakeStatusSymbolAck(_C_) ((_C_)->BrakeStatusSymbolAck)
#define SDY1_DMI_DMI_S_BrakeStatusSymbolAck(_C_,_V_) (_C_)->BrakeStatusSymbolAck = (_V_)
#endif /* SDY1_DMI_DMI_G_BrakeStatusSymbolAck */
#ifndef SDY1_DMI_DMI_G_C1AreaAck
#define SDY1_DMI_DMI_G_C1AreaAck(_C_) ((_C_)->C1AreaAck)
#define SDY1_DMI_DMI_S_C1AreaAck(_C_,_V_) (_C_)->C1AreaAck = (_V_)
#endif /* SDY1_DMI_DMI_G_C1AreaAck */
#ifndef SDY1_DMI_DMI_G_openLevelMenu
#define SDY1_DMI_DMI_G_openLevelMenu(_C_) ((_C_)->openLevelMenu)
#define SDY1_DMI_DMI_S_openLevelMenu(_C_,_V_) (_C_)->openLevelMenu = (_V_)
#endif /* SDY1_DMI_DMI_G_openLevelMenu */
#ifndef SDY1_DMI_DMI_G_InputFieldAck
#define SDY1_DMI_DMI_G_InputFieldAck(_C_) ((_C_)->InputFieldAck)
#define SDY1_DMI_DMI_S_InputFieldAck(_C_,_V_) (_C_)->InputFieldAck = (_V_)
#endif /* SDY1_DMI_DMI_G_InputFieldAck */
#ifndef SDY1_DMI_DMI_G_ButtonPressed
#define SDY1_DMI_DMI_G_ButtonPressed(_C_) ((_C_)->ButtonPressed)
#define SDY1_DMI_DMI_S_ButtonPressed(_C_,_V_) (_C_)->ButtonPressed = (_V_)
#endif /* SDY1_DMI_DMI_G_ButtonPressed */
#ifndef SDY1_DMI_DMI_G_OverD12
#define SDY1_DMI_DMI_G_OverD12(_C_) ((_C_)->OverD12)
#define SDY1_DMI_DMI_S_OverD12(_C_,_V_) (_C_)->OverD12 = (_V_)
#endif /* SDY1_DMI_DMI_G_OverD12 */
#ifndef SDY1_DMI_DMI_G_OverD9
#define SDY1_DMI_DMI_G_OverD9(_C_) ((_C_)->OverD9)
#define SDY1_DMI_DMI_S_OverD9(_C_,_V_) (_C_)->OverD9 = (_V_)
#endif /* SDY1_DMI_DMI_G_OverD9 */
#ifndef SDY1_DMI_DMI_G_OpenMainMenu
#define SDY1_DMI_DMI_G_OpenMainMenu(_C_) ((_C_)->OpenMainMenu)
#define SDY1_DMI_DMI_S_OpenMainMenu(_C_,_V_) (_C_)->OpenMainMenu = (_V_)
#endif /* SDY1_DMI_DMI_G_OpenMainMenu */
#ifndef SDY1_DMI_DMI_G_closeMainMenu
#define SDY1_DMI_DMI_G_closeMainMenu(_C_) ((_C_)->closeMainMenu)
#define SDY1_DMI_DMI_S_closeMainMenu(_C_,_V_) (_C_)->closeMainMenu = (_V_)
#endif /* SDY1_DMI_DMI_G_closeMainMenu */
#ifndef SDY1_DMI_DMI_G_hidePlanningArea
#define SDY1_DMI_DMI_G_hidePlanningArea(_C_) ((_C_)->hidePlanningArea)
#define SDY1_DMI_DMI_S_hidePlanningArea(_C_,_V_) (_C_)->hidePlanningArea = (_V_)
#endif /* SDY1_DMI_DMI_G_hidePlanningArea */
#ifndef SDY1_DMI_DMI_G_ShowPlanningArea
#define SDY1_DMI_DMI_G_ShowPlanningArea(_C_) ((_C_)->ShowPlanningArea)
#define SDY1_DMI_DMI_S_ShowPlanningArea(_C_,_V_) (_C_)->ShowPlanningArea = (_V_)
#endif /* SDY1_DMI_DMI_G_ShowPlanningArea */
#ifndef SDY1_DMI_DMI_G_openShunting
#define SDY1_DMI_DMI_G_openShunting(_C_) ((_C_)->openShunting)
#define SDY1_DMI_DMI_S_openShunting(_C_,_V_) (_C_)->openShunting = (_V_)
#endif /* SDY1_DMI_DMI_G_openShunting */
#ifndef SDY1_DMI_DMI_G_openNonLeading
#define SDY1_DMI_DMI_G_openNonLeading(_C_) ((_C_)->openNonLeading)
#define SDY1_DMI_DMI_S_openNonLeading(_C_,_V_) (_C_)->openNonLeading = (_V_)
#endif /* SDY1_DMI_DMI_G_openNonLeading */
#ifndef SDY1_DMI_DMI_G_isPressed
#define SDY1_DMI_DMI_G_isPressed(_C_) ((_C_)->isPressed)
#define SDY1_DMI_DMI_S_isPressed(_C_,_V_) (_C_)->isPressed = (_V_)
#endif /* SDY1_DMI_DMI_G_isPressed */

/* Context for object DMI */
typedef struct SDY1_DMI_typ_DMI
{
  /* declaration of variables */
  /* ---------------------------inputs--------------------------- */
  SGLfloat TrainPosition;
  SGLfloat DistanceToTarget;
  SGLbool DistanceToTargetVisibilityDigital;
  SGLfloat TrainSpeed;
  SGLint32 PointerColor;
  SGLfloat SpeedDigitOne;
  SGLfloat SpeedDigitTwo;
  SGLfloat SpeedDigitThree;
  SGLfloat Vperm;
  SGLfloat Vtarget;
  SGLfloat Vrelease;
  SGLint32 VpermColor;
  SGLint32 VtargetColor;
  SGLint32 VreleaseColor;
  SGLint32 ModeSymbol;
  SGLint32 LevelSymbol;
  SGLbool StatusSymbolBrake;
  SGLint32 LevelSymbolAnncouncement;
  SGLfloat InterpolatedDistanceToTarget;
  SGLint32 DriverID_Display[9UL];
  SGLint32 buttonEnabler[30UL];
  SGLbool window_mask[15UL];
  SGLint32 TrainRN_Display[9UL];
  SGLint32 closeButtonEnabler;
  SGLbool LevelSymbolVisibility;
  SGLbool StatusSymbolVisibility;
  SGLbool DistanceToTargetBarVisibility;
  SGLint32 RBC_status_symbol;
  SGLbool TrainDataWindowVisibility;
  SGLbool ModeSymbolVisibility;
  SGLuint8 textMsgLine1[45UL];
  SGLbool traindataValidWinVisibility;
  SGLfloat trainLenght;
  SGLfloat trainBrakePerc;
  SGLfloat trainMaxSpeed;
  SGLint32 trainAxleLoad;
  SGLint32 indexTrainCategory;
  SGLint32 trainAirtightIndex;
  SGLint32 trainLoadingGaugeIndex;
  SGLint32 traindataYesNoIndex;
  SGLint32 ArrayOfMsgIndex[5UL];
  SGLbool textMsgEnable;
  SGLbool yellowBorderMsg;
  SGLint32 closeButtonIndex;
  SGLbool openDesk;
  SGLint32 ModeSymbolAnnouncement;
  SGLint32 iconGroupIndex;
  SGLbool yellowBorderBrakeSymbol;
  SGLbool yellowBorderC1Area;
  SGLfloat translateHourGlass;
  SGLbool hourGlassVisibility;
  SGLbool Vtarget_permVisible;
  SGLint32 Vtarget_permColor;
  SGLfloat Vinterv;
  SGLint32 VintervColor;
  SGLbool VintervVisible;
  SGLbool levelMenuVisibility;
  SGLint32 ArrayLevelIndex[12UL];
  SGLint32 LevelIndex;
  SGLuint8 ListMsg[5UL][50UL];
  SGLbool SingleMsgAckRequiredVisibility;
  SGLint32 IndexFixedMsg[5UL];
  SGLuint8 PlainText[5UL][30UL];
  SGLfloat Array_hh[5UL];
  SGLfloat Array_mm[5UL];
  SGLbool isAuxiliarMsg;
  SGLfloat D_Scale[9UL];
  SGLfloat D_GradientEndInterpolated[12UL];
  SGLfloat D_GradientsStartInterpolated[12UL];
  SGLfloat D_PASP_BreakPointPositions[4UL];
  SGLfloat D_PASP_FilteredSpeeds[4UL];
  SGLint32 D_SPID_SpeedChangeIndex[10UL];
  SGLfloat D_SPDI_speedChangePosition[10UL];
  SGLbool D_SPDI_SpeedChangeVisible[10UL];
  SGLbool D_GradientsVisible[12UL];
  SGLbool PlanningAreaVisibility;
  SGLfloat D_GradientsValue[12UL];
  SGLfloat D_GradientsEndInterpolated[12UL];
  SGLfloat D_PASP_IndicationMarkerPosition[1UL];
  /* ---------------------------outputs--------------------------- */
  SGLbool OverA;
  SGLbool OverC2;
  SGLbool OverC3;
  SGLbool OverC4;
  SGLbool MousePressed;
  SGLbool VisibleGradients[12UL];
  SGLbool keyarray[12UL];
  SGLbool confirmTrainData;
  SGLbool openTrainData;
  SGLbool startRequest;
  SGLbool traindataAck;
  SGLbool traindataYesAck;
  SGLbool traindataNoAck;
  SGLbool textMsgAck;
  SGLbool openTrainRN;
  SGLbool openDriverID;
  SGLbool closeButton;
  SGLbool BrakeStatusSymbolAck;
  SGLbool C1AreaAck;
  SGLbool openLevelMenu;
  SGLbool InputFieldAck;
  SGLbool ButtonPressed;
  SGLbool OverD12;
  SGLbool OverD9;
  SGLbool OpenMainMenu;
  SGLbool closeMainMenu;
  SGLbool hidePlanningArea;
  SGLbool ShowPlanningArea;
  SGLbool openShunting;
  SGLbool openNonLeading;
  /* ---------------------------locals--------------------------- */
  SGLbool isPressed;
} SDY1_DMI_typ_DMI;

#endif /* _SDY1_DMI_DMI_H_COSIMU */

/*********************************************************
 ** End of file
 ** End of generation: 2015-11-12T10:32:14
 *********************************************************/

