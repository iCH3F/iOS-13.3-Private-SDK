//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NPKQuickPaymentSession.h>

#import <NanoPassKit/PKFieldDetectorObserver-Protocol.h>

@class NSDictionary, NSObject, PKFieldDetector, PKPass;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKFakePaymentSession : NPKQuickPaymentSession <PKFieldDetectorObserver>
{
    BOOL _ourConfirmed;
    BOOL _ourInServiceMode;
    BOOL _invalidated;
    PKPass *_ourCurrentPass;
    NSDictionary *_ourVasPasses;
    NSObject<OS_dispatch_queue> *_ourCallbackQueue;
    NSObject<OS_dispatch_queue> *_ourInternalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    PKFieldDetector *_fieldDetector;
    NSUInteger _changeCardToken;
}

@property(nonatomic) NSUInteger changeCardToken; // @synthesize changeCardToken=_changeCardToken;
@property(nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) BOOL ourInServiceMode; // @synthesize ourInServiceMode=_ourInServiceMode;
@property(nonatomic) BOOL ourConfirmed; // @synthesize ourConfirmed=_ourConfirmed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ourInternalQueue; // @synthesize ourInternalQueue=_ourInternalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ourCallbackQueue; // @synthesize ourCallbackQueue=_ourCallbackQueue;
@property(retain, nonatomic) NSDictionary *ourVasPasses; // @synthesize ourVasPasses=_ourVasPasses;
@property(retain, nonatomic) PKPass *ourCurrentPass; // @synthesize ourCurrentPass=_ourCurrentPass;
// - (void).cxx_destruct;
- (void)_handleTransactionCompleteDarwinNotification;
- (void)_handleTimeoutTimer;
- (void)_setTimeoutTimer;
- (void)_scheduleDidActivateEventForPass:(id)arg1;
- (void)deactivateSessionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)renewSession;
- (void)confirmOrRenewSession;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;
- (BOOL)inServiceMode;
- (void)setInServiceMode:(BOOL)arg1;
- (BOOL)deferAuthorization;
- (void)setDeferAuthorization:(BOOL)arg1;
- (id)vasPasses;
- (void)setCredential:(id)arg1;
- (void)setVasPasses:(id)arg1;
- (id)currentPass;
- (void)setCurrentPass:(id)arg1;
- (void)dealloc;
- (BOOL)startSession;
- (id)initWithQueue:(id)arg1;

@end

