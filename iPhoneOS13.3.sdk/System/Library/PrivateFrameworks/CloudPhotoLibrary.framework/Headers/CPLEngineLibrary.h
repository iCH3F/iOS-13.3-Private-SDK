//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLStatusDelegate-Protocol.h>

@class CPLConfiguration, CPLEngineFeedbackManager, CPLEngineScheduler, CPLEngineStore, CPLEngineSyncManager, CPLEngineSystemMonitor, CPLEngineTransport, CPLPlatformObject, CPLStatus, NSArray, NSDate, NSError, NSHashTable, NSString, NSURL;
@protocol CPLEngineLibraryOwner, OS_dispatch_queue;

@interface CPLEngineLibrary : NSObject <CPLStatusDelegate, CPLAbstractObject>
{
    NSArray *_components;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_closingQueue;
    NSHashTable *_attachedObjects;
    NSError *_openingError;
    CPLStatus *_status;
    BOOL _closed;
    BOOL _totalAssetCountHasBeenCalculated;
    NSDate *_cachedLastQuarantineCountReportDate;
    NSUInteger _totalAssetCount;
    BOOL _libraryIsCorrupted;
    CPLPlatformObject *_platformObject;
    NSString *_currentClosingComponentName;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    NSUInteger _libraryOptions;
    id <CPLEngineLibraryOwner> _owner;
    CPLEngineStore *_store;
    CPLEngineScheduler *_scheduler;
    CPLEngineSyncManager *_syncManager;
    CPLEngineTransport *_transport;
    CPLEngineSystemMonitor *_systemMonitor;
    CPLEngineFeedbackManager *_feedback;
    CPLConfiguration *_configuration;
}

+ (id)platformImplementationProtocol;
@property(readonly, nonatomic) BOOL libraryIsCorrupted; // @synthesize libraryIsCorrupted=_libraryIsCorrupted;
@property(readonly, nonatomic) CPLConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CPLEngineFeedbackManager *feedback; // @synthesize feedback=_feedback;
@property(readonly, nonatomic) CPLEngineSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(readonly, nonatomic) CPLEngineTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) CPLEngineSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(readonly, nonatomic) CPLEngineScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <CPLEngineLibraryOwner> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSUInteger libraryOptions; // @synthesize libraryOptions=_libraryOptions;
@property(readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // @synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // @synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL;
@property(readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // @synthesize clientLibraryBaseURL=_clientLibraryBaseURL;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
// - (void).cxx_destruct;
- (void)provideCloudResource:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)provideLibraryInfoForScopeWithIdentifier:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)componentName;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(NSUInteger)arg1 sizeOfOriginalResourcesToUpload:(NSUInteger)arg2 numberOfImages:(NSUInteger)arg3 numberOfVideos:(NSUInteger)arg4 numberOfOtherItems:(NSUInteger)arg5;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)notifyAttachedObjectsHasStatusChanges;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)requestAttachedLibrary;
- (void)_performBlockOnLibrary:(id /* CDUnknownBlockType */)arg1;
- (void)_performBlockWithLibrary:(BOOL)arg1 enumerateAttachedObjects:(id /* CDUnknownBlockType */)arg2;
- (void)detachObject:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)attachObject:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, copy) NSString *description;
- (void)forceFetchAccountFlags;
- (void)startSyncSession;
@property(nonatomic) BOOL iCloudLibraryExists;
@property(nonatomic) BOOL iCloudLibraryHasBeenWiped;
- (BOOL)hasAccountFlagsData;
- (void)updateAccountFlagsData:(id)arg1;
- (BOOL)hasAssetCountOnServer;
- (NSUInteger)totalAssetCountOnServer;
- (void)updateAssetCountsFromServer:(id)arg1;
- (void)_updateTotalAssetCountWithAssetCounts:(id)arg1;
- (void)updateDisabledFeatures:(id)arg1;
- (void)setLowDiskSpace:(BOOL)arg1;
- (void)setConnectedToNetwork:(BOOL)arg1;
- (void)setHasCellularBudget:(BOOL)arg1 hasBatteryBudget:(BOOL)arg2 isConstrainedNetwork:(BOOL)arg3 isBudgetValid:(BOOL)arg4;
@property(nonatomic) BOOL iCloudLibraryClientVersionTooOld;
@property(copy, nonatomic) NSDate *exitDeleteTime;
@property(nonatomic) BOOL isExceedingQuota;
@property(nonatomic) BOOL hasChangesToProcess;
- (void)reportUnsuccessfulSync;
@property(readonly, nonatomic) NSDate *initialSyncDate;
- (void)updateInitialSyncDate:(id)arg1;
- (void)updateLastSuccessfullSyncDate:(id)arg1;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly) NSString *currentClosingComponentName; // @synthesize currentClosingComponentName=_currentClosingComponentName;
- (void)_setCurrentClosingComponentName:(id)arg1;
- (void)_closeNextComponent:(id)arg1 deactivate:(BOOL)arg2 lastError:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)openWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_openNextComponent:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)reportRadar:(NSUInteger)arg1;
- (id)corruptionInfo;
- (void)reportQuarantineCountIfNecessary;
- (void)_reportQuarantineCountIfNecessaryWithLastReportDate:(id)arg1;
- (void)reportLibraryCorrupted;
- (void)statusDidChange:(id)arg1;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(NSUInteger)arg5;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_fillStatusArray:(id)arg1 forComponents:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_fillStatus:(id)arg1 forComponents:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getListOfComponentsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;

@end
