//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

#import <RelevanceEngine/REElementRelevanceEngineProperties-Protocol.h>
#import <RelevanceEngine/REFeatureTransformerInvalidationDelegate-Protocol.h>
#import <RelevanceEngine/REMLModelManagerDataStore-Protocol.h>
#import <RelevanceEngine/REMLModelManagerObserver-Protocol.h>
#import <RelevanceEngine/REPredictorObserver-Protocol.h>
#import <RelevanceEngine/RERelevanceProviderEnvironmentDelegate-Protocol.h>
#import <RelevanceEngine/RESectionDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, REDataSourceManager, REFeatureSet, REFeatureTransmuter, REKeyMultiValueMap, REPredictorManager, RERelevanceProviderEnvironment, REUpNextScheduler;
@protocol OS_dispatch_queue, REElementRelevanceEngineDelegate;

@interface REElementRelevanceEngine : RERelevanceEngineSubsystem <RESectionDelegate, RERelevanceProviderEnvironmentDelegate, REMLModelManagerObserver, REPredictorObserver, REElementRelevanceEngineProperties, REFeatureTransformerInvalidationDelegate, REMLModelManagerDataStore>
{
    NSMutableSet *_elementsNeedingRelevanceUpdate;
    NSMutableDictionary *_sections;
    NSMutableDictionary *_predictedElements;
    NSMapTable *_relevanceProviderElementMap;
    REKeyMultiValueMap *_identifierElementIdentifierMap;
    REFeatureSet *_persistenceFeatures;
    REPredictorManager *_predictorManager;
    RERelevanceProviderEnvironment *_providerEnvironment;
    REDataSourceManager *_dataSourceManager;
    REFeatureTransmuter *_featureTransmuter;
    REUpNextScheduler *_scheduler;
    REUpNextScheduler *_predictorUpdatedScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _deviceIsLocked;
    BOOL _ignoreDeviceLockState;
    id <REElementRelevanceEngineDelegate> _delegate;
}

@property(nonatomic) __weak id <REElementRelevanceEngineDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) RERelevanceProviderEnvironment *providerEnvironment;
@property(readonly, nonatomic) REPredictorManager *predictorManager;
@property(readonly, nonatomic) NSDictionary *sectionsMap;
- (id)elementRankerForSection:(id)arg1;
- (id)predictionForElement:(id)arg1;
- (id)featureProviderForElement:(id)arg1;
- (id)_generateFeatureMapForElement:(id)arg1;
- (id)featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)_queue_featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)_queue_featureMapForElementWithId:(id)arg1 trainingContext:(id)arg2;
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;
- (void)sectionDidUpdateContentOrder:(id)arg1;
- (void)_onqueue_async:(id /* CDUnknownBlockType */)arg1;
- (id)_allCurrentElements;
- (void)_performUpdatesToDelegate:(id /* CDUnknownBlockType */)arg1;
- (void)_queue_updateElementRelevance;
- (void)_queue_scheduleRelevanceUpdateForElement:(id)arg1;
- (BOOL)_elementIsFullyLoaded:(id)arg1;
- (void)relevanceEnvironment:(id)arg1 didUpdateRelevanceProvider:(id)arg2;
- (void)featureTransformerDidInvalidate:(id)arg1;
- (void)predictorDidUpdate:(id)arg1;
- (void)predictor:(id)arg1 didFinishActivity:(id)arg2;
- (void)predictor:(id)arg1 didBeginActivity:(id)arg2;
- (void)_updateStateBasedOnPredictor;
- (void)_checkPreferences;
- (void)pause;
- (void)resume;
- (id)sectionForElement:(id)arg1;
- (id)pathForElement:(id)arg1;
- (void)removeElement:(id)arg1;
- (void)reloadElement:(id)arg1 withElement:(id)arg2;
- (void)addElement:(id)arg1 section:(id)arg2;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (void)_enumerateAndGenerateSectionComparators:(id /* CDUnknownBlockType */)arg1;
- (BOOL)modelManager:(id)arg1 saveDataStoreToURL:(id)arg2 error:(id )arg3;
- (BOOL)modelManager:(id)arg1 loadDataStoreFromURL:(id)arg2 error:(id )arg3;
- (id)dataStoreKey;
- (id)elementAtPath:(id)arg1;
- (NSUInteger)numberOfElementsInSection:(id)arg1;
@property(readonly, nonatomic) NSArray *sections;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)_elementIdentifierForIdentifier:(id)arg1;
- (id)_identifierForElementIdentifier:(id)arg1;
- (id)relevanceProviderEnvironment;
- (id)featureMapForPredictedElement:(id)arg1 trainingContext:(id)arg2;
- (void)refreshContent;

@end

