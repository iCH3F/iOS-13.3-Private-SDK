//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface PBBProtoPerformanceResult : PBCodable <NSCopying>
{
    double _timeDelta;
    double _timeEnded;
    double _timeStarted;
    NSString *_activityType;
    NSString *_identifier;
    struct {
        unsigned int timeDelta:1;
        unsigned int timeEnded:1;
        unsigned int timeStarted:1;
    } _has;
}

+ (void)initialize;
@property(nonatomic) double timeEnded; // @synthesize timeEnded=_timeEnded;
@property(nonatomic) double timeStarted; // @synthesize timeStarted=_timeStarted;
@property(nonatomic) double timeDelta; // @synthesize timeDelta=_timeDelta;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTimeEnded;
@property(nonatomic) BOOL hasTimeStarted;
@property(nonatomic) BOOL hasTimeDelta;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasActivityType;
- (id)detailedDescription;

@end

