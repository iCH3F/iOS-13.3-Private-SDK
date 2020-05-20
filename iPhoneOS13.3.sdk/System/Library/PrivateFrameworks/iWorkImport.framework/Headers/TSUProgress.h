//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUProgress : NSObject
{
    NSMutableSet *_progressObservers;
    NSObject<OS_dispatch_queue> *_progressObserversQueue;
    NSObject<OS_dispatch_queue> *_progressObserversValueQueue;
    NSString *_message;
}

@property(copy) NSString *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (double)protected_minProgressObserverValueInterval;
- (BOOL)protected_hasProgressObservers;
- (void)protected_progressDidChange;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, getter=isIndeterminate) BOOL indeterminate;
@property(readonly) double maxValue;
@property(readonly) double value;
- (id)initForSubclass;

@end

