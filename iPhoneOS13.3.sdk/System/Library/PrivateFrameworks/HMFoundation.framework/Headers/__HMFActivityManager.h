//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSHashTable;
@protocol HMFLocking;

__attribute__((visibility("hidden")))
@interface __HMFActivityManager : HMFObject
{
    id <HMFLocking> _lock;
    NSHashTable *_activities;
}

// - (void).cxx_destruct;
- (id)init;

@end

