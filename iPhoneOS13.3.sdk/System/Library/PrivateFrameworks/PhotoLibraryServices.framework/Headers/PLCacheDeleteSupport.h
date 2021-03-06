//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PLPhotoLibrary;

@interface PLCacheDeleteSupport : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    struct fsid _fsid;
    NSDate *_exitDeleteTime;
}

+ (id)_purgeableResourceDirectoriesForPathManager:(id)arg1;
+ (id)purgeableStateDescriptionForFile:(id)arg1;
+ (BOOL)isPurgeableFile:(id)arg1 outIsPhotoType:(BOOL )arg2 outUrgencyLevel:(long long )arg3;
+ (BOOL)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)arg1;
+ (void)registerNullHandler;
@property(copy, nonatomic) NSDate *exitDeleteTime; // @synthesize exitDeleteTime=_exitDeleteTime;
// - (void).cxx_destruct;
- (void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg1;
- (void)_rescanResourcesFromFileSystem;
- (BOOL)_isFilePurgedForFileID:(id)arg1 purgedPath:(id)arg2;
- (void)_processRemovedFiles:(id)arg1 inMountPoint:(id)arg2;
- (void)_installPurgeObserverAndProcessAlreadyRemovedFiles;
- (BOOL)clearPurgeableFlagsForAllResources;
- (BOOL)clearPurgeableFlagForResource:(id)arg1;
- (BOOL)markResourceAsPurgeable:(id)arg1 withUrgency:(long long)arg2;
- (id)initWithPhotoLibrary:(id)arg1 cplStatus:(id)arg2;

@end

