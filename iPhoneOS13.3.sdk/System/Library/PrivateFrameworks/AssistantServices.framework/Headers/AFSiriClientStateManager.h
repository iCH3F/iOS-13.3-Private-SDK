//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFNotifyStatePublisher, AFSafetyBlock, AFWatchdogTimer, NSMapTable;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFSiriClientStateManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AFNotifyStatePublisher *_publisher;
    NSMapTable *_statesByClient;
    long long _transactionDepth;
    AFSafetyBlock *_presentationTransitionAssertion;
    AFWatchdogTimer *_presentationTransitionWatchdogTimer;
    NSObject<OS_dispatch_group> *_presentationTransitionGroup;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (void)_endPresentationTransitionForReason:(id)arg1;
- (void)_beginPresentationTransition;
- (NSUInteger)_aggregatedState;
- (void)_aggregateStatesAndPublishIfNeeded;
- (void)_endSpeakingForClient:(void )arg1;
- (void)_beginSpeakingForClient:(void )arg1;
- (void)_endListeningForClient:(void )arg1;
- (void)_beginListeningForClient:(void )arg1;
- (void)_endRequestWithUUID:(id)arg1 forClient:(void )arg2;
- (void)_beginRequestWithUUID:(id)arg1 forClient:(void )arg2;
- (void)_endSessionForClient:(void )arg1;
- (void)_beginSessionForClient:(void )arg1;
- (void)_removeStateForClient:(void )arg1;
- (id)_stateForClient:(void )arg1 createIfAbsent:(BOOL)arg2;
- (void)getCurrentStateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)endPresentationTransition;
- (void)beginPresentationTransition;
- (void)endTransaction;
- (void)beginTransaction;
- (void)endSpeakingForClient:(id)arg1;
- (void)beginSpeakingForClient:(id)arg1;
- (void)endListeningForClient:(void )arg1;
- (void)beginListeningForClient:(void )arg1;
- (void)endRequestWithUUID:(id)arg1 forClient:(void )arg2;
- (void)beginRequestWithUUID:(id)arg1 forClient:(void )arg2;
- (void)endSessionForClient:(void )arg1;
- (void)beginSessionForClient:(void )arg1;
- (void)invalidateClient:(void )arg1;
- (id)init;

@end

