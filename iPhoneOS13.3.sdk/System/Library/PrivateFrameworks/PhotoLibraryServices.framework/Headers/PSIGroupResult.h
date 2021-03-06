//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue, PSIGroupResultDelegate;

@interface PSIGroupResult : NSObject <NSCopying>
{
    id <PSIGroupResultDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_owningContentString;
    NSMutableArray *_assetUUIDs;
    NSMutableArray *_collectionResults;
    BOOL _didFetchOwningContentString;
    NSMutableSet *_sceneGroupsIds;
    short _dedupingSkippedCategory;
    float _score;
    NSString *_transientToken;
    NSArray *_groups;
    const struct __CFArray _assetIds;
    const struct __CFArray _collectionIds;
}

@property(nonatomic) __weak id <PSIGroupResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) short dedupingSkippedCategory; // @synthesize dedupingSkippedCategory=_dedupingSkippedCategory;
@property(retain, nonatomic) const struct __CFArray collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) const struct __CFArray assetIds; // @synthesize assetIds=_assetIds;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *transientToken; // @synthesize transientToken=_transientToken;
// - (void).cxx_destruct;
- (void)resolveObjectsWithAssetCache:(id)arg1 collectionCache:(id)arg2;
- (void)fetchNextAssetUUIDs:(BOOL)arg1 collectionResults:(BOOL)arg2 assetCountLimit:(NSUInteger)arg3 collectionCountLimit:(NSUInteger)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)fetchNextAssetUUIDs:(BOOL)arg1 collectionResults:(BOOL)arg2 count:(NSUInteger)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)fetchNextAssetUUIDs:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_prepareForFetchWithAssetCountLimit:(NSUInteger)arg1 collectionCountLimit:(NSUInteger)arg2 outAssetRange:(_NSRange )arg3 outCollectionRange:(_NSRange )arg4 outFetchOwningContentString:(BOOL )arg5;
@property(readonly) __weak NSArray *collectionResults;
@property(readonly) __weak NSArray *assetUUIDs;
@property(readonly) __weak NSString *owningContentString;
@property(readonly, nonatomic) BOOL hasDateFilterFromImplicitToken;
@property(readonly, nonatomic) BOOL isDateFilterPartiallyFromFullSearchText;
- (id)dateFilterGroupSnapshot;
- (id)firstSearchTextGroupSnapshot;
- (id)fullSearchTextGroupSnapshot;
- (BOOL)isMatchedByIdentifierAtIndex:(long long)arg1;
- (BOOL)isContentStringTextSearchableAtIndex:(long long)arg1;
- (long long)categoryAtIndex:(long long)arg1;
- (id)normalizedStringAtIndex:(long long)arg1;
- (id)contentStringAtIndex:(long long)arg1;
- (id)groupRangesAtIndex:(long long)arg1;
- (id)matchRangesAtIndex:(long long)arg1;
- (id)tokensAtIndex:(long long)arg1;
- (NSUInteger)groupCount;
@property(readonly, nonatomic) NSArray *groupsMatchRanges;
@property(readonly, nonatomic) NSArray *lookupIdentifiers;
@property(readonly, nonatomic) NSArray *contentStrings;
@property(readonly, nonatomic) NSArray *groupsSearchTokens;
@property(readonly, nonatomic) NSUInteger matchCount;
@property(readonly, nonatomic) NSUInteger collectionMatchCount;
@property(readonly, nonatomic) NSUInteger assetMatchCount;
@property(readonly) NSMutableSet *sceneGroupsIds;
- (id)normalizedUnitTestDescription;
- (id)unitTestDescription;
- (id)debugDescription;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

