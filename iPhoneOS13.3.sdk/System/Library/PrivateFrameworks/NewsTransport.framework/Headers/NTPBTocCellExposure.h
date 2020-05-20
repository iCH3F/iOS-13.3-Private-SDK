//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NTPBFeedCellExposure, NTPBTocCellExposureArticleElement;

@interface NTPBTocCellExposure : PBCodable <NSCopying>
{
    int _displayRank;
    NTPBFeedCellExposure *_feedCellExposure;
    int _rankInSection;
    NTPBTocCellExposureArticleElement *_tocCellExposureArticleElement;
    NSData *_tocCellExposureId;
    int _tocCellSection;
    int _type;
    BOOL _isBadged;
    struct {
        unsigned int displayRank:1;
        unsigned int rankInSection:1;
        unsigned int tocCellSection:1;
        unsigned int type:1;
        unsigned int isBadged:1;
    } _has;
}

@property(retain, nonatomic) NTPBTocCellExposureArticleElement *tocCellExposureArticleElement; // @synthesize tocCellExposureArticleElement=_tocCellExposureArticleElement;
@property(retain, nonatomic) NTPBFeedCellExposure *feedCellExposure; // @synthesize feedCellExposure=_feedCellExposure;
@property(nonatomic) int rankInSection; // @synthesize rankInSection=_rankInSection;
@property(nonatomic) int displayRank; // @synthesize displayRank=_displayRank;
@property(nonatomic) BOOL isBadged; // @synthesize isBadged=_isBadged;
@property(retain, nonatomic) NSData *tocCellExposureId; // @synthesize tocCellExposureId=_tocCellExposureId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTocCellExposureArticleElement;
@property(readonly, nonatomic) BOOL hasFeedCellExposure;
- (int)StringAsTocCellSection:(id)arg1;
- (id)tocCellSectionAsString:(int)arg1;
@property(nonatomic) BOOL hasTocCellSection;
@property(nonatomic) int tocCellSection; // @synthesize tocCellSection=_tocCellSection;
@property(nonatomic) BOOL hasRankInSection;
@property(nonatomic) BOOL hasDisplayRank;
@property(nonatomic) BOOL hasIsBadged;
@property(readonly, nonatomic) BOOL hasTocCellExposureId;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

