//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOExperimentConfigurationObserverProxy : NSObject
{
    NSHashTable *_observers;
//     struct os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (NSUInteger)observersCount;
- (void)forEachObserver:(id /* CDUnknownBlockType */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)init;

@end

