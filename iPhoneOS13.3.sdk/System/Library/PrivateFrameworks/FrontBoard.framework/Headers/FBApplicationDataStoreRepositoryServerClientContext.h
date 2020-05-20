//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBSServiceFacilityClientContext-Protocol.h>

@class NSSet;
@protocol FBApplicationDataStoreRepository, FBApplicationDataStoreRepositoryServerClientContextDelegate, FBSServiceFacilityClientHandle, OS_dispatch_queue;

@interface FBApplicationDataStoreRepositoryServerClientContext : NSObject <FBSServiceFacilityClientContext>
{
    id <FBApplicationDataStoreRepository> _dataStore;
    NSSet *_prefetchedKeys;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _interestedInAllChanges;
    BOOL _observingChanges;
    id <FBSServiceFacilityClientHandle> _client;
    id <FBApplicationDataStoreRepositoryServerClientContextDelegate> _delegate;
}

@property(nonatomic) __weak id <FBApplicationDataStoreRepositoryServerClientContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL interestedInAllChanges; // @synthesize interestedInAllChanges=_interestedInAllChanges;
@property(copy, nonatomic) NSSet *prefetchedKeys; // @synthesize prefetchedKeys=_prefetchedKeys;
@property(nonatomic) __weak id <FBSServiceFacilityClientHandle> clientHandle; // @synthesize clientHandle=_client;
// - (void).cxx_destruct;
- (void)_repositoryInvalidated:(id)arg1;
- (void)_valueChanged:(id)arg1;
- (void)_queue_updateObservers;
- (void)dealloc;
- (id)initWithDataStore:(id)arg1;

@end

