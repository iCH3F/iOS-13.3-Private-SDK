//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject
{
    NSString *_cachedSalt;
    NSObject<OS_dispatch_queue> *_ckQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
@property(retain) NSString *cachedSalt; // @synthesize cachedSalt=_cachedSalt;
- (void)deleteDeDupeRecordZone;
- (void)clearLocalSyncState;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* CDUnknownBlockType */)arg1 forceFetch:(BOOL)arg2;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)_container;
- (void)_scheduleOperation:(id)arg1;
- (id)_CKUtilitiesSharedInstance;
- (void)dealloc;
- (id)init;

@end

