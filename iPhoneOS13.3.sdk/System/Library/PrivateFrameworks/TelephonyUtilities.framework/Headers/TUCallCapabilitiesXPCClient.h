//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallCapabilitiesXPCClient-Protocol.h>
#import <TelephonyUtilities/TUCallCapabilitiesXPCServerActions-Protocol.h>

@class NSMapTable, NSXPCConnection, TUCallCapabilitiesState;
@protocol OS_dispatch_queue;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>
{
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSMapTable *_delegateToQueue;
    TUCallCapabilitiesState *_state;
}

+ (id)callCapabilitiesServerXPCInterface;
+ (id)callCapabilitiesClientXPCInterface;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)asynchronousServer;
@property(retain, nonatomic) TUCallCapabilitiesState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(readonly, nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)_updateState:(id)arg1;
- (void)_retrieveState;
- (oneway void)capabilityStateUpdated:(id)arg1;
- (void)invalidate;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (oneway void)endEmergencyCallbackMode;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;
- (oneway void)setThumperCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setVoLTECallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingRoamingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2;
- (oneway void)setRelayCallingEnabled:(BOOL)arg1;
- (void)performDelegateCallbackBlock:(id /* CDUnknownBlockType */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)synchronousServerWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)asynchronousServerWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)asynchronousServer;
- (void)handleServerDisconnect;
- (void)dealloc;
- (id)init;

@end

