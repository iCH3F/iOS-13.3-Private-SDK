//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOJunctionViewGuidanceFeedback, GEOSignGuidanceFeedback, GEOSpokenGuidanceFeedback, NSData, PBDataReader;

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOJunctionViewGuidanceFeedback *_junctionViewGuidanceFeedback;
    NSData *_routeID;
    GEOSignGuidanceFeedback *_signGuidanceFeedback;
    GEOSpokenGuidanceFeedback *_spokenGuidanceFeedback;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    float _distanceToManeuver;
    float _duration;
    unsigned int _enrouteNoticeIndex;
    unsigned int _eventIndex;
    unsigned int _stepID;
    float _timeToManeuver;
    int _trafficSpeed;
    float _vehicleSpeed;
    struct {
        unsigned int has_distanceToManeuver:1;
        unsigned int has_duration:1;
        unsigned int has_enrouteNoticeIndex:1;
        unsigned int has_eventIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_timeToManeuver:1;
        unsigned int has_trafficSpeed:1;
        unsigned int has_vehicleSpeed:1;
        unsigned int read_junctionViewGuidanceFeedback:1;
        unsigned int read_routeID:1;
        unsigned int read_signGuidanceFeedback:1;
        unsigned int read_spokenGuidanceFeedback:1;
        unsigned int wrote_junctionViewGuidanceFeedback:1;
        unsigned int wrote_routeID:1;
        unsigned int wrote_signGuidanceFeedback:1;
        unsigned int wrote_spokenGuidanceFeedback:1;
        unsigned int wrote_distanceToManeuver:1;
        unsigned int wrote_duration:1;
        unsigned int wrote_enrouteNoticeIndex:1;
        unsigned int wrote_eventIndex:1;
        unsigned int wrote_stepID:1;
        unsigned int wrote_timeToManeuver:1;
        unsigned int wrote_trafficSpeed:1;
        unsigned int wrote_vehicleSpeed:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
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
@property(retain, nonatomic) GEOJunctionViewGuidanceFeedback *junctionViewGuidanceFeedback;
@property(readonly, nonatomic) BOOL hasJunctionViewGuidanceFeedback;
- (void)_readJunctionViewGuidanceFeedback;
@property(retain, nonatomic) GEOSpokenGuidanceFeedback *spokenGuidanceFeedback;
@property(readonly, nonatomic) BOOL hasSpokenGuidanceFeedback;
- (void)_readSpokenGuidanceFeedback;
@property(retain, nonatomic) GEOSignGuidanceFeedback *signGuidanceFeedback;
@property(readonly, nonatomic) BOOL hasSignGuidanceFeedback;
- (void)_readSignGuidanceFeedback;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) float duration;
- (int)StringAsTrafficSpeed:(id)arg1;
- (id)trafficSpeedAsString:(int)arg1;
@property(nonatomic) BOOL hasTrafficSpeed;
@property(nonatomic) int trafficSpeed;
@property(nonatomic) BOOL hasVehicleSpeed;
@property(nonatomic) float vehicleSpeed;
@property(nonatomic) BOOL hasTimeToManeuver;
@property(nonatomic) float timeToManeuver;
@property(nonatomic) BOOL hasDistanceToManeuver;
@property(nonatomic) float distanceToManeuver;
@property(nonatomic) BOOL hasEventIndex;
@property(nonatomic) unsigned int eventIndex;
@property(nonatomic) BOOL hasEnrouteNoticeIndex;
@property(nonatomic) unsigned int enrouteNoticeIndex;
@property(nonatomic) BOOL hasStepID;
@property(nonatomic) unsigned int stepID;
@property(retain, nonatomic) NSData *routeID;
@property(readonly, nonatomic) BOOL hasRouteID;
- (void)_readRouteID;
- (id)initWithData:(id)arg1;
- (id)init;

@end

