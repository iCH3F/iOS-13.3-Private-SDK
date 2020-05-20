//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ICNotesImporterClient : NSObject
{
    NSXPCConnection *_connectionToService;
    NSObject<OS_dispatch_queue> *_requestCountQueue;
    NSUInteger _requestCount;
}

@property(nonatomic) NSUInteger requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue; // @synthesize requestCountQueue=_requestCountQueue;
// - (void).cxx_destruct;
- (void)suspendConnectionIfNeeded;
- (void)resumeConnectionIfNeeded;
- (void)cleanupArchiveId:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)unarchiveEvernoteResourceFromArchiveId:(id)arg1 resourceArchiveId:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)unarchiveEvernoteNoteFromArchiveId:(id)arg1 noteArchiveId:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)archiveEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)parseTitleFromHTMLString:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)countEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)parseHTMLStringFromEvernoteContentString:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

