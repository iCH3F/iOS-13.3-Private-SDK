//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPOperation.h>

@class FPActionOperationInfo, FPDExtensionManager, FPDRequest, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress;

@interface FPDActionOperation : FPOperation
{
    BOOL _hasFinishedPreflight;
    NSProgress *_progress;
    FPDExtensionManager *_manager;
    FPDRequest *_request;
    FPActionOperationInfo *_info;
    NSMutableArray *_clients;
    NSMutableArray *_clientCompletions;
    NSMutableDictionary *_progressByRoot;
    NSMutableDictionary *_errorsByRoot;
    NSMutableSet *_completedRoots;
    NSMutableDictionary *_createdItemByRoot;
    NSMutableDictionary *_progressCompletionsByRoot;
    NSError *_error;
    NSUInteger _logSection;
}

@property(nonatomic) NSUInteger logSection; // @synthesize logSection=_logSection;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableDictionary *progressCompletionsByRoot; // @synthesize progressCompletionsByRoot=_progressCompletionsByRoot;
@property(retain, nonatomic) NSMutableDictionary *createdItemByRoot; // @synthesize createdItemByRoot=_createdItemByRoot;
@property(retain, nonatomic) NSMutableSet *completedRoots; // @synthesize completedRoots=_completedRoots;
@property(retain, nonatomic) NSMutableDictionary *errorsByRoot; // @synthesize errorsByRoot=_errorsByRoot;
@property(retain, nonatomic) NSMutableDictionary *progressByRoot; // @synthesize progressByRoot=_progressByRoot;
@property(nonatomic) BOOL hasFinishedPreflight; // @synthesize hasFinishedPreflight=_hasFinishedPreflight;
@property(retain, nonatomic) NSMutableArray *clientCompletions; // @synthesize clientCompletions=_clientCompletions;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
@property(readonly, nonatomic) FPActionOperationInfo *info; // @synthesize info=_info;
@property(readonly, nonatomic) FPDRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) __weak FPDExtensionManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1;
- (void)registerFrameworkClient:(id)arg1 operationCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)sendPastUpdatesToClient:(id)arg1;
- (void)unregisterClientsAfterCompletion;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)forAllClients:(id /* CDUnknownBlockType */)arg1;
- (id)progressForRoot:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;

@end

