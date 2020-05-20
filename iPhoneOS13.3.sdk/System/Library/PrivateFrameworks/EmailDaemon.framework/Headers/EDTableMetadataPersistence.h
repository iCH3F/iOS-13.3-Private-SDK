//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDPersistenceDatabaseSchemaProvider-Protocol.h>

@interface EDTableMetadataPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>
{
}

+ (long long)largestDeletedRowIDForTableName:(id)arg1 withConnection:(id)arg2;
+ (BOOL)updateLargestDeletedRowID:(long long)arg1 forTableName:(id)arg2 withConnection:(id)arg3;
+ (id)tablesAndForeignKeysToResolve:(id )arg1 associationsToResolve:(id )arg2;

@end

