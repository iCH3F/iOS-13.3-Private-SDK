//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSString, NTPBFeedItem, SFSearchResult;
@protocol FCFeedTransformationItem, FCHeadlineProviding, NTTodayProtoitem;

@protocol NTFeedTransformationItem <NSObject, NSCopying>
@property(readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property(readonly, nonatomic) BOOL needsFeedItemHeadlinesFetch;
@property(readonly, nonatomic) id <FCFeedTransformationItem> feedTransformationItem;
@property(readonly, nonatomic) BOOL usesDynamicSlotAllocation;
@property(readonly, nonatomic, getter=isEligibleForLeadingCellAppearance) BOOL eligibleForLeadingCellAppearance;
@property(readonly, copy, nonatomic) SFSearchResult *searchResult;
@property(readonly, copy, nonatomic) NSDate *cacheExpirationDate;
@property(readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, nonatomic) NSUInteger todayItemType;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id <NTTodayProtoitem>)protoitemWithFetchedFeedItemHeadline:(id <FCHeadlineProviding>)arg1;

@optional
@property(readonly, nonatomic) NSUInteger preferredDynamicSlotAllocation;
@end

