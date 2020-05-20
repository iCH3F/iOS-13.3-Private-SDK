//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKRecordZone, NSString, _KSRequestThrottle;
@protocol OS_dispatch_queue, _KSCloudKitManagerDelegate;

@interface _KSCloudKitManager : NSObject
{
    NSObject<OS_dispatch_queue> *_ckWorkQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _KSRequestThrottle *_accountChangeThrottle;
    _KSRequestThrottle *_fetchZoneThrottle;
    BOOL _recordZoneOperationInProgress;
    BOOL _subscriptionOperationInProgress;
    CKRecordZone *_recordZone;
    id <_KSCloudKitManagerDelegate> _delegate;
    CKContainer *_cloudKitContainer;
    CKDatabase *_cloudKitDatabase;
    CKDatabase *_publicDatabase;
    NSString *_recordZoneKey;
    NSString *_subscriptionKey;
    NSString *_lastKnownUserKey;
}

+ (id)prepareContainerForID:(id)arg1;
@property(nonatomic) BOOL subscriptionOperationInProgress; // @synthesize subscriptionOperationInProgress=_subscriptionOperationInProgress;
@property(nonatomic) BOOL recordZoneOperationInProgress; // @synthesize recordZoneOperationInProgress=_recordZoneOperationInProgress;
@property(readonly, nonatomic) NSString *lastKnownUserKey; // @synthesize lastKnownUserKey=_lastKnownUserKey;
@property(readonly, nonatomic) NSString *subscriptionKey; // @synthesize subscriptionKey=_subscriptionKey;
@property(readonly, nonatomic) NSString *recordZoneKey; // @synthesize recordZoneKey=_recordZoneKey;
@property(retain, nonatomic) CKDatabase *publicDatabase; // @synthesize publicDatabase=_publicDatabase;
@property(retain, nonatomic) CKDatabase *cloudKitDatabase; // @synthesize cloudKitDatabase=_cloudKitDatabase;
@property(retain, nonatomic) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property(nonatomic) __weak id <_KSCloudKitManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKRecordZone *recordZone; // @synthesize recordZone=_recordZone;
// - (void).cxx_destruct;
- (void)_ckDeleteRecordZoneWithID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_ckSaveRecordZone:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_ckFetchRecordZoneWithID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_inconvenientOperation:(id)arg1;
- (void)fetchPublicRecordsWithNames:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_submitFetchRecordsOperation:(id)arg1 withPriority:(NSUInteger)arg2 changeToken:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4 retryCount:(NSUInteger)arg5;
- (void)fetchRecordsWithPriority:(NSUInteger)arg1 changeToken:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3 retryCount:(NSUInteger)arg4;
- (void)fetchRecordsWithPriority:(NSUInteger)arg1 changeToken:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)copyFieldsFromRecord:(id)arg1 toRecord:(id)arg2;
- (id)resolveConflicts:(id)arg1;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(NSUInteger)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4 retryCount:(NSUInteger)arg5;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(NSUInteger)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)setupSubscription;
- (void)addOperation:(id)arg1 priority:(NSUInteger)arg2;
- (void)addOperation:(id)arg1;
- (id)recordIDForName:(id)arg1;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 encryptedFields:(id)arg4;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 encryptedFields:(id)arg5;
- (void)resetZoneWithDelete:(NSUInteger)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setupRecordZoneWithCompletionHandler:(id /* CDUnknownBlockType */)arg1 ignoreDefaults:(BOOL)arg2;
- (void)_checkAccountStatusWithCompletionHandler:(id /* CDUnknownBlockType */)arg1 withRetryCount:(NSUInteger)arg2;
- (BOOL)isAccountAvailable;
- (void)queryAccountStatusWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)identityUpdated:(id)arg1;
- (void)accountStatusDidChange:(id)arg1;
- (void)setupAccountDidChange:(BOOL)arg1;
- (BOOL)needsDeviceToDevice;
- (id)userIdentity;
- (id)initWithRecordZoneName:(id)arg1;
- (id)initWithContainer:(id)arg1 recordZoneName:(id)arg2;
- (void)dealloc;
- (id)init;

@end

