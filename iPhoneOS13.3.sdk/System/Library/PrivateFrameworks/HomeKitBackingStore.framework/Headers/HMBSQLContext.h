//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMFUnfairLock, NSOperationQueue, NSString, NSURL;

@interface HMBSQLContext : HMFObject <HMFLogging>
{
    struct sqlite3_stmt _begin;
    struct sqlite3_stmt _commit;
    struct sqlite3_stmt _rollback;
    BOOL _readOnly;
    BOOL _finalized;
    NSString *_logIdentifier;
    NSURL *_url;
    struct sqlite3 _context;
    NSOperationQueue *_queue;
    HMFUnfairLock *_lock;
    NSUInteger _mutation;
}

+ (id)logCategory;
@property(nonatomic) NSUInteger mutation; // @synthesize mutation=_mutation;
@property(nonatomic) BOOL finalized; // @synthesize finalized=_finalized;
@property(retain, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) struct sqlite3 context; // @synthesize context=_context;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
// - (void).cxx_destruct;
- (BOOL)fetchSQLite3One:(struct sqlite3_stmt )arg1 error:(id )arg2 block:(id /* CDUnknownBlockType */)arg3;
- (BOOL)fetchSQLite3:(struct sqlite3_stmt )arg1 limit:(NSUInteger)arg2 error:(id )arg3 block:(id /* CDUnknownBlockType */)arg4;
- (BOOL)fetchSQLite3:(struct sqlite3_stmt )arg1 error:(id )arg2 block:(id /* CDUnknownBlockType */)arg3;
- (NSUInteger)insertSQLite3:(struct sqlite3_stmt )arg1 error:(id )arg2;
- (BOOL)runSQLite3:(const char )arg1 error:(id )arg2;
- (NSUInteger)execSQLite3:(struct sqlite3_stmt )arg1 error:(id )arg2;
- (id)execSQLite3:(struct sqlite3_stmt )arg1;
- (id)runSQLite3:(const char )arg1;
- (void)rollback;
- (id)commit;
- (id)begin;
- (id)sqlTransactionWithActivity:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)sqlTransaction:(id /* CDUnknownBlockType */)arg1;
- (id)sqlBlockWithActivity:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)sqlBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_prepareFrom:(id)arg1;
- (BOOL)updateSchemaVersionTo:(long long)arg1 error:(id )arg2;
- (long long)migrateFromSchemaVersion:(long long)arg1 error:(id )arg2;
- (id)prepare;
- (id)initialize;
- (void)_finalize;
- (void)finalize;
- (void)close;
- (void)dealloc;
- (id)initWithURL:(id)arg1 readOnly:(BOOL)arg2;

@end

