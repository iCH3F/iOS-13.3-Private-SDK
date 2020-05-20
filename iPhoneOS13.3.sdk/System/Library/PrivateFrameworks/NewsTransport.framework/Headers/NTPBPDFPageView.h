//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBPDFPageView : PBCodable <NSCopying>
{
    CDStruct_95bda58d _pageIndices;
    NSString *_campaignId;
    NTPBChannelData *_channelData;
    int _groupType;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_language;
    NSString *_notificationId;
    int _pageCount;
    int _paidSubscriberToFeedType;
    int _paidSubscriptionConversionPointType;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    NSString *_sourceChannelId;
    BOOL _adSupportedChannel;
    BOOL _isFreeIssue;
    BOOL _isPaidSubscriberToSourceChannel;
    BOOL _viewFromNotificationDirectOpen;
    struct {
        unsigned int groupType:1;
        unsigned int pageCount:1;
        unsigned int paidSubscriberToFeedType:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int adSupportedChannel:1;
        unsigned int isFreeIssue:1;
        unsigned int isPaidSubscriberToSourceChannel:1;
        unsigned int viewFromNotificationDirectOpen:1;
    } _has;
}

@property(retain, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property(retain, nonatomic) NSString *referringSourceApplication; // @synthesize referringSourceApplication=_referringSourceApplication;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NTPBChannelData *channelData; // @synthesize channelData=_channelData;
@property(retain, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property(nonatomic) BOOL viewFromNotificationDirectOpen; // @synthesize viewFromNotificationDirectOpen=_viewFromNotificationDirectOpen;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) BOOL isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property(nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property(nonatomic) BOOL isFreeIssue; // @synthesize isFreeIssue=_isFreeIssue;
@property(nonatomic) int pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasReferringUrl;
@property(readonly, nonatomic) BOOL hasReferringSourceApplication;
@property(readonly, nonatomic) BOOL hasLanguage;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property(nonatomic) int paidSubscriptionConversionPointType; // @synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType;
- (int)StringAsPaidSubscriberToFeedType:(id)arg1;
- (id)paidSubscriberToFeedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPaidSubscriberToFeedType;
@property(nonatomic) int paidSubscriberToFeedType; // @synthesize paidSubscriberToFeedType=_paidSubscriberToFeedType;
@property(readonly, nonatomic) BOOL hasChannelData;
@property(readonly, nonatomic) BOOL hasNotificationId;
@property(nonatomic) BOOL hasViewFromNotificationDirectOpen;
@property(readonly, nonatomic) BOOL hasCampaignId;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property(nonatomic) BOOL hasAdSupportedChannel;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasParentFeedId;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(nonatomic) BOOL hasIsFreeIssue;
@property(nonatomic) BOOL hasPageCount;
- (void)setPageIndices:(int )arg1 count:(NSUInteger)arg2;
- (int)pageIndicesAtIndex:(NSUInteger)arg1;
- (void)addPageIndices:(int)arg1;
- (void)clearPageIndices;
@property(readonly, nonatomic) int pageIndices;
@property(readonly, nonatomic) NSUInteger pageIndicesCount;
@property(readonly, nonatomic) BOOL hasIssueViewData;
@property(readonly, nonatomic) BOOL hasIssueExposureData;
@property(readonly, nonatomic) BOOL hasIssueData;
- (void)dealloc;

@end

