//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVGesture.h>

@class ASVRubberBand, MISSING_TYPE, NSSet;
@protocol ASVTouch, ASVTwoFingerGestureDelegate;

@interface ASVTwoFingerGesture : ASVGesture
{
    BOOL _panThresholdPassed;
    BOOL _rotationThresholdPassed;
    BOOL _levitationThresholdPassed;
    BOOL _scaleThresholdPassed;
    float _initialFingerAngle;
    float _lastFingerAngle;
    float _initialDistanceBetweenFingers;
    float _baseDistanceBetweenFingers;
    float _assetBaseScale;
    float _lastAssetScale;
    float _minScale;
    float _maxScale;
    float _scaleOvershoot;
    float _scaleFactor;
    id <ASVTouch> _firstTouch;
    id <ASVTouch> _secondTouch;
    MISSING_TYPE *_initialFirstTouchLocation;
    MISSING_TYPE *_initialSecondTouchLocation;
    MISSING_TYPE *_initialMidPoint;
    NSSet *_snapScalesSet;
    id <ASVTwoFingerGestureDelegate> _delegate;
    ASVRubberBand *_rubberBand;
}

@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) float scaleOvershoot; // @synthesize scaleOvershoot=_scaleOvershoot;
@property(retain, nonatomic) ASVRubberBand *rubberBand; // @synthesize rubberBand=_rubberBand;
@property(nonatomic) __weak id <ASVTwoFingerGestureDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSSet *snapScalesSet; // @synthesize snapScalesSet=_snapScalesSet;
@property(nonatomic) float maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic) float minScale; // @synthesize minScale=_minScale;
@property(nonatomic) float lastAssetScale; // @synthesize lastAssetScale=_lastAssetScale;
@property(nonatomic) float assetBaseScale; // @synthesize assetBaseScale=_assetBaseScale;
@property(nonatomic) float baseDistanceBetweenFingers; // @synthesize baseDistanceBetweenFingers=_baseDistanceBetweenFingers;
@property(nonatomic) float initialDistanceBetweenFingers; // @synthesize initialDistanceBetweenFingers=_initialDistanceBetweenFingers;
@property(nonatomic) BOOL scaleThresholdPassed; // @synthesize scaleThresholdPassed=_scaleThresholdPassed;
@property(nonatomic) float lastFingerAngle; // @synthesize lastFingerAngle=_lastFingerAngle;
@property(nonatomic) float initialFingerAngle; // @synthesize initialFingerAngle=_initialFingerAngle;
@property(nonatomic) BOOL levitationThresholdPassed; // @synthesize levitationThresholdPassed=_levitationThresholdPassed;
@property(nonatomic) BOOL rotationThresholdPassed; // @synthesize rotationThresholdPassed=_rotationThresholdPassed;
@property(nonatomic) BOOL panThresholdPassed; // @synthesize panThresholdPassed=_panThresholdPassed;
@property(nonatomic) MISSING_TYPE *initialMidPoint; // @synthesize initialMidPoint=_initialMidPoint;
@property(nonatomic) MISSING_TYPE *initialSecondTouchLocation; // @synthesize initialSecondTouchLocation=_initialSecondTouchLocation;
@property(nonatomic) MISSING_TYPE *initialFirstTouchLocation; // @synthesize initialFirstTouchLocation=_initialFirstTouchLocation;
@property(retain, nonatomic) id <ASVTouch> secondTouch; // @synthesize secondTouch=_secondTouch;
@property(retain, nonatomic) id <ASVTouch> firstTouch; // @synthesize firstTouch=_firstTouch;
// - (void).cxx_destruct;
- (void)finishGesture;
- 
- (BOOL)scaleIsWithinSnapRange:(float)arg1 snapTarget:(float)arg2;
- 
- 
- (void)updateGesture;
- (void)updateRubberBand;
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;

@end

