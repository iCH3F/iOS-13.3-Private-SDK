//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomeObjectChangeHandler : HMFObject
{
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (void)handleObjectUpdate:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)handleObjectRemove:(id)arg1 message:(id)arg2;
- (void)handleObjectAdd:(id)arg1 message:(id)arg2;
- (id)initWithHome:(id)arg1;

@end

