//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/BCSPersistentStore.h>

@interface BCSBusinessItemPersistentStore : BCSPersistentStore
{
}

- (BOOL)_executeDeleteBusinessItemSQLQuery:(const char )arg1 forDatabase:(struct sqlite3 )arg2;
- (BOOL)deleteBusinessItemWithPhoneNumber:(id)arg1 fromDatabase:(struct sqlite3 )arg2;
- (BOOL)deleteBusinessItemWithBizID:(id)arg1 fromDatabase:(struct sqlite3 )arg2;
- (BOOL)deleteBusinessItem:(id)arg1 fromDatabase:(struct sqlite3 )arg2;
- (id)_executeFetchPersistentBusinessItemObjectSQLQuery:(const char )arg1 forDatabase:(struct sqlite3 )arg2;
- (id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)arg1 fromDatabase:(struct sqlite3 )arg2;
- (id)fetchPersistentBusinessItemObjectWithBizID:(id)arg1 fromDatabase:(struct sqlite3 )arg2;
- (BOOL)_updateToLastRetrievedDate:(id)arg1 forBusinessItem:(id)arg2 inDatabase:(struct sqlite3 )arg3;
- (BOOL)updateLastRetrievedDateForBusinessItem:(id)arg1 inDatabase:(struct sqlite3 )arg2;
- (BOOL)updateTTL:(double)arg1 forBusinessItem:(id)arg2 inDatabase:(struct sqlite3 )arg3;
- (BOOL)_insertBusinessItem:(id)arg1 withTTL:(double)arg2 inDatabase:(struct sqlite3 )arg3;
- (BOOL)_insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 fromDatabase:(struct sqlite3 )arg3;
- (BOOL)insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 fromDatabase:(struct sqlite3 )arg3;
- (id)_databasePath;
- (const char )schema;
- (long long)schemaVersion;
- (id)databasePath;

@end

