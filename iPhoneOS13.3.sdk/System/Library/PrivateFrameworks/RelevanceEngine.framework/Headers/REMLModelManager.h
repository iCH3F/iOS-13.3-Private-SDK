//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

#import <RelevanceEngine/REMLModelManagerProperties-Protocol.h>

@class NSArray, NSDate, NSObject, NSString, REContentRanker, REMLLinearModel, REMLMetricsSet, REMLModel, REObserverStore;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMLModelManager : RERelevanceEngineSubsystem <REMLModelManagerProperties>
{
    REMLLinearModel *_model;
    REContentRanker *_contentRanker;
    REMLMetricsSet *_metrics;
    NSObject<OS_dispatch_queue> *_trainingQueue;
    REObserverStore *_observers;
    NSString *_modelFileLocation;
    BOOL _supportsContentRanking;
    NSArray *_orderedFeatures;
    NSUInteger _modelStorageBehavior;
    REObserverStore *_dataStores;
    id <RERelevanceEngineMetricsRecorder> _metricsRecoder;
    NSDate *_lastCacheResetDate;
    NSUInteger _modelVersionNumber;
    BOOL _validModel;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *orderedFeatures;
@property(readonly, nonatomic) BOOL supportsContentRanking;
@property(readonly, nonatomic) REContentRanker *contentRanker;
@property(readonly, nonatomic) REMLModel *model;
@property(readonly, nonatomic) NSUInteger modelVersionNumber;
- (id)predicitionForLogicalElement:(id)arg1;
- (id)sentimentAnalyzer;
- (id)comparatorWithRules:(id)arg1;
- (void)performModelClearWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)manuallySaveModel;
- (void)_notifyObserversThatModelUpdated;
- (void)performTrainingWithFeatureMaps:(id)arg1 content:(id)arg2 events:(id)arg3 interactions:(id)arg4 purgeCaches:(BOOL)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)flushTraining;
- (BOOL)_saveModelToDisk:(id )arg1;
- (id)createOutputFeatureFromDouble:(double)arg1 error:(id )arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_createOrderFeatureListFromModelFileURL:(id)arg1 mlFeatures:(id)arg2;
- (BOOL)_loadModelAtPath:(id)arg1 mlFeatures:(id)arg2 checkModelVersion:(BOOL)arg3;
- (void)_saveDataStoresToURL:(id)arg1;
- (void)removeDataStore:(id)arg1;
- (void)addDataStore:(id)arg1;
- (void)_logMetrics;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)_orderedModelFeatures;

@end

