//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

@interface GEOLocalTime : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSUInteger _timeRoundedToHour;
    float _timezoneOffsetFromGmtInHours;
    struct {
        unsigned int has_timeRoundedToHour:1;
        unsigned int has_timezoneOffsetFromGmtInHours:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasTimezoneOffsetFromGmtInHours;
@property(nonatomic) float timezoneOffsetFromGmtInHours;
@property(nonatomic) BOOL hasTimeRoundedToHour;
@property(nonatomic) NSUInteger timeRoundedToHour;
- (id)initWithCFAbsoluteTime:(double)arg1;
- (id)initWithDate:(id)arg1;

@end

