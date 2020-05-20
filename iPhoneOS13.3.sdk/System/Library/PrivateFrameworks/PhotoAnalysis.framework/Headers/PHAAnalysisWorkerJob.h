//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAAssetProcessingJob.h>

@class NSDictionary, NSMutableDictionary;

@interface PHAAnalysisWorkerJob : PHAAssetProcessingJob
{
    BOOL _persistsAnalysisState;
    BOOL _canUseNetwork;
    BOOL _shouldBackoffForFailedNoResourceErrors;
    NSDictionary *_workerFlagsByAssetLocalIdentifier;
    NSMutableDictionary *_ignoreUntilDatesByAssetLocalIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *ignoreUntilDatesByAssetLocalIdentifier; // @synthesize ignoreUntilDatesByAssetLocalIdentifier=_ignoreUntilDatesByAssetLocalIdentifier;
@property(readonly, nonatomic) NSDictionary *workerFlagsByAssetLocalIdentifier; // @synthesize workerFlagsByAssetLocalIdentifier=_workerFlagsByAssetLocalIdentifier;
@property(readonly, nonatomic) BOOL shouldBackoffForFailedNoResourceErrors; // @synthesize shouldBackoffForFailedNoResourceErrors=_shouldBackoffForFailedNoResourceErrors;
@property(readonly, nonatomic) BOOL canUseNetwork; // @synthesize canUseNetwork=_canUseNetwork;
@property(nonatomic) BOOL persistsAnalysisState; // @synthesize persistsAnalysisState=_persistsAnalysisState;
// - (void).cxx_destruct;
- (id)ignoreUntilDateForAssetLocalIdentifier:(id)arg1;
- (void)setIgnoreUntilDate:(id)arg1 forAssetLocalIdentifier:(id)arg2;
- (int)workerFlagsForAssetLocalIdentifier:(id)arg1;
- (id)dataLoaderOptions;
- (void)finish;
- (void)prepare;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id )arg2;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id )arg2;
- (id)statusAsDictionary;
- (id)description;
- (id)initWithWorkerType:(short)arg1 scenario:(NSUInteger)arg2 workInfos:(id)arg3 canUseNetwork:(BOOL)arg4 shouldBackoffForFailedNoResource:(BOOL)arg5 library:(id)arg6;
- (id)_resultsDescription;
- (void)_processFailures;
- (void)_markAssetsPending;
- (id)_fetchAllAssetsForLocalIdentifiers:(id)arg1;

@end

