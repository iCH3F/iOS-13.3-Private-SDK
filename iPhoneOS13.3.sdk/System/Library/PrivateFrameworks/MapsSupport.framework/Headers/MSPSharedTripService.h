//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPSharedTripXPCClient-Protocol.h>
#import <MapsSupport/MSPSharedTripXPCServer-Protocol.h>

@class GEOObserverHashTable, NSArray, NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MSPSharedTripService : NSObject <MSPSharedTripXPCClient, MSPSharedTripXPCServer>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOObserverHashTable *_receivingObservers;
    GEOObserverHashTable *_sendingObservers;
    NSMutableArray *_receivedTrips;
    BOOL _sendingAccountAvailable;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_openConnectionIfNeeded;
- (id)_remoteObjectProxy;
- (void)accountAvailabilityDidChange:(BOOL)arg1;
- (void)sendMessage:(id)arg1 toGroup:(id)arg2;
- (void)sendMessage:(id)arg1 toParticipant:(id)arg2;
- (void)invalidateActiveHandles;
- (void)sharedTripInvalidatedWithError:(id)arg1;
- (void)_insertOrUpdateTrip:(id)arg1;
- (void)sharedTripDidClose:(id)arg1;
- (void)sharedTripDidBecomeUnavailable:(id)arg1;
- (void)routeDidUpdateForSharedTrip:(id)arg1;
- (void)etaDidUpdateForSharedTrip:(id)arg1;
- (void)destinationReachedDidUpdateForSharedTrip:(id)arg1;
- (void)destinationDidUpdateForSharedTrip:(id)arg1;
- (void)sharedTripDidBecomeAvailable:(id)arg1;
- (void)_fetchAccountValidWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchAccountValidWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_blockSharedTrip:(id)arg1;
- (void)blockSharedTrip:(id)arg1;
- (void)_unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)_subscribeToSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)_fetchSharedTripsOnQueue:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_fetchSharedTripsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchSharedTripsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_fetchActiveHandlesOnQueue:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_fetchActiveHandlesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchActiveHandlesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_stopSharingTrip;
- (void)stopSharingTrip;
- (void)_stopSharingTripWithMessagesGroup:(id)arg1;
- (void)stopSharingTripWithMessagesGroup:(id)arg1;
- (void)_startSharingTripWithMessagesGroup:(id)arg1;
- (void)startSharingTripWithMessagesGroup:(id)arg1;
- (void)_stopSharingTripWithMessagesContacts:(id)arg1;
- (void)stopSharingTripWithMessagesContacts:(id)arg1;
- (void)_startSharingTripWithMessagesContacts:(id)arg1;
- (void)startSharingTripWithMessagesContacts:(id)arg1;
- (void)_stopSharingTripWithContacts:(id)arg1;
- (void)stopSharingTripWithContacts:(id)arg1;
- (void)_startSharingTripWithContacts:(id)arg1;
- (void)startSharingTripWithContacts:(id)arg1;
- (void)_fetchSendingIdentityWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchSendingIdentityWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_checkin;
- (void)checkin;
- (void)removeSendingObserver:(id)arg1;
- (void)addSendingObserver:(id)arg1;
- (void)removeReceivingObserver:(id)arg1;
- (void)addReceivingObserver:(id)arg1;
@property(readonly, nonatomic) BOOL hasValidSharingAccount;
- (void)initializeAccountAvailability;
- (void)initializeTrips;
@property(readonly, nonatomic) NSArray *receivedTrips;
- (id)init;

@end

