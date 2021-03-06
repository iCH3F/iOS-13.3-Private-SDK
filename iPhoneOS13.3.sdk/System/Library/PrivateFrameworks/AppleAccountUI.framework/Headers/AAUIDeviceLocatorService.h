//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AAUIDeviceLocatorService : NSObject
{
    NSUInteger _lastKnownState;
    BOOL _hasAttemptedToFetchState;
    BOOL _wantsToEnable;
    NSObject<OS_dispatch_queue> *_stateUpdateQueue;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (BOOL)shouldEnable;
- (void)setShouldEnable:(BOOL)arg1;
- (void)disableInContext:(NSUInteger)arg1 withWipeToken:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)disableInContext:(NSUInteger)arg1 withWipeToken:(id)arg2;
- (void)enableInContext:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)enableInContext:(NSUInteger)arg1;
- (void)refreshCurrentState:(id /* CDUnknownBlockType */)arg1;
- (void)_updateStateAndNotify:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isStateKnown;
- (BOOL)isChangingState;
- (BOOL)isEnabled;
- (id)init;

@end

