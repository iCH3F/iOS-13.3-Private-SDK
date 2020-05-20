//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMCloudKitSyncProgress, IMCloudKitSyncState, IMEventNotificationManager, IMWeakReferenceCollection, NSTimer;
@protocol IMCloudKitEventHandlerAccountInfoProvider;

@interface IMCloudKitEventNotificationManager : NSObject
{
    id <IMCloudKitEventHandlerAccountInfoProvider> _accountInfoProvider;
    double _progressPollingInterval;
    IMWeakReferenceCollection *_eventHandlers;
    IMEventNotificationManager *_notificationManager;
    NSTimer *_fetchStatsTimer;
    IMCloudKitSyncState *_previousState;
    IMCloudKitSyncProgress *_progressToSend;
}

+ (id)logHandle;
+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
@property(retain) IMCloudKitSyncProgress *progressToSend; // @synthesize progressToSend=_progressToSend;
@property(retain) IMCloudKitSyncState *previousState; // @synthesize previousState=_previousState;
@property __weak NSTimer *fetchStatsTimer; // @synthesize fetchStatsTimer=_fetchStatsTimer;
@property(retain) IMEventNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly) IMWeakReferenceCollection *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property double progressPollingInterval; // @synthesize progressPollingInterval=_progressPollingInterval;
@property __weak id <IMCloudKitEventHandlerAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
// - (void).cxx_destruct;
- (void)fetchSyncDebuggingInfo:(id)arg1;
- (void)_updateProgressWithState:(id)arg1;
- (void)_sendHiddenProgressToEventListeners;
- (void)_sendProgressToEventListeners:(id)arg1;
- (void)_sendProgressToEventListenersDeferred;
- (double)progressBroadcastDelay;
- (void)_rescheduleFetchSyncProgress;
- (BOOL)_hasProgressEventListeners;
- (void)_timerExpiredForSyncStatsFetching:(id)arg1;
- (void)_cancelStatsFetchingTimer;
- (void)fetchSyncStateStatisticsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchSyncStateStatistics;
- (void)_sendSyncStatisticsToEventHandlers:(id)arg1 error:(id)arg2;
- (void)_fetchSyncStateStatistics:(id /* CDUnknownBlockType */)arg1;
- (void)performAdditionalStorageRequiredCheck;
- (void)disableAllSyncEnabledCloudKitDevices;
@property BOOL didPromptForCloudKitSync;
- (void)startInitialSync;
- (void)startPeriodicSync;
- (BOOL)accountHasiMessageEnabled;
- (void)setCloudKitSyncEnabled:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)setCloudKitSyncEnabled:(BOOL)arg1;
- (void)fetchSyncStateAfterClearingErrorsWithRepairSuccess:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchSyncStateAfterClearingErrors;
- (void)fetchRampStateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchSyncStateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchSyncStateAfterFetchingAccountStatus;
- (void)fetchSyncState;
- (void)_syncStateDidChange:(id)arg1;
- (void)_sendSyncStateChangedEventToEventListeners:(id)arg1;
- (id)syncStateWithDictionary:(id)arg1;
@property(readonly) IMCloudKitSyncState *syncState;
- (void)visitEventHandlers:(id /* CDUnknownBlockType */)arg1;
- (void)removeEventHandler:(id)arg1;
- (void)addEventHandler:(id)arg1;
- (id)cloudKitHooks;
- (id)logHandle;
- (id)init;

@end

