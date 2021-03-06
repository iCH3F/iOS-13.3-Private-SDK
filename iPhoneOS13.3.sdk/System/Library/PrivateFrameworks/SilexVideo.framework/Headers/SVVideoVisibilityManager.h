//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoVisibilityManager-Protocol.h>

@class NSMutableDictionary;
@protocol SVVideoQueueObserving, SVVideoTransitionManager, SVVideoVisibilityMonitorProviding, SVVideoVisiblePercentageManager;

@interface SVVideoVisibilityManager : NSObject <SVVideoVisibilityManager>
{
    id <SVVideoVisibilityMonitorProviding> _visibilityMonitorProvider;
    id <SVVideoTransitionManager> _transitionManager;
    id <SVVideoQueueObserving> _queueObserver;
    id <SVVideoVisiblePercentageManager> _visiblePercentageManager;
    NSMutableDictionary *_visibilityMonitors;
}

@property(readonly, nonatomic) NSMutableDictionary *visibilityMonitors; // @synthesize visibilityMonitors=_visibilityMonitors;
@property(readonly, nonatomic) id <SVVideoVisiblePercentageManager> visiblePercentageManager; // @synthesize visiblePercentageManager=_visiblePercentageManager;
@property(readonly, nonatomic) id <SVVideoQueueObserving> queueObserver; // @synthesize queueObserver=_queueObserver;
@property(readonly, nonatomic) id <SVVideoTransitionManager> transitionManager; // @synthesize transitionManager=_transitionManager;
@property(readonly, nonatomic) id <SVVideoVisibilityMonitorProviding> visibilityMonitorProvider; // @synthesize visibilityMonitorProvider=_visibilityMonitorProvider;
// - (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)updateVisibility;
- (void)stopMonitoringVideo:(id)arg1;
- (void)startMonitoringVideo:(id)arg1;
- (id)initWithTransitionManager:(id)arg1 queueObserver:(id)arg2 visibilityMonitorProvider:(id)arg3 visiblePercentageManager:(id)arg4;

@end

