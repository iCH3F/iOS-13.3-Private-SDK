//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBCloudZone.h>

@class NSArray, NSMutableSet, NSSet;

@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone
{
    BOOL _useAnonymousRequests;
    NSSet *_modifiedRecordIDsFromLastPull;
    NSMutableSet *_uncommittedModifiedRecordIDsFromLastPull;
    NSSet *_watchedRecordIDs;
    NSArray *_signatureVerificationPublicKeys;
}

+ (NSUInteger)__maxSizeForCKRecordString;
+ (NSUInteger)__maxSizeForCKRecordNetworkDeclarationsSignature;
+ (NSUInteger)__maxSizeForCKRecordNetworkDeclarations;
+ (NSUInteger)__maxSizeFromPreferenceWithKey:(id)arg1 defaultValue:(NSUInteger)arg2;
@property(readonly, nonatomic) NSArray *signatureVerificationPublicKeys; // @synthesize signatureVerificationPublicKeys=_signatureVerificationPublicKeys;
@property(readonly, nonatomic) NSSet *watchedRecordIDs; // @synthesize watchedRecordIDs=_watchedRecordIDs;
@property(readonly, nonatomic) BOOL useAnonymousRequests; // @synthesize useAnonymousRequests=_useAnonymousRequests;
// - (void).cxx_destruct;
- (void)__retryFetchWithFetchInfo:(id)arg1;
- (BOOL)__canRecoverFromError:(id)arg1 fetchInfo:(id)arg2;
- (BOOL)__commitLocalChanges:(id)arg1 error:(id )arg2;
- (void)__zoneChangesCompleted:(id)arg1 fetchInfo:(id)arg2;
- (void)__zoneFetchCompletedWithChangeToken:(id)arg1 error:(id)arg2 moreComing:(BOOL)arg3 fetchInfo:(id)arg4;
- (void)__zoneChangeTokensUpdated:(id)arg1 fetchInfo:(id)arg2;
- (void)__recordDeleted:(id)arg1 recordType:(id)arg2 fetchInfo:(id)arg3;
- (void)__recordChanged:(id)arg1 fetchInfo:(id)arg2;
- (void)__finalizeUpdatedRecordIDs;
- (void)__noteUpdatedRecordID:(id)arg1;
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;
- (id)performCloudPullWithFetchToken:(id)arg1 options:(id)arg2;
- (void)startUpWithLocalZone:(id)arg1;
@property(retain, nonatomic) NSMutableSet *uncommittedModifiedRecordIDsFromLastPull; // @synthesize uncommittedModifiedRecordIDsFromLastPull=_uncommittedModifiedRecordIDsFromLastPull;
@property(retain, nonatomic) NSSet *modifiedRecordIDsFromLastPull; // @synthesize modifiedRecordIDsFromLastPull=_modifiedRecordIDsFromLastPull;
- (id)attributeDescriptions;
- (id)initWithCloudDatabase:(id)arg1 state:(id)arg2 useAnonymousRequests:(BOOL)arg3 watchedRecordIDs:(id)arg4 signatureVerificationPublicKeys:(id)arg5;
- (id)decodeModelFrom:(id)arg1 recordSource:(NSUInteger)arg2 error:(id )arg3;
- (BOOL)__verifyNetworkDeclarationsFromRecord:(id)arg1 baseAccessoryIdentifier:(id )arg2 networkDeclarationsData:(id )arg3 error:(id )arg4;
- (id)__getNetworkDeclarationsDataFromRecord:(id)arg1 error:(id )arg2;
- (BOOL)__verifyNetworkDeclarationsDigestAgainstSignatureFromRecord:(id)arg1 digestData:(id)arg2 signatureData:(id)arg3 error:(id )arg4;
- (id)__getNetworkDeclarationsSignatureDataFromRecord:(id)arg1 error:(id )arg2;
- (id)__calculateNetworkDeclarationsDigestFromRecord:(id)arg1 error:(id )arg2;
- (id)__createBaseAccessoryIdentifierFromRecord:(id)arg1 error:(id )arg2;

@end

