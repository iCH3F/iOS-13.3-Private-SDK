//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RERelevanceProviderManagerProperties-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSString, REFeatureSet, REPriorityQueue, RERelevanceProviderEnvironment, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface RERelevanceProviderManager : NSObject <RERelevanceProviderManagerProperties>
{
    RERelevanceProviderEnvironment *_environment;
    NSHashTable *_providers;
    REPriorityQueue *_scheduledUpdates;
    REUpNextTimer *_updateTimer;
    NSArray *_effectiveFeatures;
    NSDictionary *_inflectionValues;
    BOOL _dataStoresOpened;
    BOOL _hasSeperateRelevanceQueue;
    BOOL _implementsPrepareForUpdate;
    NSObject<OS_dispatch_queue> *_relevanceQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_loggingHeader;
    REFeatureSet *_supportedFeatures;
}

+ (BOOL)supportsHistoricProviders;
+ (BOOL)_supportsHistoricProviders;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (BOOL)_requiresLocationServices;
+ (BOOL)_wantsDelayedUpdate;
+ (id)_dependencyClasses;
+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (id)providerManagerClasses;
+ (void)setProviderManagerClassesLoadingBlock:(id /* CDUnknownBlockType */)arg1;
@property(retain, nonatomic) REFeatureSet *supportedFeatures; // @synthesize supportedFeatures=_supportedFeatures;
// - (void).cxx_destruct;
- (void)_loadLoggingHeader;
- (void)_accessQueue_scheduleUpdate:(id)arg1;
- (void)_accessQueue_resetTimer;
- (void)_accessQueue_performUpdate:(id)arg1;
- (void)_accessQueue_performPendingUpdatesAndScheduleTimerIfNeeded;
- (void)_accessQueue_performImmediateUpdate:(id)arg1;
- (void)_accessQueue_appendCompletionHandlerForScheduledUpdate:(id)arg1;
- (void)_relevanceQueue_openDataStores;
@property(readonly, nonatomic) NSUInteger scheduledUpdatesCount;
@property(readonly, nonatomic) BOOL dataSourcesOpened;
@property(readonly, nonatomic) NSArray *allRelevanceProviders;
- (id)description;
- (void)_prepareForUpdateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_removeAllPendingUpdates;
- (void)_scheduleUpdate:(id)arg1;
- (void)_handleSignificantTimeChange;
- (void)pauseWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)resumeWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)finishFetchingData;
- (void)beginFetchingData;
- (void)_enumerateProviders:(id /* CDUnknownBlockType */)arg1;
- (void)_prepareForUpdate;
- (void)_removeProvider:(id)arg1;
- (void)_addedProvider:(id)arg1;
- (id)_manager_queue;
- (BOOL)_dataSourcesOpened;
- (void)_closeDataStoresAndObserveChanges;
- (void)_openDataStoresAndObserveChanges;
- (void)resume;
- (void)pause;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_isValidProvider:(id)arg1;
- (void)enumerateInflectionFeatureValues:(id /* CDUnknownBlockType */)arg1;
- (void)endActivity:(id)arg1;
- (void)beginActivity:(id)arg1;
@property(nonatomic) __weak RERelevanceProviderEnvironment *environment;
- (void)relevanceForHistoricProvider:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)isProviderHistoric:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSArray *allProviders;
- (id)relevanceForProvider:(id)arg1 context:(id)arg2;
- (void)relevanceForProvider:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)containsProvider:(id)arg1;
- (void)removeProvider:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addProvider:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSArray *effectiveFeatures;
- (id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (BOOL)_isHistoricProvider:(id)arg1;
- (id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (float)_relevanceForProvider:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

