//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSFluidProgressState : NSObject
{
    double _webKitProgressValue;
    double _linearFunctionM;
    double _linearFunctionB;
    double _startTimeForFluidProgress;
    double _lastTimeProgressValueWasUpdated;
    long long _fluidProgressAnimationPhase;
    double _previousDestinationPosition;
    double _animationDuration;
    double _minProgressPosition;
    BOOL _hasCompletedLoad;
    BOOL _hasCanceledLoad;
    BOOL _hasCommittedLoad;
    BOOL _shouldAnimateUsingInitialPosition;
    long long _fluidProgressType;
    NSString *_loadURL;
}

+ (double)_estimatedLoadTimeRemainingFromProgressValue:(double)arg1;
@property(nonatomic) BOOL shouldAnimateUsingInitialPosition; // @synthesize shouldAnimateUsingInitialPosition=_shouldAnimateUsingInitialPosition;
@property(nonatomic) BOOL hasCommittedLoad; // @synthesize hasCommittedLoad=_hasCommittedLoad;
@property(nonatomic) BOOL hasCanceledLoad; // @synthesize hasCanceledLoad=_hasCanceledLoad;
@property(nonatomic) BOOL hasCompletedLoad; // @synthesize hasCompletedLoad=_hasCompletedLoad;
@property(copy, nonatomic) NSString *loadURL; // @synthesize loadURL=_loadURL;
@property(nonatomic) long long fluidProgressType; // @synthesize fluidProgressType=_fluidProgressType;
// - (void).cxx_destruct;
- (double)secondsElapsedSinceLoadBegan;
- (BOOL)isFluidProgressStalled;
- (id)nextFluidProgressAnimation;
- (double)fluidProgressValue;
@property(nonatomic) double minProgressPosition;
- (void)setWebKitProgressValue:(double)arg1;
@property(nonatomic) long long fluidProgressAnimationPhase;
- (id)description;
- (id)initWithType:(long long)arg1;
- (void)_updateLinearFunction;
- (double)_nextProgressPosition:(double)arg1;
- (double)_fractionCompleteAtElapsedTime:(double)arg1;
- (double)_estimatedLoadTimeRemaining;
- (double)_animationDuration;
- (double)_adjustProgressPosition:(double)arg1;

@end

