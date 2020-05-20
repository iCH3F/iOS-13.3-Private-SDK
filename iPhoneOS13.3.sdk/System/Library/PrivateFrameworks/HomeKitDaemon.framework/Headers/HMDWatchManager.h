//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class IDSService, NSArray, NSObject;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _pairedWithWatch;
    NSArray *_connectedWatches;
    IDSService *_service;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)isCompatibleWatchDevice:(id)arg1;
+ (id)sharedManager;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
// - (void).cxx_destruct;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)connectedWatchFromDeviceID:(id)arg1;
@property(readonly, copy) NSArray *connectedWatches; // @synthesize connectedWatches=_connectedWatches;
@property(readonly, getter=isPairedWithWatch) BOOL pairedWithWatch; // @synthesize pairedWithWatch=_pairedWithWatch;
@property(readonly, copy) NSArray *watches;
- (void)__initializeConnectedDevices;
- (id)attributeDescriptions;
- (id)init;

@end

