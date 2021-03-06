//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOCountryConfiguration, GEOResourceManifestManager, GEOSQLiteDB, NSMutableDictionary, NSString, NSURL, _GEOTileDBWriteQueue, geo_isolater;

@interface GEOTileDB : NSObject
{
    GEOSQLiteDB *_db;
    _GEOTileDBWriteQueue *_writeQueue;
    NSUInteger _maxDatabaseSize;
    NSUInteger _tileDataSize;
    BOOL _tileDataSizeIsValid;
    GEOCountryConfiguration *_countryConfiguration;
    GEOResourceManifestManager *_manifestManager;
    geo_isolater *_infrequentlyChangingMetadataIsolater;
    CDStruct_e4886f83 _expirationRecords;
    NSUInteger _expirationRecordsCount;
    BOOL _preloading;
    NSString *_devicePostureLocale;
    NSString *_devicePostureCountry;
    NSString *_devicePostureRegion;
    NSMutableDictionary *_editionsMap;
    NSURL *_baseDirectory;
    NSURL *_externalDataDirectory;
}

// - (void).cxx_destruct;
- (void)enumerateAllKeysIncludingData:(BOOL)arg1 onQueue:(id)arg2 group:(id)arg3 dataHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_enumerateAllKeysOnQueueIncludingData:(BOOL)arg1 dataHandler:(id /* CDUnknownBlockType */)arg2 callbackQueue:(id)arg3;
- (void)_evictVeryOldTiles;
- (void)evictVeryOldTilesWithGroup:(id)arg1;
- (void)_invalidateAllTileData;
- (BOOL)_deleteAndRecreateDB;
- (void)_setEdition:(unsigned int)arg1 forTileSet:(unsigned int)arg2;
- (void)_deleteTileSet:(unsigned int)arg1;
- (void)_invalidateTileSet:(unsigned int)arg1;
- (void)_invalidateTileSetsForNewDevicePostureCountry:(id)arg1 newDevicePostureRegion:(id)arg2 oldDevicePostureCountry:(id)arg3 oldDevicePostureRegion:(id)arg4;
- (void)_updateDevicePosture;
- (void)evaluateDevicePostureAgainstCurrentManifest:(id)arg1;
- (void)_flushPendingWrites;
- (void)flushPendingWritesWithGroup:(id)arg1;
- (void)_deleteDataOnDBQueueForKey:(const struct _GEOTileKey )arg1;
- (void)deleteDataForKey:(const struct _GEOTileKey )arg1;
- (void)_setLastAccessTimeOnDBQueue:(double)arg1 forKey:(const struct _GEOTileKey )arg2;
- (void)_addDataOnDBQueueWithData:(id)arg1 key:(const struct _GEOTileKey )arg2 tileSet:(unsigned int)arg3 ETag:(id)arg4 reason:(unsigned char)arg5;
- (BOOL)_markExistingTileDataAsCurrentOnDBQueue:(const struct _GEOTileKey )arg1 reason:(unsigned char)arg2;
- (void)getStaleTileKeysUsedSince:(double)arg1 fromTileSets:(id)arg2 maxCount:(NSUInteger)arg3 maxTotalSize:(NSUInteger)arg4 queue:(id)arg5 callback:(id /* CDUnknownBlockType */)arg6;
- (void)getLastAccessTimestampForKey:(const struct _GEOTileKey )arg1 callbackQueue:(id)arg2 callback:(id /* CDUnknownBlockType */)arg3;
- (void)addData:(id)arg1 forKey:(const struct _GEOTileKey )arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6 reason:(unsigned char)arg7 isIdenticalToExistingStaleData:(BOOL)arg8;
- (void)addData:(id)arg1 forKey:(const struct _GEOTileKey )arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6 reason:(unsigned char)arg7;
- (void)dataForKeys:(id)arg1 reason:(unsigned char)arg2 group:(id)arg3 callbackQueue:(id)arg4 dataHandler:(id /* CDUnknownBlockType */)arg5;
- (BOOL)_dataForKeyOnDBQueue:(const struct _GEOTileKey )arg1 reason:(unsigned char)arg2 callbackQueue:(id)arg3 dataHandler:(id /* CDUnknownBlockType */)arg4;
- (NSUInteger)calculateFreeableSizeSync;
- (void)calculateFreeableSizeWithQueue:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)_shrinkBySizeSlow:(NSUInteger)arg1;
- (NSUInteger)_shrinkBySize:(NSUInteger)arg1;
- (NSUInteger)_shrinkToSize:(NSUInteger)arg1;
- (void)_evictIfNecessary;
- (void)_decrementCalculatedTileDataSize:(NSUInteger)arg1;
- (void)_incrementCalculatedTileDataSize:(NSUInteger)arg1;
- (NSUInteger)_allTileDataSize;
- (NSUInteger)shrinkBySizeSync:(NSUInteger)arg1;
- (NSUInteger)shrinkToSizeSync:(NSUInteger)arg1;
- (void)shrinkBySize:(NSUInteger)arg1 queue:(id)arg2 callback:(id /* CDUnknownBlockType */)arg3;
- (void)shrinkToSize:(NSUInteger)arg1 queue:(id)arg2 finished:(id /* CDUnknownBlockType */)arg3;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(NSUInteger)arg1;
- (BOOL)_isTileSetTTLExpired:(unsigned int)arg1 age:(double)arg2;
- (void)setExpirationRecords:(CDStruct_e4886f83 )arg1 count:(NSUInteger)arg2;
@property(readonly, nonatomic) NSString *devicePostureRegion;
@property(readonly, nonatomic) NSString *devicePostureCountry;
- (void)_editionUpdate:(id)arg1;
- (void)_countryChanged:(id)arg1;
- (void)_deviceLocked:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_cleanUpOrphanedExternalResources;
- (void)_performInTransaction:(id /* CDUnknownBlockType */)arg1;
- (void)_performOnDBQueue:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_setup:(id)arg1;
- (id)_setupDB:(id)arg1;
- (void)tearDown;
- (id)initWithBaseDirectory:(id)arg1 manifestManager:(id)arg2 countryConfiguration:(id)arg3 maximumDatabaseSize:(NSUInteger)arg4;
- (id)initWithBaseDirectory:(id)arg1;
- (id)init;

@end

