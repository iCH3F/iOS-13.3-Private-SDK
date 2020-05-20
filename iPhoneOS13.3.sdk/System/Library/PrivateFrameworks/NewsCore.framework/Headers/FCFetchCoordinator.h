//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCBoostableOperationThrottlerDelegate-Protocol.h>

@class FCBoostableOperationThrottler, NFMutexLock, NSCountedSet, NSHashTable, NSMapTable;
@protocol FCFetchCoordinatorDelegate;

@interface FCFetchCoordinator : NSObject <FCBoostableOperationThrottlerDelegate>
{
    id <FCFetchCoordinatorDelegate> _delegate;
    NSUInteger _maxConcurrentFetchCount;
    NSHashTable *_fetchGroups;
    NSCountedSet *_allKeys;
    NSMapTable *_fetchOperationsByGroup;
    NFMutexLock *_accessLock;
    FCBoostableOperationThrottler *_fetchThrottler;
}

@property(retain, nonatomic) FCBoostableOperationThrottler *fetchThrottler; // @synthesize fetchThrottler=_fetchThrottler;
@property(retain, nonatomic) NFMutexLock *accessLock; // @synthesize accessLock=_accessLock;
@property(retain, nonatomic) NSMapTable *fetchOperationsByGroup; // @synthesize fetchOperationsByGroup=_fetchOperationsByGroup;
@property(retain, nonatomic) NSCountedSet *allKeys; // @synthesize allKeys=_allKeys;
@property(retain, nonatomic) NSHashTable *fetchGroups; // @synthesize fetchGroups=_fetchGroups;
@property NSUInteger maxConcurrentFetchCount; // @synthesize maxConcurrentFetchCount=_maxConcurrentFetchCount;
@property(nonatomic) __weak id <FCFetchCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)beginFetchesIfNeededWithLock;
- (void)cancelFetchesIfNeededWithLock;
- (void)removeFetchGroup:(id)arg1;
- (void)addFetchGroup:(id)arg1;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (id)fetchKeysUnconditionally:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (id)fetchKeys:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (id)fetchKey:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end
