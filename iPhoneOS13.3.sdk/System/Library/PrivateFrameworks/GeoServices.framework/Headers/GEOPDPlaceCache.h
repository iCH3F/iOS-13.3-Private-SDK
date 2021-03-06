//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPDPlaceCacheManifestInfoProviding-Protocol.h>
#import <GeoServices/GEOPDPlaceCacheSchedulingDelegate-Protocol.h>

@class GEOSQLiteDB, NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol GEOPDPlaceCacheManifestInfoProviding, GEOPDPlaceCacheSchedulingDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCache : NSObject <GEOPDPlaceCacheSchedulingDelegate, GEOPDPlaceCacheManifestInfoProviding>
{
    GEOSQLiteDB *_db;
    id <GEOPDPlaceCacheSchedulingDelegate> _schedulingDelegate;
    id <GEOPDPlaceCacheManifestInfoProviding> _manifestInfoProvider;
    NSObject<OS_dispatch_source> *_cleanupTimer;
    NSMutableDictionary *_accessTimesDict;
    NSMutableOrderedSet *_recentlySeenPlaceHashes;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *serviceVersions;
- (void)cancelCleanupBlockSchedule;
- (void)runCleanupBlock:(id /* CDUnknownBlockType */)arg1 inSecondsFromNow:(long long)arg2;
- (long long)currentTime;
- (id)internalSerialQueue;
- (void)iterateAllHandleKeysWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)iterateAllPhoneKeysWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)iterateAllBasemapIdKeysWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)iterateAllMUIDKeysWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)iterateAllKeysWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_iterateAllKeysFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(id /* CDUnknownBlockType */)arg2 finishedBlock:(id /* CDUnknownBlockType */)arg3;
- (void)iterateHandlePlacesWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)iteratePhonePlacesWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)iterateBasemapIdPlacesWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)iterateMUIDPlacesWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)iterateAllPlacesWithBlock:(id /* CDUnknownBlockType */)arg1 finishedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_iterateAllPlacesFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(id /* CDUnknownBlockType */)arg2 finishedBlock:(id /* CDUnknownBlockType */)arg3;
- (void)close;
- (void)_evictPlace:(id)arg1;
- (void)periodicCleanupAndAccessTimeUpdate;
- (void)scheduleCleanup;
- (void)enqueueAccessTimeUpdateForCacheKey:(id)arg1 accessTime:(long long)arg2;
- (void)evictAllEntries;
- (void)deletePhoneNumberMapping;
- (NSUInteger)_shrinkBySize:(NSUInteger)arg1;
- (NSUInteger)shrinkBySizeSync:(NSUInteger)arg1;
- (void)shrinkBySize:(NSUInteger)arg1 finished:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)_calculateFreeableSpace;
- (NSUInteger)calculateFreeableSpaceSync;
- (void)calculateFreeableSpaceWithHandler:(id /* CDUnknownBlockType */)arg1;
- (id)lookupIdentifierByPhoneNumber:(id)arg1;
- (id)lookupPlaceByHandle:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL )arg3;
- (id)lookupPlaceByIdentifier:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL )arg3;
- (id)lookupPlaceByPhoneNumber:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL )arg3;
- (id)lookupPlaceByRequest:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL )arg3;
- (id)_lookupPlaceByRequestKey:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL )arg3;
- (void)storePlace:(id)arg1 forRequest:(id)arg2 completionQueue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)storePlace:(id)arg1 forRequest:(id)arg2;
- (void)trackPlace:(id)arg1 completionQueue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)trackPlace:(id)arg1;
- (id)_cacheKeyForHandle:(id)arg1;
- (id)_cacheKeysForPlace:(id)arg1;
- (void)_storePlace:(id)arg1 forRequestKeys:(id)arg2;
- (BOOL)_meetsManifestVersionPolicyForPlace:(id)arg1;
- (BOOL)_deleteAndResetDB:(id)arg1;
- (BOOL)_validateDBLocaleAndResetIfNecessary;
- (void)_localeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithCacheFilePath:(id)arg1 schedulingDelegate:(id)arg2 manifestInfoProvider:(id)arg3;

@end

