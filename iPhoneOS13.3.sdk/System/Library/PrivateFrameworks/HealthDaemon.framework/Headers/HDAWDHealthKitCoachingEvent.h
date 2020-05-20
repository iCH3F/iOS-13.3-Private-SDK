//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDAWDHealthKitCoachingFeatureGroup;

@interface HDAWDHealthKitCoachingEvent : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _goalTypes;
    NSUInteger _duration;
    NSUInteger _eventTimestamp;
    NSUInteger _timestamp;
    unsigned int _dismissReason;
    unsigned int _eventType;
    HDAWDHealthKitCoachingFeatureGroup *_features;
    unsigned int _newGoal;
    unsigned int _recommendedGoal;
    struct {
        unsigned int duration:1;
        unsigned int eventTimestamp:1;
        unsigned int timestamp:1;
        unsigned int dismissReason:1;
        unsigned int eventType:1;
        unsigned int newGoal:1;
        unsigned int recommendedGoal:1;
    } _has;
}

@property(nonatomic) NSUInteger eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property(retain, nonatomic) HDAWDHealthKitCoachingFeatureGroup *features; // @synthesize features=_features;
@property(nonatomic) NSUInteger duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int newGoal; // @synthesize newGoal=_newGoal;
@property(nonatomic) unsigned int recommendedGoal; // @synthesize recommendedGoal=_recommendedGoal;
@property(nonatomic) unsigned int dismissReason; // @synthesize dismissReason=_dismissReason;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasEventTimestamp;
@property(readonly, nonatomic) BOOL hasFeatures;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasNewGoal;
@property(nonatomic) BOOL hasRecommendedGoal;
- (void)setGoalTypes:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)goalTypeAtIndex:(NSUInteger)arg1;
- (void)addGoalType:(unsigned int)arg1;
- (void)clearGoalTypes;
@property(readonly, nonatomic) unsigned int goalTypes;
@property(readonly, nonatomic) NSUInteger goalTypesCount;
@property(nonatomic) BOOL hasDismissReason;
@property(nonatomic) BOOL hasEventType;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end

