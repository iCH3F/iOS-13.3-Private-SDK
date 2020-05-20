//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSPersistentStoreCoordinator, NSURL;

__attribute__((visibility("hidden")))
@interface ACDDatabaseMigrator : NSObject
{
    NSManagedObjectContext *_migrationContext;
    NSPersistentStoreCoordinator *_privateCoordinator;
    NSURL *_databaseURL;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSDictionary *_storeOptions;
}

+ (id)new;
@property(readonly, copy, nonatomic) NSDictionary *storeOptions; // @synthesize storeOptions=_storeOptions;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
// - (void).cxx_destruct;
- (void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2;
- (long long)_versionForModel:(id)arg1;
- (id)_compatibleModelForStoreAtURL:(id)arg1;
- (id)_setUpContextForMigration;
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;
- (id)_fetchAllDataclassEntitles;
- (void)_migrateNameAttributeOfDataclassEntities;
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;
- (BOOL)runReturningError:(id )arg1;
- (id)initForDatabaseAtURL:(id)arg1 persistentStoreCoordinator:(id)arg2 storeOptions:(id)arg3;
- (id)init;

@end

