//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Engram/ENGroupContextCacheMiddleware-Protocol.h>

@class NSPersistentContainer;
@protocol OS_dispatch_queue;

@interface ENGroupContextCoreDataCache : NSObject <ENGroupContextCacheMiddleware>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSPersistentContainer *_container;
}

@property(retain, nonatomic) NSPersistentContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(id /* CDUnknownBlockType */)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (long long)middlewareCacheCostForContext:(id)arg1;
- (void)_groupFromCypher:(id)arg1 groupID:(id)arg2 applicationData:(id)arg3 context:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)loadWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithType:(NSUInteger)arg1 containerURL:(id)arg2 queue:(id)arg3;
- (id)initInMemoryCacheWithQueue:(id)arg1;
- (id)initOnDiskCacheWithContainerURL:(id)arg1 Queue:(id)arg2;

@end

