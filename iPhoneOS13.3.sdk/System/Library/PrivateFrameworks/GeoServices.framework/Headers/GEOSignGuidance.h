//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOJunctionInfo, GEONameInfo, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSignGuidance : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOJunctionInfo *_junctionInfo;
    NSMutableArray *_secondarySigns;
    GEONameInfo *_shieldName;
    NSMutableArray *_signDetails;
    NSMutableArray *_signTitles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _maneuverArrowOverride;
    unsigned int _stackRanking;
    struct {
        unsigned int has_maneuverArrowOverride:1;
        unsigned int has_stackRanking:1;
        unsigned int read_unknownFields:1;
        unsigned int read_junctionInfo:1;
        unsigned int read_secondarySigns:1;
        unsigned int read_shieldName:1;
        unsigned int read_signDetails:1;
        unsigned int read_signTitles:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_junctionInfo:1;
        unsigned int wrote_secondarySigns:1;
        unsigned int wrote_shieldName:1;
        unsigned int wrote_signDetails:1;
        unsigned int wrote_signTitles:1;
        unsigned int wrote_maneuverArrowOverride:1;
        unsigned int wrote_stackRanking:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)secondarySignType;
+ (Class)signDetailType;
+ (Class)signTitleType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOJunctionInfo *junctionInfo;
@property(readonly, nonatomic) BOOL hasJunctionInfo;
- (void)_readJunctionInfo;
@property(nonatomic) BOOL hasStackRanking;
@property(nonatomic) unsigned int stackRanking;
@property(retain, nonatomic) GEONameInfo *shieldName;
@property(readonly, nonatomic) BOOL hasShieldName;
- (void)_readShieldName;
- (int)StringAsManeuverArrowOverride:(id)arg1;
- (id)maneuverArrowOverrideAsString:(int)arg1;
@property(nonatomic) BOOL hasManeuverArrowOverride;
@property(nonatomic) int maneuverArrowOverride;
- (id)secondarySignAtIndex:(NSUInteger)arg1;
- (NSUInteger)secondarySignsCount;
- (void)_addNoFlagsSecondarySign:(id)arg1;
- (void)addSecondarySign:(id)arg1;
- (void)clearSecondarySigns;
@property(retain, nonatomic) NSMutableArray *secondarySigns;
- (void)_readSecondarySigns;
- (id)signDetailAtIndex:(NSUInteger)arg1;
- (NSUInteger)signDetailsCount;
- (void)_addNoFlagsSignDetail:(id)arg1;
- (void)addSignDetail:(id)arg1;
- (void)clearSignDetails;
@property(retain, nonatomic) NSMutableArray *signDetails;
- (void)_readSignDetails;
- (id)signTitleAtIndex:(NSUInteger)arg1;
- (NSUInteger)signTitlesCount;
- (void)_addNoFlagsSignTitle:(id)arg1;
- (void)addSignTitle:(id)arg1;
- (void)clearSignTitles;
@property(retain, nonatomic) NSMutableArray *signTitles;
- (void)_readSignTitles;
- (id)initWithData:(id)arg1;
- (id)init;

@end

