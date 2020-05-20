//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/APSConnectionDelegate-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class APSConnection, CKContainer, CKContainerID, CKDatabase, HMBCloudDatabaseConfiguration, HMBCloudDatabaseStateModel, HMBLocalDatabase, HMBLocalZone, HMFUnfairLock, NAFuture, NSMutableDictionary, NSSet;
@protocol HMBCloudDatabaseDelegate;

@interface HMBCloudDatabase : HMFObject <APSConnectionDelegate, HMFLogging>
{
    id <HMBCloudDatabaseDelegate> _delegate;
    HMBCloudDatabaseConfiguration *_configuration;
    HMBLocalDatabase *_localDatabase;
    HMBLocalZone *_stateZone;
    HMFUnfairLock *_propertyLock;
    HMBCloudDatabaseStateModel *_privateDatabaseState;
    HMBCloudDatabaseStateModel *_sharedDatabaseState;
    HMBCloudDatabaseStateModel *_publicDatabaseState;
    NSMutableDictionary *_zoneStateByZoneID;
    CKContainer *_container;
    CKDatabase *_sharedDatabase;
    CKDatabase *_privateDatabase;
    CKDatabase *_publicDatabase;
    APSConnection *_apsConnection;
    NAFuture *_initialCloudSyncFuture;
    NAFuture *_manateeAvailabilityFuture;
}

+ (id)logCategory;
+ (id)extantDatabasesLock;
+ (id)extantDatabases;
@property(retain, nonatomic) NAFuture *manateeAvailabilityFuture; // @synthesize manateeAvailabilityFuture=_manateeAvailabilityFuture;
@property(retain, nonatomic) NAFuture *initialCloudSyncFuture; // @synthesize initialCloudSyncFuture=_initialCloudSyncFuture;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(readonly, nonatomic) CKDatabase *publicDatabase; // @synthesize publicDatabase=_publicDatabase;
@property(readonly, nonatomic) CKDatabase *privateDatabase; // @synthesize privateDatabase=_privateDatabase;
@property(readonly, nonatomic) CKDatabase *sharedDatabase; // @synthesize sharedDatabase=_sharedDatabase;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) NSMutableDictionary *zoneStateByZoneID; // @synthesize zoneStateByZoneID=_zoneStateByZoneID;
@property(retain, nonatomic) HMBCloudDatabaseStateModel *publicDatabaseState; // @synthesize publicDatabaseState=_publicDatabaseState;
@property(retain, nonatomic) HMBCloudDatabaseStateModel *sharedDatabaseState; // @synthesize sharedDatabaseState=_sharedDatabaseState;
@property(retain, nonatomic) HMBCloudDatabaseStateModel *privateDatabaseState; // @synthesize privateDatabaseState=_privateDatabaseState;
@property(readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(readonly, nonatomic) HMBLocalZone *stateZone; // @synthesize stateZone=_stateZone;
@property(readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property(readonly, copy, nonatomic) HMBCloudDatabaseConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <HMBCloudDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (id)operationConfigurationWithProcessingOptions:(id)arg1;
- (void)removeStateForZoneID:(id)arg1;
- (BOOL)retryCloudKitOperationAfterError:(id)arg1 retryBlock:(id /* CDUnknownBlockType */)arg2;
- (id)removeZoneWithID:(id)arg1;
- (id)openExistingSharedZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id )arg4;
- (id)openExistingPrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id )arg4;
- (id)openOrCreatePrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id )arg4;
- (void)handleRemovedZoneIDs:(id)arg1 userInitiated:(BOOL)arg2;
- (void)handleUpdatedZonesIDs:(id)arg1;
- (void)handleCreatedZoneIDs:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)shutdown;
- (id)performAdministrativeFetchForDatabaseScope:(long long)arg1 withForce:(BOOL)arg2;
- (id)performAdministrativeFetchForAllDatabases:(BOOL)arg1;
- (void)addDatabaseOperation:(id)arg1 forScope:(long long)arg2;
- (void)addContainerOperation:(id)arg1;
- (id)performInitialCloudSync;
@property(readonly, nonatomic) CKContainerID *containerID;
- (id)initWithLocalDatabase:(id)arg1 configuration:(id)arg2;
- (id)initWithLocalDatabase:(id)arg1 stateZone:(id)arg2 container:(id)arg3 configuration:(id)arg4 databaseStateModelsByScope:(id)arg5 zoneStateModels:(id)arg6;
- (id)peformFunctionInvokeOperationWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3;
- (id)declineInvitation:(id)arg1;
- (id)acceptInvitation:(id)arg1;
- (id)removePrivateZoneWithID:(id)arg1;
- (id)createPrivateZoneWithID:(id)arg1;
- (id)fetchZonesOn:(id)arg1;
- (void)handleAccountChangedNotification:(id)arg1;
- (id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable:(BOOL)arg1;
- (id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable;
- (id)waitForManateeAvailability;
- (void)deallocForZoneWithID:(id)arg1;
- (void)updateNeedsZoneDeletion:(BOOL)arg1 forZoneWithID:(id)arg2;
- (void)updateRebuildStatus:(id)arg1 forZoneWithID:(id)arg2;
- (id)serverChangeTokenForZoneWithID:(id)arg1;
- (void)updateServerChangeToken:(id)arg1 forZoneWithID:(id)arg2;
- (void)updateServerChangeToken:(id)arg1 forDatabaseWithScope:(long long)arg2;
- (id)subscriptionIDForZoneID:(id)arg1 recordType:(id)arg2;
- (id)subscriptionIDForCloudID:(id)arg1 recordType:(id)arg2;
- (id)fetchSubscriptionsOn:(id)arg1;
- (id)fetchUserRecordOn:(id)arg1;
- (id)acceptInvitations:(id)arg1;
- (id)fetchShareMetadataForInvitations:(id)arg1;
- (id)fetchParticipants:(id)arg1;
- (id)performCloudPullForScope:(long long)arg1;
- (id)databaseStateForDatabaseScope:(long long)arg1;
- (id)fetchZones:(BOOL)arg1;
@property(readonly, nonatomic) NSSet *publicZoneIDs;
@property(readonly, nonatomic) NSSet *sharedZoneIDs;
@property(readonly, nonatomic) NSSet *privateZoneIDs;
- (id)_zonesWithScope:(long long)arg1;
- (id)unregisterSharedSubscriptionForSubscriptionID:(id)arg1;
- (id)unregisterPrivateSubscriptionForSubscriptionID:(id)arg1;
- (id)subscriptionsForZoneWithID:(id)arg1;
- (id)unregisterSubscription:(id)arg1 forZoneWithID:(id)arg2;
- (id)registerSubscription:(id)arg1 forZoneWithID:(id)arg2;
- (id)pushSubscriptionsForDatabase:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToRemove:(id)arg3;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;
- (id)unregisterPrivateSubscriptionForExternalRecordType:(id)arg1;
- (id)registerSharedSubscriptionForExternalRecordType:(id)arg1;
- (id)registerPrivateSubscriptionForExternalRecordType:(id)arg1;
- (id)registerSubscriptionForExternalRecordType:(id)arg1 databaseState:(id)arg2;

@end

