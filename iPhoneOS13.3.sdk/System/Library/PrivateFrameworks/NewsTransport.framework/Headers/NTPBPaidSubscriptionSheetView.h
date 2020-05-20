//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

@interface NTPBPaidSubscriptionSheetView : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    int _groupType;
    NSString *_iadQtoken;
    int _paidSubscriptionConversionPointExposureLocation;
    int _paidSubscriptionConversionPointType;
    int _paidSubscriptionSheetViewPresentationReason;
    int _parentFeedType;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    NSData *_subscriptionPurchaseSessionId;
    int _userAction;
    BOOL _arrivedFromAd;
    BOOL _subscriptionOnlyArticlePreview;
    struct {
        unsigned int groupType:1;
        unsigned int paidSubscriptionConversionPointExposureLocation:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int paidSubscriptionSheetViewPresentationReason:1;
        unsigned int parentFeedType:1;
        unsigned int userAction:1;
        unsigned int arrivedFromAd:1;
        unsigned int subscriptionOnlyArticlePreview:1;
    } _has;
}

@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSData *subscriptionPurchaseSessionId; // @synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId;
@property(retain, nonatomic) NSString *iadQtoken; // @synthesize iadQtoken=_iadQtoken;
@property(nonatomic) BOOL arrivedFromAd; // @synthesize arrivedFromAd=_arrivedFromAd;
@property(nonatomic) BOOL subscriptionOnlyArticlePreview; // @synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) BOOL hasCreativeId;
@property(readonly, nonatomic) BOOL hasCampaignType;
@property(readonly, nonatomic) BOOL hasCampaignId;
@property(readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property(nonatomic) int paidSubscriptionConversionPointType; // @synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType;
@property(readonly, nonatomic) BOOL hasIadQtoken;
@property(nonatomic) BOOL hasArrivedFromAd;
@property(nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(readonly, nonatomic) BOOL hasSectionId;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg1;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)arg1;
@property(nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation;
@property(nonatomic) int paidSubscriptionConversionPointExposureLocation; // @synthesize paidSubscriptionConversionPointExposureLocation=_paidSubscriptionConversionPointExposureLocation;
@property(nonatomic) BOOL hasPaidSubscriptionSheetViewPresentationReason;
@property(nonatomic) int paidSubscriptionSheetViewPresentationReason; // @synthesize paidSubscriptionSheetViewPresentationReason=_paidSubscriptionSheetViewPresentationReason;
@property(nonatomic) BOOL hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;

@end

