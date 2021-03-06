//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, NTPBCardStyle, NTPBColor, NTPBColorGradient, NTPBDate, NTPBDiscoverMoreVideosInfo;

@interface NTPBFeedViewportGroup : PBCodable <NSCopying>
{
    CDStruct_95bda58d _assetURLStringRefs;
    NSUInteger _mergeID;
    NSUInteger _options;
    NTPBColorGradient *_backgroundGradient;
    NSString *_bridgedGroupIdentifier;
    NTPBCardStyle *_cardStyle;
    NTPBDate *_creationDate;
    int _ctaTextRef;
    NTPBCardStyle *_darkCardStyle;
    NTPBColorGradient *_darkStyleBackgroundGradient;
    NTPBColor *_darkStyleTitleColor;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NTPBDate *_editionFeedEndDate;
    NTPBDate *_editionFeedStartDate;
    NTPBDate *_editionKeyDate;
    int _eyebrowTextRef;
    NSMutableArray *_headlines;
    NSString *_identifier;
    NSMutableArray *_issueIDs;
    int _l2TagIDRef;
    int _sourceIdentifierRef;
    int _subtitleRef;
    NTPBColor *_titleColor;
    int _titleRef;
    int _type;
    NSMutableArray *_videoPlaylistHeadlines;
    BOOL _isFirstFromEdition;
    BOOL _usesPlaceholderHeadlines;
    struct {
        unsigned int mergeID:1;
        unsigned int options:1;
        unsigned int ctaTextRef:1;
        unsigned int eyebrowTextRef:1;
        unsigned int l2TagIDRef:1;
        unsigned int sourceIdentifierRef:1;
        unsigned int subtitleRef:1;
        unsigned int titleRef:1;
        unsigned int type:1;
        unsigned int isFirstFromEdition:1;
        unsigned int usesPlaceholderHeadlines:1;
    } _has;
}

+ (Class)issueIDsType;
+ (Class)videoPlaylistHeadlinesType;
+ (Class)headlinesType;
@property(nonatomic) BOOL usesPlaceholderHeadlines; // @synthesize usesPlaceholderHeadlines=_usesPlaceholderHeadlines;
@property(retain, nonatomic) NTPBCardStyle *darkCardStyle; // @synthesize darkCardStyle=_darkCardStyle;
@property(retain, nonatomic) NTPBCardStyle *cardStyle; // @synthesize cardStyle=_cardStyle;
@property(retain, nonatomic) NTPBColorGradient *darkStyleBackgroundGradient; // @synthesize darkStyleBackgroundGradient=_darkStyleBackgroundGradient;
@property(retain, nonatomic) NTPBColor *darkStyleTitleColor; // @synthesize darkStyleTitleColor=_darkStyleTitleColor;
@property(nonatomic) int ctaTextRef; // @synthesize ctaTextRef=_ctaTextRef;
@property(nonatomic) int eyebrowTextRef; // @synthesize eyebrowTextRef=_eyebrowTextRef;
@property(retain, nonatomic) NSString *bridgedGroupIdentifier; // @synthesize bridgedGroupIdentifier=_bridgedGroupIdentifier;
@property(retain, nonatomic) NSMutableArray *issueIDs; // @synthesize issueIDs=_issueIDs;
@property(retain, nonatomic) NSMutableArray *videoPlaylistHeadlines; // @synthesize videoPlaylistHeadlines=_videoPlaylistHeadlines;
@property(retain, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo; // @synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo;
@property(nonatomic) BOOL isFirstFromEdition; // @synthesize isFirstFromEdition=_isFirstFromEdition;
@property(retain, nonatomic) NTPBDate *editionFeedEndDate; // @synthesize editionFeedEndDate=_editionFeedEndDate;
@property(retain, nonatomic) NTPBDate *editionFeedStartDate; // @synthesize editionFeedStartDate=_editionFeedStartDate;
@property(retain, nonatomic) NTPBDate *editionKeyDate; // @synthesize editionKeyDate=_editionKeyDate;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
@property(nonatomic) NSUInteger mergeID; // @synthesize mergeID=_mergeID;
@property(retain, nonatomic) NSMutableArray *headlines; // @synthesize headlines=_headlines;
@property(nonatomic) int l2TagIDRef; // @synthesize l2TagIDRef=_l2TagIDRef;
@property(retain, nonatomic) NTPBColorGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) NTPBColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) int subtitleRef; // @synthesize subtitleRef=_subtitleRef;
@property(nonatomic) int titleRef; // @synthesize titleRef=_titleRef;
@property(retain, nonatomic) NTPBDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) int sourceIdentifierRef; // @synthesize sourceIdentifierRef=_sourceIdentifierRef;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasUsesPlaceholderHeadlines;
- (void)setAssetURLStringRefs:(int )arg1 count:(NSUInteger)arg2;
- (int)assetURLStringRefAtIndex:(NSUInteger)arg1;
- (void)addAssetURLStringRef:(int)arg1;
- (void)clearAssetURLStringRefs;
@property(readonly, nonatomic) int assetURLStringRefs;
@property(readonly, nonatomic) NSUInteger assetURLStringRefsCount;
@property(readonly, nonatomic) BOOL hasDarkCardStyle;
@property(readonly, nonatomic) BOOL hasCardStyle;
@property(readonly, nonatomic) BOOL hasDarkStyleBackgroundGradient;
@property(readonly, nonatomic) BOOL hasDarkStyleTitleColor;
@property(nonatomic) BOOL hasCtaTextRef;
@property(nonatomic) BOOL hasEyebrowTextRef;
@property(readonly, nonatomic) BOOL hasBridgedGroupIdentifier;
- (id)issueIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)issueIDsCount;
- (void)addIssueIDs:(id)arg1;
- (void)clearIssueIDs;
- (id)videoPlaylistHeadlinesAtIndex:(NSUInteger)arg1;
- (NSUInteger)videoPlaylistHeadlinesCount;
- (void)addVideoPlaylistHeadlines:(id)arg1;
- (void)clearVideoPlaylistHeadlines;
@property(readonly, nonatomic) BOOL hasDiscoverMoreVideosInfo;
@property(nonatomic) BOOL hasIsFirstFromEdition;
@property(readonly, nonatomic) BOOL hasEditionFeedEndDate;
@property(readonly, nonatomic) BOOL hasEditionFeedStartDate;
@property(readonly, nonatomic) BOOL hasEditionKeyDate;
@property(nonatomic) BOOL hasOptions;
@property(nonatomic) BOOL hasMergeID;
- (id)headlinesAtIndex:(NSUInteger)arg1;
- (NSUInteger)headlinesCount;
- (void)addHeadlines:(id)arg1;
- (void)clearHeadlines;
@property(nonatomic) BOOL hasL2TagIDRef;
@property(readonly, nonatomic) BOOL hasBackgroundGradient;
@property(readonly, nonatomic) BOOL hasTitleColor;
@property(nonatomic) BOOL hasSubtitleRef;
@property(nonatomic) BOOL hasTitleRef;
@property(readonly, nonatomic) BOOL hasCreationDate;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL hasSourceIdentifierRef;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (void)dealloc;

@end

