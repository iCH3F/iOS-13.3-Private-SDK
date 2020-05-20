//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFJSONSerializable-Protocol.h>
#import <SearchFoundation/SFSearchResult-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, SFActionItem, SFCard, SFCustom, SFImage, SFMoreResults, SFPunchout, SFText;

@interface SFSearchResult : NSObject <SFJSONSerializable, SFSearchResult, NSSecureCoding, NSCopying>
{
    BOOL _preventThumbnailImageScaling;
    BOOL _isSecondaryTitleDetached;
    BOOL _isCentered;
    BOOL _isLocalApplicationResult;
    BOOL _renderHorizontallyWithOtherResultsInCategory;
    BOOL _isQuickGlance;
    BOOL _isStreaming;
    BOOL _isStaticCorrection;
    BOOL _isFuzzyMatch;
    BOOL _publiclyIndexable;
    BOOL _doNotFold;
    int _auxiliaryBottomTextColor;
    int _topHit;
    int _placement;
    int _type;
    NSString *_identifier;
    SFImage *_thumbnail;
    SFText *_title;
    NSString *_secondaryTitle;
    SFImage *_secondaryTitleImage;
    NSArray *_descriptions;
    NSString *_footnote;
    NSString *_publishDate;
    NSString *_sourceName;
    NSString *_completion;
    SFImage *_completionImage;
    NSURL *_url;
    NSString *_auxiliaryTopText;
    NSString *_auxiliaryMiddleText;
    NSString *_auxiliaryBottomText;
    SFActionItem *_action;
    SFPunchout *_punchout;
    NSString *_storeIdentifier;
    NSString *_contactIdentifier;
    NSString *_calendarIdentifier;
    NSData *_mapsData;
    NSString *_mapsResultType;
    NSURL *_mapsMoreURL;
    NSString *_mapsMoreString;
    SFImage *_mapsMoreIcon;
    NSString *_nearbyBusinessesString;
    NSString *_appleReferrer;
    SFCard *_card;
    SFCard *_inlineCard;
    SFMoreResults *_moreResults;
    SFPunchout *_moreResultsPunchout;
    NSString *_applicationBundleIdentifier;
    NSString *_sectionBundleIdentifier;
    NSString *_userActivityRequiredString;
    NSString *_sectionHeader;
    NSString *_sectionHeaderMore;
    NSURL *_sectionHeaderMoreURL;
    double _rankingScore;
    NSUInteger _minimumRankOfTopHitToSuppressResult;
    NSString *_mediaType;
    double _serverScore;
    NSDictionary *_topicDistribution;
    NSDictionary *_featureScaling;
    double _personalizationScore;
    NSUInteger _origRank;
    SFCustom *_customProperties;
    NSString *_resultType;
    NSString *_resultTemplate;
    NSNumber *_engagementScore;
    NSNumber *_queryIndependentScore;
    NSNumber *_maxAge;
    NSString *_titleNote;
    NSNumber *_titleNoteSize;
    NSString *_resultBundleId;
    SFImage *_icon;
    NSDictionary *_localFeatures;
    NSString *_intendedQuery;
    NSString *_correctedQuery;
    NSString *_completedQuery;
    NSUInteger _queryId;
    NSString *_userInput;
    NSArray *_itemProviderDataTypes;
    NSArray *_itemProviderFileTypes;
    NSString *_contentType;
    NSArray *_contentTypeTree;
    long long _dataOwnerType;
    NSString *_fileProviderIdentifier;
    NSString *_fileProviderDomainIdentifier;
    NSString *_fbr;
    NSString *_srf;
    NSUInteger _blockId;
    NSData *_entityData;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *entityData; // @synthesize entityData=_entityData;
@property(nonatomic) NSUInteger blockId; // @synthesize blockId=_blockId;
@property(nonatomic) BOOL doNotFold; // @synthesize doNotFold=_doNotFold;
@property(copy, nonatomic) NSString *srf; // @synthesize srf=_srf;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(copy, nonatomic) NSString *fileProviderDomainIdentifier; // @synthesize fileProviderDomainIdentifier=_fileProviderDomainIdentifier;
@property(copy, nonatomic) NSString *fileProviderIdentifier; // @synthesize fileProviderIdentifier=_fileProviderIdentifier;
@property(nonatomic) long long dataOwnerType; // @synthesize dataOwnerType=_dataOwnerType;
@property(copy, nonatomic) NSArray *contentTypeTree; // @synthesize contentTypeTree=_contentTypeTree;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSArray *itemProviderFileTypes; // @synthesize itemProviderFileTypes=_itemProviderFileTypes;
@property(copy, nonatomic) NSArray *itemProviderDataTypes; // @synthesize itemProviderDataTypes=_itemProviderDataTypes;
@property(copy, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
@property(nonatomic) BOOL publiclyIndexable; // @synthesize publiclyIndexable=_publiclyIndexable;
@property(nonatomic) NSUInteger queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSString *completedQuery; // @synthesize completedQuery=_completedQuery;
@property(copy, nonatomic) NSString *correctedQuery; // @synthesize correctedQuery=_correctedQuery;
@property(copy, nonatomic) NSString *intendedQuery; // @synthesize intendedQuery=_intendedQuery;
@property(copy, nonatomic) NSDictionary *localFeatures; // @synthesize localFeatures=_localFeatures;
@property(nonatomic) BOOL isFuzzyMatch; // @synthesize isFuzzyMatch=_isFuzzyMatch;
@property(nonatomic) BOOL isStaticCorrection; // @synthesize isStaticCorrection=_isStaticCorrection;
@property(retain, nonatomic) SFImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *resultBundleId; // @synthesize resultBundleId=_resultBundleId;
@property(retain, nonatomic) NSNumber *titleNoteSize; // @synthesize titleNoteSize=_titleNoteSize;
@property(copy, nonatomic) NSString *titleNote; // @synthesize titleNote=_titleNote;
@property(retain, nonatomic) NSNumber *maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) NSNumber *queryIndependentScore; // @synthesize queryIndependentScore=_queryIndependentScore;
@property(retain, nonatomic) NSNumber *engagementScore; // @synthesize engagementScore=_engagementScore;
@property(nonatomic) BOOL isStreaming; // @synthesize isStreaming=_isStreaming;
@property(nonatomic) BOOL isQuickGlance; // @synthesize isQuickGlance=_isQuickGlance;
@property(copy, nonatomic) NSString *resultTemplate; // @synthesize resultTemplate=_resultTemplate;
@property(copy, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) SFCustom *customProperties; // @synthesize customProperties=_customProperties;
@property(nonatomic) NSUInteger origRank; // @synthesize origRank=_origRank;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(copy, nonatomic) NSDictionary *featureScaling; // @synthesize featureScaling=_featureScaling;
@property(copy, nonatomic) NSDictionary *topicDistribution; // @synthesize topicDistribution=_topicDistribution;
@property(nonatomic) double serverScore; // @synthesize serverScore=_serverScore;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) NSUInteger minimumRankOfTopHitToSuppressResult; // @synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int placement; // @synthesize placement=_placement;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory; // @synthesize renderHorizontallyWithOtherResultsInCategory=_renderHorizontallyWithOtherResultsInCategory;
@property(copy, nonatomic) NSURL *sectionHeaderMoreURL; // @synthesize sectionHeaderMoreURL=_sectionHeaderMoreURL;
@property(copy, nonatomic) NSString *sectionHeaderMore; // @synthesize sectionHeaderMore=_sectionHeaderMore;
@property(copy, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(nonatomic) int topHit; // @synthesize topHit=_topHit;
@property(copy, nonatomic) NSString *userActivityRequiredString; // @synthesize userActivityRequiredString=_userActivityRequiredString;
@property(nonatomic) BOOL isLocalApplicationResult; // @synthesize isLocalApplicationResult=_isLocalApplicationResult;
@property(copy, nonatomic) NSString *sectionBundleIdentifier; // @synthesize sectionBundleIdentifier=_sectionBundleIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(retain, nonatomic) SFPunchout *moreResultsPunchout; // @synthesize moreResultsPunchout=_moreResultsPunchout;
@property(retain, nonatomic) SFMoreResults *moreResults; // @synthesize moreResults=_moreResults;
@property(retain, nonatomic) SFCard *inlineCard; // @synthesize inlineCard=_inlineCard;
@property(retain, nonatomic) SFCard *card; // @synthesize card=_card;
@property(copy, nonatomic) NSString *appleReferrer; // @synthesize appleReferrer=_appleReferrer;
@property(copy, nonatomic) NSString *nearbyBusinessesString; // @synthesize nearbyBusinessesString=_nearbyBusinessesString;
@property(retain, nonatomic) SFImage *mapsMoreIcon; // @synthesize mapsMoreIcon=_mapsMoreIcon;
@property(copy, nonatomic) NSString *mapsMoreString; // @synthesize mapsMoreString=_mapsMoreString;
@property(retain, nonatomic) NSURL *mapsMoreURL; // @synthesize mapsMoreURL=_mapsMoreURL;
@property(copy, nonatomic) NSString *mapsResultType; // @synthesize mapsResultType=_mapsResultType;
@property(retain, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(retain, nonatomic) SFActionItem *action; // @synthesize action=_action;
@property(nonatomic) int auxiliaryBottomTextColor; // @synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor;
@property(copy, nonatomic) NSString *auxiliaryBottomText; // @synthesize auxiliaryBottomText=_auxiliaryBottomText;
@property(copy, nonatomic) NSString *auxiliaryMiddleText; // @synthesize auxiliaryMiddleText=_auxiliaryMiddleText;
@property(copy, nonatomic) NSString *auxiliaryTopText; // @synthesize auxiliaryTopText=_auxiliaryTopText;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) SFImage *completionImage; // @synthesize completionImage=_completionImage;
@property(copy, nonatomic) NSString *completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *publishDate; // @synthesize publishDate=_publishDate;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSArray *descriptions; // @synthesize descriptions=_descriptions;
@property(nonatomic) BOOL isCentered; // @synthesize isCentered=_isCentered;
@property(nonatomic) BOOL isSecondaryTitleDetached; // @synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached;
@property(retain, nonatomic) SFImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property(copy, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain, nonatomic) SFText *title; // @synthesize title=_title;
@property(nonatomic) BOOL preventThumbnailImageScaling; // @synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling;
@property(retain, nonatomic) SFImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

@end

