//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMFUnfairLock, MPCAssistantDiscovery, NSArray, NSNumber, NSString;
@protocol HMDMRSetEndpointVolumeOperationExternalObjectInterface;

@interface HMDMRSetEndpointVolumeOperation : HMFOperation <HMFObject>
{
    HMFUnfairLock *_lock;
    NSNumber *_volume;
    NSArray *_routeIDs;
    MPCAssistantDiscovery *_discovery;
    id <HMDMRSetEndpointVolumeOperationExternalObjectInterface> _externalObjectInterface;
}

+ (id)shortDescription;
@property(retain, nonatomic) id <HMDMRSetEndpointVolumeOperationExternalObjectInterface> externalObjectInterface; // @synthesize externalObjectInterface=_externalObjectInterface;
@property(retain, nonatomic) MPCAssistantDiscovery *discovery; // @synthesize discovery=_discovery;
@property(readonly, copy, nonatomic) NSArray *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(readonly, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (BOOL)cancelOnSetup;
- (void)main;
- (id)initWithRouteIDs:(id)arg1 volume:(id)arg2;

@end

