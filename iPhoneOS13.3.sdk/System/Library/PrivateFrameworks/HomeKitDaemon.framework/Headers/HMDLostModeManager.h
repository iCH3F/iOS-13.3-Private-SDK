//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@protocol HMFLocking;

@interface HMDLostModeManager : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;
    BOOL _lost;
}

+ (id)sharedManager;
+ (id)logCategory;
// - (void).cxx_destruct;
@property(readonly, getter=isLost) BOOL lost;
- (id)init;
- (id)attributeDescriptions;

@end

