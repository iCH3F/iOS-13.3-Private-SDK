//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMChangeTrackingProvider-Protocol.h>

@class REMStoreContainerToken, _REMInProgressSaveRequestsContainer;
@protocol REMDaemonController;

@interface REMStore : NSObject <REMChangeTrackingProvider>
{
    BOOL _assertOnMainThreadFetches;
//     struct os_unfair_lock_s _lock;
    REMStoreContainerToken *_storeContainerToken;
    _REMInProgressSaveRequestsContainer *_l_inProgressSaveRequestsContainer;
    id <REMDaemonController> _daemonController;
    NSUInteger _mode;
    REMStore *_nonUserInteractiveStore;
}

+ (BOOL)siriShouldRouteIntentsToNewRemindersApp;
+ (BOOL)destroyIsolatedStoreContainerWithToken:(id)arg1 error:(id )arg2;
+ (id)createIsolatedStoreContainerWithError:(id )arg1;
+ (id)storeDidChangeNotificationName;
+ (void)initialize;
+ (BOOL)_shouldNotifyReminddOfInteractionWithPeople;
+ (void)notifyOfInteractionWithPeople:(id)arg1;
+ (void)notifyOfUserInterestInSiriSuggestedReminder:(id)arg1;
+ (BOOL)isEventKitSyncEnabledForReminderKit;
+ (BOOL)dataaccessDaemonStopSyncingReminders;
+ (BOOL)notificationsEnabled;
@property(retain, nonatomic) REMStore *nonUserInteractiveStore; // @synthesize nonUserInteractiveStore=_nonUserInteractiveStore;
@property(nonatomic) BOOL assertOnMainThreadFetches; // @synthesize assertOnMainThreadFetches=_assertOnMainThreadFetches;
@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(retain, nonatomic) id <REMDaemonController> daemonController; // @synthesize daemonController=_daemonController;
// @property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) _REMInProgressSaveRequestsContainer *l_inProgressSaveRequestsContainer; // @synthesize l_inProgressSaveRequestsContainer=_l_inProgressSaveRequestsContainer;
@property(readonly, nonatomic) REMStoreContainerToken *storeContainerToken; // @synthesize storeContainerToken=_storeContainerToken;
// - (void).cxx_destruct;
- (BOOL)_isUserInteractiveStore;
- (void)_incrementStoreGeneration;
- (id)_withInProgressSaveRequestContainer:(id /* CDUnknownBlockType */)arg1;
- (id)fetchDefaultAccountWithError:(id )arg1;
- (id)fetchDefaultListWithError:(id )arg1;
- (id)fetchEligibleDefaultListsWithError:(id )arg1;
- (id)compressedDistributedEvaluationDataWithOptions:(id)arg1 error:(id )arg2;
- (BOOL)everConnectedToCar;
- (void)acceptShareWithMetadata:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)stopShare:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)updateShare:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)createShareForListWithID:(id)arg1 error:(id )arg2;
- (id)fetchShareForListWithID:(id)arg1 error:(id )arg2;
- (void)_saveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 reminderChangeItems:(id)arg3 author:(id)arg4 replicaManagerProvider:(id)arg5 synchronously:(BOOL)arg6 performer:(id)arg7 completion:(id /* CDUnknownBlockType */)arg8;
- (id)_xpcSyncStorePerformerWithReason:(id)arg1 errorHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_enumerateAllListsIncludingGroups:(BOOL)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateAllGroupsAndListsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateAllListsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateAllRemindersWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id )arg4;
- (id)resultFromPerformingInvocation:(id)arg1 error:(id )arg2;
- (id)fetchResultByExecutingFetchRequest:(id)arg1 error:(id )arg2;
- (NSUInteger)countForFetchRequest:(id)arg1 error:(id )arg2;
- (id)resultsIndexedByObjectIDFromExecutingFetchRequest:(id)arg1 error:(id )arg2;
- (id)executeFetchRequest:(id)arg1 error:(id )arg2;
- (void)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 queue:(id)arg7 completion:(id /* CDUnknownBlockType */)arg8;
- (BOOL)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 error:(id )arg7;
- (id)fetchReplicaManagersForAccountID:(id)arg1 bundleID:(id)arg2 error:(id )arg3;
- (id)fetchReplicaManagerForAccountID:(id)arg1 error:(id )arg2;
- (id)fetchReminderWithObjectID:(id)arg1 error:(id )arg2;
- (id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id )arg2;
- (id)fetchRemindersWithObjectIDs:(id)arg1 error:(id )arg2;
- (id)fetchListsWithObjectIDs:(id)arg1 error:(id )arg2;
- (id)fetchListWithObjectID:(id)arg1 error:(id )arg2;
- (id)fetchAccountsWithObjectIDs:(id)arg1 error:(id )arg2;
- (id)fetchAccountWithObjectID:(id)arg1 error:(id )arg2;
- (id)optimisticallyMaterializeReminderChangeItem:(id)arg1;
- (id)refreshReminder:(id)arg1;
- (id)refreshList:(id)arg1;
- (id)refreshAccount:(id)arg1;
- (id)fetchSiriFoundInAppsListWithError:(id )arg1;
- (id)fetchAccountsForDumpingWithError:(id )arg1;
- (id)fetchAccountsIncludingInactive:(BOOL)arg1 error:(id )arg2;
- (id)fetchAccountsWithError:(id )arg1;
- (void)nukeDatabase;
- (void)invalidate;
- (NSUInteger)storeGeneration;
- (id)debugDescription;
- (id)description;
- (id)initWithDaemonController:(id)arg1 storeContainerToken:(id)arg2;
- (id)initWithDaemonController:(id)arg1;
- (id)init;
- (id)initUserInteractive:(BOOL)arg1;
- (id)initWithStoreContainerToken:(id)arg1;
- (void)_respondToCalDAVSharedList:(id)arg1 withResponse:(long long)arg2 queue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)rejectCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)acceptCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 transactionAuthorKeysToExclude:(id)arg3;
- (id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2;
- (id)provideAnonymousChangeTrackingWithTransactionAuthorKeysToExclude:(id)arg1;
- (void)notifyOfInteractionWithPeople:(id)arg1 force:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)notifyOfUserInterestInSiriSuggestedReminder:(id)arg1;
- (id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id )arg2;
- (id)fetchCompletedRemindersForEventKitBridgingWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id )arg4;
- (id)fetchIncompleteRemindersForEventKitBridgingWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id )arg4;
- (id)fetchRemindersForEventKitBridgingWithListIDs:(id)arg1 error:(id )arg2;
- (id)fetchListsForEventKitBridgingWithError:(id )arg1;
- (id)fetchRemindersMatchingTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 error:(id )arg7;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id )arg3;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id )arg3;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id )arg3;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id )arg3;
- (id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id )arg2;
- (id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id )arg2;
- (id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id )arg2;
- (id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id )arg2;
- (id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id )arg2;
- (id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id )arg2;
- (id)fetchAllListsWithExternalIdentifier:(id)arg1 error:(id )arg2;
- (void)requestToDeleteLocalDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)requestToDeleteSyncDataWithAccountIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_triggerSyncWithReason:(id)arg1 forcingCloudKitReload:(BOOL)arg2 discretionary:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)removeOrphanedAccountsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)deleteAccountWithAccountID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateAccountWithAccountID:(id)arg1 restartDA:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)updateAccountWithAccountID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateAccountsAndFetchMigrationState:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateAccountsAndSync:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)triggerSyncForDataAccessAccountsWithAccountIDs:(id)arg1;
- (void)triggerThrottledSyncWithReason:(id)arg1 discretionary:(BOOL)arg2 WithCompletion:(id /* CDUnknownBlockType */)arg3;
- (id)replicaManagerProviderForCalDAVSync;

@end

