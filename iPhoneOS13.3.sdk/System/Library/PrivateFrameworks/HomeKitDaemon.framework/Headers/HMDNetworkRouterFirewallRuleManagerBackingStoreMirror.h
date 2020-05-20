//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBMirrorProtocol-Protocol.h>
#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreMirror-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudDatabase, HMBLocalDatabase, HMBLocalZone, HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel, NAFuture, NAPromise, NSObject, NSSet;
@protocol HMBLocalZoneID, NAScheduler, OS_dispatch_queue;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirror : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMBMirrorProtocol>
{
    BOOL _shuttingDown;
    BOOL _useAnonymousRequests;
    id <HMBLocalZoneID> _zoneID;
    HMBLocalZone *_localZone;
    NAFuture *_lastAsyncFuture;
    NSSet *_watchedRecordIDs;
    HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *_internalState;
    HMBCloudDatabase *_cloudDatabase;
    HMBLocalDatabase *_localDatabase;
    NSObject<OS_dispatch_queue> *_workQueue;
    NAPromise *_startupPromise;
    NAPromise *_shutdownPromise;
    id <NAScheduler> _workQueueScheduler;
}

+ (id)logCategory;
+ (id)__publicKeysFromCertificateRecord:(id)arg1;
+ (id)__publicKeyFromCertificateRecord:(id)arg1 dataKey:(id)arg2 assetKey:(id)arg3;
+ (id)__recordKeyCertificatePrefix:(id)arg1;
+ (id)__certificatesRecordID;
+ (id)__createSignatureVerificationPolicy;
+ (NSUInteger)__maxSizeForCKRecordSignatureVerificationCertificateChain;
+ (BOOL)__errorIsNotFound:(id)arg1;
+ (id)__overrideParentModelID;
@property(readonly, nonatomic) id <NAScheduler> workQueueScheduler; // @synthesize workQueueScheduler=_workQueueScheduler;
@property(readonly, nonatomic) NAPromise *shutdownPromise; // @synthesize shutdownPromise=_shutdownPromise;
@property(readonly, nonatomic) NAPromise *startupPromise; // @synthesize startupPromise=_startupPromise;
@property(readonly, nonatomic) BOOL useAnonymousRequests; // @synthesize useAnonymousRequests=_useAnonymousRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property(readonly, nonatomic) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property(nonatomic, getter=isShuttingDown) BOOL shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property(retain, nonatomic) HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly, nonatomic) id <HMBLocalZoneID> zoneID; // @synthesize zoneID=_zoneID;
// - (void).cxx_destruct;
- (void)__saveInternalStateWithActivity:(id)arg1;
- (BOOL)_removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id )arg4;
- (BOOL)removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id )arg4;
- (BOOL)removeAllOverridesWithOptions:(id)arg1 error:(id )arg2;
- (BOOL)removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id )arg3;
- (BOOL)addOverrides:(NSDictionary )arg1 replace:(BOOL)arg2 options:(id)arg3 error:(id )arg4;
- (NSDictionary )_fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id )arg3;
- (NSDictionary )fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id )arg3;
- (NSDictionary )fetchAllOverridesWithOptions:(id)arg1 error:(id )arg2;
- (NSDictionary )fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id )arg3;
- (BOOL)removeAllLocalRulesWithOptions:(id)arg1 error:(id )arg2;
- (NSDictionary )fetchNetworkDeclarationDataForZoneName:(id)arg1 options:(id)arg2 error:(id )arg3;
- (NSDictionary )fetchAllNetworkDeclarationDataWithOptions:(id)arg1 error:(id )arg2;
- (NSDictionary )_fetchNetworkDeclarationDataForZoneName:(id)arg1 options:(id)arg2 error:(id )arg3;
- (NSDictionary )fetchNetworkDeclarationDataForRecordIDs:(id)arg1 options:(id)arg2 error:(id )arg3;
- (void)fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)fetchCloudRecordIDsForZoneID:(id)arg1 options:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 desiredKeys:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)fetchCloudChangesWithOptions:(id)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 xpcActivity:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
@property(retain, nonatomic) NSSet *watchedRecordIDs; // @synthesize watchedRecordIDs=_watchedRecordIDs;
@property(readonly, nonatomic) NAFuture *shutdownFuture;
@property(readonly, nonatomic) NAFuture *startupFuture;
- (id)shutdown;
- (id)flush;
- (id)triggerOutputForOutputRow:(NSUInteger)arg1 options:(id)arg2;
- (id)destroy;
- (void)startUpWithLocalZone:(id)arg1;
@property(readonly, nonatomic) NAFuture *startUp;
- (id)__asyncFutureWithActivity:(id)arg1 ignoreErrors:(BOOL)arg2 block:(id /* CDUnknownBlockType */)arg3;
@property(retain, nonatomic) NAFuture *lastAsyncFuture; // @synthesize lastAsyncFuture=_lastAsyncFuture;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 useAnonymousRequests:(BOOL)arg3 ownerQueue:(id)arg4;
- (void)__startQueryOperation:(id)arg1 operation:(id)arg2;
- (void)__fetchRecordsByQuery:(id)arg1;
- (void)__fetchRecordByID:(id)arg1;
- (void)__fetchCloudRecordsWithFetchInfo:(id)arg1;
- (BOOL)__shouldFailCloudRecordFetchError:(id)arg1 error:(id)arg2;
- (void)__shutdownWithActivity:(id)arg1;
- (void)__startupWithLocalZone:(id)arg1 activity:(id)arg2;
- (id)__loadOrCreateInternalStateModelWithLocalZone:(id)arg1 activity:(id)arg2;
- (void)__retryFetchVerificationCertificatesWithFetchInfo:(id)arg1;
- (BOOL)__canRecoverFromVerificationCertificatesError:(id)arg1 fetchInfo:(id)arg2;
- (void)__fetchVerificationCertificatesCompleted:(id)arg1 recordsByRecordID:(id)arg2 error:(id)arg3;
- (void)__fetchVerificationCertificatesWithFetchInfo:(id)arg1;
- (BOOL)__removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 activity:(id)arg4 error:(id )arg5;
- (BOOL)__removeOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id )arg4;
- (BOOL)__removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id )arg4;
- (BOOL)__removeAllOverridesWithOptions:(id)arg1 activity:(id)arg2 error:(id )arg3;
- (BOOL)__addOverrides:(NSDictionary )arg1 replace:(BOOL)arg2 options:(id)arg3 activity:(id)arg4 error:(id )arg5;
- (NSDictionary )__fetchOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id )arg4;
- (NSDictionary )__fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id )arg4;
- (BOOL)__removeAllLocalRulesWithOptions:(id)arg1 activity:(id)arg2 error:(id )arg3;
- (NSDictionary )__fetchNetworkDeclarationDataForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id )arg4;
- (NSDictionary )__fetchNetworkDeclarationDataForZoneID:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id )arg4;
- (NSDictionary )__fetchNetworkDeclarationDataForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id )arg4;
- (id)__localZonesForRecordIDs:(id)arg1 activity:(id)arg2 error:(id )arg3;
- (void)__shutdownLocalZones:(id)arg1 activity:(id)arg2;
- (id)__openLocalZoneForCloudZoneID:(id)arg1 error:(id )arg2;
- (id)__createCloudZoneIDForZoneID:(id)arg1;
- (void)__updateChangeTokenWithFetchInfo:(id)arg1;
- (void)__removeDeletedZonesWithFetchInfo:(id)arg1;
- (void)__retryFetchDatabaseChangesWithFetchInfo:(id)arg1;
- (BOOL)__canRecoverFromFetchDatabaseChangesError:(id)arg1 fetchInfo:(id)arg2;
- (void)__fetchDatabaseChangesCompleted:(id)arg1 error:(id)arg2;
- (void)__fetchDatabaseChangesWithFetchInfo:(id)arg1;
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;
- (void)__performCloudZonePullsWithFetchInfo:(id)arg1;
- (void)__startUpCloudZonesWithFetchInfo:(id)arg1;
- (BOOL)__createCloudZonesForFetchInfo:(id)arg1 error:(id )arg2;

@end

