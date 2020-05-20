//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDeviceSetupOperationHandler, SFClient, SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupAppleTVService : NSObject
{
    BOOL _activateCalled;
    BOOL _advertiseFast;
    BOOL _invalidateCalled;
    SFClient *_preventExitForLocaleClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    BOOL _prefCDPEnabled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _progressHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_handleBasicConfigRequest:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)_reportProgress:(unsigned int)arg1 info:(id)arg2;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

