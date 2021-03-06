//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataSyncManager-Protocol.h>

@class CKRecordZoneID, NSArray, NTPBPrivateZoneSyncState;
@protocol FCPrivateZoneSyncManagerDelegate;

@interface FCPrivateZoneSyncManager : NSObject <FCPrivateDataSyncManager>
{
    BOOL _requiresBatchedSync;
    CKRecordZoneID *_recordZoneID;
    id <FCPrivateZoneSyncManagerDelegate> _delegate;
    NSArray *_desiredKeys;
    NTPBPrivateZoneSyncState *_currentState;
}

@property(readonly, copy, nonatomic) NTPBPrivateZoneSyncState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) BOOL requiresBatchedSync; // @synthesize requiresBatchedSync=_requiresBatchedSync;
@property(readonly, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) __weak id <FCPrivateZoneSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
// - (void).cxx_destruct;
- (void)_stateDidChange;
- (void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)isAwaitingFirstSync;
- (void)notifyObservers;
- (void)markAsDirty;
- (BOOL)isDirty;
- (id)init;
- (id)initWithRecordZoneID:(id)arg1 desiredKeys:(id)arg2 requiresBatchedSync:(BOOL)arg3 currentState:(id)arg4;

@end

