//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface WBSAnalyticsSafariContactAutoFillDidShowSetsEvent : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    BOOL _isShowingMeCardSets;
    BOOL _isShowingPreviouslyCustomizedSet;
    struct {
        unsigned int timestamp:1;
        unsigned int isShowingMeCardSets:1;
        unsigned int isShowingPreviouslyCustomizedSet:1;
    } _has;
}

@property(nonatomic) BOOL isShowingPreviouslyCustomizedSet; // @synthesize isShowingPreviouslyCustomizedSet=_isShowingPreviouslyCustomizedSet;
@property(nonatomic) BOOL isShowingMeCardSets; // @synthesize isShowingMeCardSets=_isShowingMeCardSets;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsShowingPreviouslyCustomizedSet;
@property(nonatomic) BOOL hasIsShowingMeCardSets;
@property(nonatomic) BOOL hasTimestamp;

@end

