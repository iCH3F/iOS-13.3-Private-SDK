//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVGesture.h>

@class MISSING_TYPE;
@protocol ASVSingleFingerGestureDelegate, ASVTouch;

@interface ASVSingleFingerGesture : ASVGesture
{
    BOOL _panThresholdPassed;
    MISSING_TYPE *_initialTouchLocation;
    MISSING_TYPE *_latestTouchLocation;
    id <ASVSingleFingerGestureDelegate> _delegate;
    NSUInteger _enabledGestureTypes;
    id <ASVTouch> _touch;
    double _touchStartTime;
}

@property(nonatomic) double touchStartTime; // @synthesize touchStartTime=_touchStartTime;
@property(retain, nonatomic) id <ASVTouch> touch; // @synthesize touch=_touch;
@property(readonly, nonatomic) NSUInteger enabledGestureTypes; // @synthesize enabledGestureTypes=_enabledGestureTypes;
@property(nonatomic) __weak id <ASVSingleFingerGestureDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) MISSING_TYPE *latestTouchLocation; // @synthesize latestTouchLocation=_latestTouchLocation;
@property(nonatomic) MISSING_TYPE *initialTouchLocation; // @synthesize initialTouchLocation=_initialTouchLocation;
@property(nonatomic) BOOL panThresholdPassed; // @synthesize panThresholdPassed=_panThresholdPassed;
// - (void).cxx_destruct;
- (void)finishGesture;
- (BOOL)generatesTransforms;
- (BOOL)generatesTaps;
- (BOOL)gestureTypeIsEnabled:(NSUInteger)arg1;
- (void)updateGesture;
- (id)initWithTouch:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 enabledGestureTypes:(NSUInteger)arg4;

@end
