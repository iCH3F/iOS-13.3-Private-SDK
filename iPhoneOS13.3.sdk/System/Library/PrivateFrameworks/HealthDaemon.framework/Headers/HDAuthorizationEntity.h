//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAuthorizationEntity : HDHealthEntity
{
}

+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)_predicateForTypes:(id)arg1;
+ (id)_predicateForType:(id)arg1;
+ (id)_predicateForSourceEntities:(id)arg1 types:(id)arg2;
+ (id)_predicateForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (id)_predicateForSourceEntities:(id)arg1;
+ (void)_addAuthorizationWithRow:(struct HDSQLiteRow )arg1 toCodableCollection:(id)arg2;
+ (id)_propertiesForCodableAuthorization;
+ (BOOL)_resetAuthorizationStatusesWithPredicate:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (BOOL)_setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 authorizationModes:(id)arg3 sourceEntity:(id)arg4 dateModified:(id)arg5 syncProvenance:(long long)arg6 objectAnchor:(long long)arg7 options:(NSUInteger)arg8 profile:(id)arg9 database:(id)arg10 error:(id )arg11;
+ (id)_nextModificationEpochForSourceIdentifier:(long long)arg1 type:(long long)arg2 profile:(id)arg3 database:(id)arg4 error:(id )arg5;
+ (BOOL)_insertAuthorizationWithSourceIdentifier:(long long)arg1 dataTypeCode:(long long)arg2 authorizationStatus:(long long)arg3 authorizationRequest:(long long)arg4 authorizationMode:(long long)arg5 modificationDate:(id)arg6 currentDate:(id)arg7 syncProvenance:(long long)arg8 objectAnchor:(long long)arg9 modificationEpoch:(id)arg10 options:(NSUInteger)arg11 profile:(id)arg12 database:(id)arg13 error:(id )arg14;
+ (BOOL)_insertCodableAuthorizations:(id)arg1 sourceEntity:(id)arg2 syncProvenance:(long long)arg3 objectAnchor:(long long)arg4 currentDate:(id)arg5 options:(NSUInteger)arg6 profile:(id)arg7 database:(id)arg8 error:(id )arg9;
+ (id)_sourceEntityForCodableSourceAuthorization:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id )arg5;
+ (BOOL)_insertCodableSourceAuthorizations:(id)arg1 overwriteExisting:(BOOL)arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id )arg5;
+ (BOOL)resetAllAuthorizationStatusesWithProfile:(id)arg1 error:(id )arg2;
+ (BOOL)resetAuthorizationStatusesForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (id)_allSourcesRequestingTypes:(id)arg1 additionalPredicate:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (id)allSourcesRequestingTypes:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (id)authorizationRecordsBySourceForType:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (BOOL)setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 authorizationModes:(id)arg3 sourceEntity:(id)arg4 options:(NSUInteger)arg5 profile:(id)arg6 error:(id )arg7;
+ (id)_maxObjectPersistentIDForProfile:(id)arg1 error:(id )arg2;
+ (BOOL)setAuthorizationStatuses:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (id)modificationDateForSourceEntity:(id)arg1 type:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (id)readAuthorizationStatusesByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (id)authorizationRecordsByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (id)authorizationStatusesForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id )arg4;

@end

