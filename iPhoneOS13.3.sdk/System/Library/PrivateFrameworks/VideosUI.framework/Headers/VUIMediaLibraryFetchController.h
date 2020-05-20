//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation, NSOperationQueue, NSString, VUIMediaLibrary;
@protocol OS_dispatch_queue;

@interface VUIMediaLibraryFetchController : NSObject
{
    VUIMediaLibrary *_mediaLibrary;
    NSString *_identifier;
    NSString *_logName;
    NSString *_logNameSuffix;
    long long _state;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSOperationQueue *_serialFetchOperationQueue;
    NSOperation *_fetchOperation;
    NSUInteger _mediaLibraryRevision;
    NSUInteger _pauseCount;
}

+ (id)_logStringWithFetchControllers:(id)arg1;
@property(nonatomic) NSUInteger pauseCount; // @synthesize pauseCount=_pauseCount;
@property(nonatomic) NSUInteger mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(retain, nonatomic) NSOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSOperationQueue *serialFetchOperationQueue; // @synthesize serialFetchOperationQueue=_serialFetchOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *logNameSuffix; // @synthesize logNameSuffix=_logNameSuffix;
@property(copy, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
// - (void).cxx_destruct;
- (void)_enqueueSyncProcessingQueueBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enqueueProcessingQueueBlock:(id /* CDUnknownBlockType */)arg1 synchronous:(BOOL)arg2;
- (void)_fetchOperationCompleted:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_enqueueFetchWithReason:(long long)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_startFetchWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_startFetchIfNeededWithMediaLibraryRevision:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_cancelFetch;
- (void)_moveToPausedState;
- (BOOL)_shouldFetchForMediaLibraryRevision:(NSUInteger)arg1;
- (BOOL)_updateMutableArray:(id)arg1 withLatestObjects:(id)arg2 changeSet:(id)arg3 updateOnNoChanges:(BOOL)arg4;
- (void)_didCompleteFetchOperation:(id)arg1;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)cancelFetch;
- (void)beginFetchWithMediaLibraryRevision:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2 completionQueue:(id)arg3;
- (void)resume;
- (void)pause;
- (id)initWithMediaLibrary:(id)arg1;
- (id)init;

@end

