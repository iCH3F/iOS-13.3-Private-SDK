//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICMusicSubscriptionStatusRemoteRequestingClient-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICMusicSubscriptionStatusController : NSObject <ICMusicSubscriptionStatusRemoteRequestingClient>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSUInteger _numberOfActiveRemoteRequests;
    NSOperationQueue *_operationQueue;
    NSXPCConnection *_remoteRequestingClientConnection;
    NSObject<OS_dispatch_source> *_remoteRequestingClientConnectionInvalidationTimer;
    NSMutableDictionary *_statusHandlers;
}

+ (BOOL)_hasEntitlementForMusicSubscriptionStatusService;
+ (id)sharedStatusController;
// - (void).cxx_destruct;
- (void)_handleSubscriptionStatusCacheUnderlyingCachingPropertiesDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusCacheDidChangeNotification:(id)arg1;
- (void)_willBeginRemoteRequestForUniqueIdentifier:(id)arg1 statusHandler:(id /* CDUnknownBlockType */)arg2;
- (id /* CDUnknownBlockType */)_statusHandlerForUniqueIdentifier:(id)arg1;
- (void)_scheduleInvalidationOfRemoteRequestingClientConnection;
- (void)_remoteRequestingClientConnectionInvalidationTimerDidExpire;
- (id)_remoteRequestingClientConnection;
- (void)_invalidateRemoteRequestingClientConnection;
- (void)_didEndRemoteRequestForUniqueIdentifier:(id)arg1;
- (void)_cancelRemoteRequestingClientConnectionInvalidationTimer;
- (void)deliverSubscriptionStatusResponse:(id)arg1 forUniqueIdentifier:(id)arg2 error:(id)arg3;
- (void)enablePeriodicSubscriptionRefresh;
- (void)invalidateCachedSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)invalidateCachedSubscriptionStatusWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)refreshSubscriptionUsingRequestContext:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)refreshSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)refreshSubscriptionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)disableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)disableSubscriptionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)enableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)enableSubscriptionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)performSubscriptionStatusRequest:(id)arg1 withStatusHandler:(id /* CDUnknownBlockType */)arg2;
- (void)performSubscriptionStatusRequest:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(BOOL)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getSubscriptionStatusWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end
