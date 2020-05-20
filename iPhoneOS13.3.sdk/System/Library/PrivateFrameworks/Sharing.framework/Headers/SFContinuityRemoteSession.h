//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SFDevice, SFSession;
@protocol OS_dispatch_queue;

@interface SFContinuityRemoteSession : NSObject
{
    BOOL _activateCalled;
    id /* CDUnknownBlockType */ _activateHandler;
    BOOL _invalidateCalled;
    NSMutableArray *_messageQueue;
    BOOL _pairVerifyDone;
    BOOL _pairVerifyRunning;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    BOOL _started;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    SFDevice *_peerDevice;
}

@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)_sendQueuedMesssages;
- (void)_sendCommand:(int)arg1 options:(id)arg2;
- (void)sendCommand:(int)arg1 options:(id)arg2;
- (void)sendCommand:(int)arg1;
- (void)_sfSessionStart;
- (void)_run;
- (void)invalidate;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

