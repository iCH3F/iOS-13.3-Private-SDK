//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICUserIdentity, MPCModelStorePlaybackItemsRequest, MPMutableSectionedCollection, MPSectionedCollection, MPStoreModelGenericObjectBuilder, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject
{
    long long _currentBatchCount;
    long long _defaultLibraryPersonalizationStyle;
    NSMutableDictionary *_equivalencyMapping;
    BOOL _lastStoreIDBasedSectionWasPlaylist;
    NSArray *_orderedStoreIDs;
    NSMutableArray *_pendingOrderedStoreIDs;
    NSMutableArray *_pendingPrioritizedStoreIDs;
    NSMutableArray *_unprocessedItemIdentifiers;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    NSMutableDictionary *_receivedStoreIDs;
    MPStoreModelGenericObjectBuilder *_resultsGenericObjectBuilder;
    NSMutableDictionary *_sectionIndexToDeletedIndexSet;
    NSMutableDictionary *_storeIDToIndexPathReference;
    long long _unknownEndpointLibraryPersonalizationStyle;
    ICUserIdentity *_userIdentity;
    BOOL _allowsExplicitContent;
    BOOL _shouldLibraryPersonalize;
    long long _batchSize;
    NSDate *_earliestExpirationDate;
    long long _storePersonalizationStyle;
    MPCModelStorePlaybackItemsRequest *_request;
}

@property(readonly, nonatomic) BOOL shouldLibraryPersonalize; // @synthesize shouldLibraryPersonalize=_shouldLibraryPersonalize;
@property(readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) long long storePersonalizationStyle; // @synthesize storePersonalizationStyle=_storePersonalizationStyle;
@property(readonly, copy, nonatomic) NSDate *earliestExpirationDate; // @synthesize earliestExpirationDate=_earliestExpirationDate;
@property(nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly, nonatomic) BOOL allowsExplicitContent; // @synthesize allowsExplicitContent=_allowsExplicitContent;
// - (void).cxx_destruct;
- (id)_userIdentityWithRequest:(id)arg1;
- (BOOL)_shouldUsePlaylistEntriesForSectionAtIndex:(long long)arg1;
- (void)_removeItemAtOriginalIndexPath:(id)arg1;
- (id)_originalIndexPathsForStoreID:(id)arg1;
- (void)_prepareRequestInformation;
- (id)_modelObjectWithStoreItemMetadata:(id)arg1 requestModelObject:(id)arg2 shouldUsePlaylistEntries:(BOOL)arg3;
- (id)_indexPathAccountingForRemovalsWithOriginalIndexPath:(id)arg1;
- (struct _MPCModelStorePlaybackItemEligibility)_eligibilityForItem:(id)arg1;
- (void)_addOriginalIndexPath:(id)arg1 forStoreID:(id)arg2;
- (void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (id)newStoreItemMetadataRequest;
- (long long)_appendProgressiveContentDescriptorsWithStoreItemMetadata:(id)arg1;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult)handleResponse:(id)arg1;
@property(readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property(readonly, copy, nonatomic) NSDictionary *equivalencyMapping;
- (id)initWithRequest:(id)arg1 shouldLibraryPersonalize:(BOOL)arg2;

@end

