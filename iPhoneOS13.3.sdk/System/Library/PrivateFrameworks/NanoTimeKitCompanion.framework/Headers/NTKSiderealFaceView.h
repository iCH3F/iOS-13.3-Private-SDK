//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceView.h>

#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>
#import <NanoTimeKitCompanion/NTKSiderealDataSourceDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CALayer, CAShapeLayer, NSCalendar, NSDateFormatter, NSTimer, NTKFaceViewTapControl, NTKSiderealAuxiliaryDialLabels, NTKSiderealDataSource, NTKSiderealDialBackgroundView, NTKSiderealTimeView, NTKWhistlerAnalogFaceViewComplicationFactory, UILabel, UIView;

@interface NTKSiderealFaceView : NTKFaceView <NTKTimeView, NTKSiderealDataSourceDelegate, CLKMonochromeFilterProvider>
{
    long long _previousDataMode;
    NSCalendar *_calendar;
    NTKWhistlerAnalogFaceViewComplicationFactory *_faceViewComplicationFactory;
    BOOL _isHandlingHardwareEvents;
    NSTimer *_wheelDelayTimer;
    NSTimer *_buttonPressTimer;
    NTKSiderealDataSource *_dataSource;
    NSNumber _clockTimerToken;
    double _currentSolarDayProgress;
    double _interactionProgress;
    double _lastTestedWaypointProgress;
    NTKSiderealDialBackgroundView *_dialBackgroundView;
    NTKSiderealAuxiliaryDialLabels *_auxiliaryDialLabels;
    NTKSiderealTimeView *_siderealTimeView;
    UILabel *_offsetLabel;
    UIView *_darkeningContainerView;
    CAShapeLayer *_dialDarkeningLayer;
    CALayer *_timeViewDarkeningLayer;
    NSDateFormatter *_interactiveModeDateFormatter;
    NTKFaceViewTapControl *_viewModeTapButton;
    NSUInteger _viewMode;
    NSUInteger _previousViewMode;
    NSUInteger _transitionState;
    double _breathScaleModifier;
    double _rubberBandScaleModifier;
    BOOL _disableRendering;
}

+ (long long)uiSensitivity;
// - (void).cxx_destruct;
- (void)performScrollTestNamed:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (id)_innerComplicationColors;
- (id)_outerComplicationColors;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (CGPath )newTimeViewPathForDarkeningView;
- (double)_idealizedSolarDayProgress;
- (double)_solarDayProgressForCurrentTime;
- (CGAffineTransform)_timeViewScaleTransform;
- (double)_distanceBetweenAngleA:(double)arg1 angleB:(double)arg2;
- (id)waypointBetweenPreviousOffset:(double)arg1 currentOffset:(double)arg2;
- (id)closestWaypointForSolarDayProgress:(double)arg1 range:(double)arg2;
- (CGImage )newImageRefFromView:(id)arg1;
- (CGImage )newImageRefFromSolarContainerView:(id)arg1 withHeight:(double)arg2;
- (id)_nightRingImageFromSolarContainerView:(id)arg1;
- (id)_nightDiscImageFromSolarContainerView:(id)arg1;
- (id)_nightGnomonImageFromSolarContainerView:(id)arg1;
- (id)_dayDiscImageFromSolarContainerView:(id)arg1;
- (id)_dayDiskBloomImageFromSolarContainerView:(id)arg1;
- (id)_dayGnomonImageFromSolarContainerView:(id)arg1;
- (id)_gnomonImage;
- (id)_newGnomonLayer;
- (id)_waypointViewImageRef;
- (id)_dialViewImageRef;
- (id)_customEditOptionContainerViewForSlot:(id)arg1;
- (id)_pickerMaskForSlot:(id)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(NSUInteger)arg1 slot:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (CGRect)_timeViewKeylineFrameForEditing;
- (CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (NSUInteger)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (NSUInteger)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (void)tearDownDarkeningView;
- (void)setupDarkeningViewIfNeeded;
- (double)_timeDarkeningViewAlphaForEditMode:(long long)arg1;
- (double)_darkeningViewAlphaForEditMode:(long long)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (double)_timeViewAlphaForEditMode:(long long)arg1;
- (double)_dialAlphaForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_applyScaleToTimeView;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_tearDownOffsetLabel;
- (void)_loadOffsetLabelIfNeeded;
- (void)_tearDownAuxiliaryDialLabels;
- (void)_loadAuxiliaryDialLabelsIfNeeded;
- (void)_updateTimeLabelsWithReferenceDate:(id)arg1 overrideDate:(id)arg2;
- (void)_updateWaypointLabel;
- (void)_updateSolarOrbitGlowPath:(double)arg1;
- (void)_refreshGlowPathState;
- (void)_updateStatusBarVisibility;
- (void)_cleanupAfterSettingViewMode:(NSUInteger)arg1;
- (void)_interpolateFromViewMode:(NSUInteger)arg1 toViewMode:(NSUInteger)arg2 progress:(double)arg3;
- (void)_prepareForSettingViewMode:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_setViewMode:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_setViewMode:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_handleViewModeTapGesture:(id)arg1;
- (BOOL)_canEnterInteractiveMode;
- (void)_updateTimeViewOrbitWithSolarDayProgress:(double)arg1;
- (BOOL)_isDayAnimationRunning;
- (void)_animateSolarDayFromProgress:(double)arg1 toProgress:(double)arg2 minDuration:(double)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_forceSolarDayUpdate;
- (void)_setSolarDayProgress:(double)arg1;
- (void)dataSourceDidUpdateSolarData;
- (void)_updateLocale;
- (void)_asyncUpdateLocale;
- (void)_timeZoneChanged:(id)arg1;
- (void)_significantTimeChanged;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_timeDidUpdate:(id)arg1;
- (void)_stopClockUpdates;
- (void)_startClockUpdates;
- (id)_faceDisplayTime;
- (void)_resetInteractionProgress;
- (void)_updateTimeScrubbingContent:(double)arg1;
- (void)_buttonPressTimerFired;
- (void)_wheelDelayTimerFired;
- (BOOL)_handlePhysicalButton:(NSUInteger)arg1 event:(NSUInteger)arg2;
- (BOOL)_wheelChangedWithEvent:(id)arg1;
- (void)_disableCrown;
- (void)_enableCrown;
- (void)_updateFramerate;
- (void)screenWillTurnOn;
- (void)screenDidTurnOff;
@property(nonatomic, getter=isFrozen) BOOL frozen;
- (void)_applyDataMode;
- (void)setDataMode:(long long)arg1;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2;
- (void)_enumerateQuadViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_supportsTimeScrubbing;
- (BOOL)_wantsMinorDetents;
- (void)handleScreenBlanked;
- (void)_becameInactiveFace;
- (void)_becameActiveFace;
- (void)layoutSubviews;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_unloadTimeView;
- (void)_loadTimeView;
- (void)_unloadDial;
- (void)_loadDial;
- (void)_unloadUI;
- (void)_loadUI;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end

