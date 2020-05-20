//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>

@class HDConceptIndexer, HDProfile, HKObserverSet, NSMutableArray;
@protocol HDBlockDispatcher;

@interface HDConceptIndexManager : NSObject <HDDataObserver>
{
    id <HDBlockDispatcher> _dispatcher;
    NSUInteger _batchSize;
    HDProfile *_profile;
    BOOL _isEnabled;
    HKObserverSet *_observerSet;
    NSMutableArray *_completionBlocks;
//     struct os_unfair_lock_s _executionStateLock;
    NSUInteger _executionState;
    HDConceptIndexer *_conceptIndexer;
}

+ (void)_updateConceptIndexWithBlockDispatcher:(id)arg1 conceptIndexer:(id)arg2 batchSize:(long long)arg3 initialCount:(long long)arg4 completion:(id /* CDUnknownBlockType */)arg5;
@property(readonly, nonatomic) HDConceptIndexer *conceptIndexer; // @synthesize conceptIndexer=_conceptIndexer;
// - (void).cxx_destruct;
- (void)stopWithDescription:(id)arg1;
- (void)startWithDescription:(id)arg1;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) NSUInteger currentExecutionState;
- (void)invalidateAndWait;
- (void)setEnabled:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resetWithReindex:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateConceptIndexWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)updateWithDescription:(id)arg1;
- (id)initWithBlockDispatcher:(id)arg1 batchSize:(NSUInteger)arg2 profile:(id)arg3;
- (id)init;

@end

