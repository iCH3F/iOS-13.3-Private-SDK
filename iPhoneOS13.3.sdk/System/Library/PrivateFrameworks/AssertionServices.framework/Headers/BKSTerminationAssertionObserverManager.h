//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface BKSTerminationAssertionObserverManager : NSObject
{
    RBSProcessMonitor *_monitor;
    BOOL _monitorIsReady;
    NSMutableSet *_observers;
//     struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

// - (void).cxx_destruct;
- (void)dealloc;
- (void)_createMonitor;
- (BOOL)hasTerminationAssertionForBundleID:(id)arg1;
- (NSUInteger)efficacyForBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

