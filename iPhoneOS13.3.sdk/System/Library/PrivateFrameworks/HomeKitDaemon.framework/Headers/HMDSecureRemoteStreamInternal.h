//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDSecureRemoteStreamInternal : HMFObject <HMFLogging>
{
    unsigned char _cipherReadKey[32];
    unsigned char _cipherReadNonce[8];
    unsigned char _cipherWriteKey[32];
    unsigned char _cipherWriteNonce[8];
    BOOL _commitResponded;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id /* CDUnknownBlockType */ _internalRequestHandler;
    unsigned char _pairVerifyDone;
    struct PairingSessionPrivate _pairVerifySession;
    NSMutableDictionary *_prepareRequests;
    BOOL _prepareResponded;
    NSString *_sessionID;
    BOOL _started;
    int _state;
    NSMutableDictionary *_transactions;
    NSMutableArray *_userTransactions;
    id /* CDUnknownBlockType */ _getLocalIdentityHandler;
    id /* CDUnknownBlockType */ _findPeerHandler;
    id /* CDUnknownBlockType */ _requestHandler;
    id /* CDUnknownBlockType */ _startedHandler;
    id /* CDUnknownBlockType */ _stoppedHandler;
    id /* CDUnknownBlockType */ _transportSendMessage;
    long long _type;
    NSObject<OS_dispatch_queue> *_userQueue;
    NSUInteger _commitTimeoutNanos;
    NSUInteger _clientIdleTimeoutNanos;
    NSUInteger _serverIdleTimeoutNanos;
    NSUInteger _sendInternalTimeoutNanos;
    NSUInteger _sendUserTimeoutNanos;
}

+ (id)logCategory;
@property(copy) id /* CDUnknownBlockType */ transportSendMessage; // @synthesize transportSendMessage=_transportSendMessage;
@property(copy) id /* CDUnknownBlockType */ stoppedHandler; // @synthesize stoppedHandler=_stoppedHandler;
@property(copy) id /* CDUnknownBlockType */ startedHandler; // @synthesize startedHandler=_startedHandler;
@property(copy) id /* CDUnknownBlockType */ requestHandler; // @synthesize requestHandler=_requestHandler;
@property(copy) id /* CDUnknownBlockType */ findPeerHandler; // @synthesize findPeerHandler=_findPeerHandler;
@property(copy) id /* CDUnknownBlockType */ getLocalIdentityHandler; // @synthesize getLocalIdentityHandler=_getLocalIdentityHandler;
@property(copy) id /* CDUnknownBlockType */ internalRequestHandler; // @synthesize internalRequestHandler=_internalRequestHandler;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_userQueue;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (void)_serverCompletePrepareRequest:(id)arg1;
- (int)_serverHandleCommitRequest:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;
- (int)_serverHandlePrepareRequest:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;
- (int)_serverHandleDecryptedRequest:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_serverHandleEncryptedRequest:(id)arg1 options:(id)arg2;
- (void)_serverPairVerifyExchange:(id)arg1 options:(id)arg2;
- (void)_serverRunStateMachine;
- (int)_clientHandleCommitResponse:(id)arg1;
- (int)_clientSendCommitRequest:(id)arg1;
- (int)_clientHandlePrepareResponse:(id)arg1;
- (int)_clientSendPrepareRequest:(id)arg1;
- (int)_clientPairVerifyExchange:(id)arg1;
- (void)_clientRunStateMachine;
- (void)_transportReceivedMessage:(id)arg1 options:(id)arg2;
- (void)transportReceivedMessage:(id)arg1 options:(id)arg2;
- (void)_completeTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_sendRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_completeUserTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_sendUserRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* CDUnknownBlockType */)arg3;
- (void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* CDUnknownBlockType */)arg3;
- (int)_updateIdleTimer;
- (int)_setupEncryption;
- (void)_runStateMachine;
- (void)_stop:(int)arg1;
- (void)stop;
- (void)_start;
- (void)start;
@property(readonly) double requestTimeout;
- (void)dealloc;
- (id)initWithType:(long long)arg1 commitTimeout:(NSUInteger)arg2 clientIdleTimeout:(NSUInteger)arg3 serverIdleTimeout:(NSUInteger)arg4 sendInternalTimeout:(NSUInteger)arg5 sendUserTimeout:(NSUInteger)arg6;
- (id)init;

@end

