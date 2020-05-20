//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableArray *_transportTasks;
    BOOL _shouldStop;
    NSError *_badError;
    NSError *_stopError;
    BOOL _hasResetQueue;
    NSUInteger _successfullyDownloadedResourcesCount;
    NSUInteger _failedDownloadedResourcesCount;
    NSUInteger _total;
    NSUInteger _activeTransferTaskCount;
    NSUInteger _transportTaskCount;
}

// - (void).cxx_destruct;
- (id)description;
- (id)taskIdentifier;
- (void)cancel;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_transportTaskDidFinish:(id)arg1;
- (void)_downloadTask:(id)arg1 didFinishWithErrorLocked:(id)arg2;
- (void)_updateActiveDownloadTaskCount;
- (void)_enqueueTasksLocked;
- (void)_completeBackgroundDownloadForResource:(id)arg1 error:(id)arg2 withTransaction:(id)arg3;
- (BOOL)_isErrorCountingForARetry:(id)arg1;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1;
- (void)_finishTaskLocked;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;

@end

