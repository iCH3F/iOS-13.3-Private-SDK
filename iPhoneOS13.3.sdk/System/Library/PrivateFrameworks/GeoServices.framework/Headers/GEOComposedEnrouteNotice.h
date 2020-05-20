//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEOComposedRoute, GEOComposedTrafficCamera, GEOComposedTrafficSignal, GEOEnrouteNotice, NSArray, NSString;

@interface GEOComposedEnrouteNotice : NSObject <NSSecureCoding>
{
    GEOEnrouteNotice *_enrouteNotice;
    GEOComposedRoute *_route;
    NSArray *_guidanceEvents;
    CDStruct_3f2a7a20 _routeCoordinate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRoute:(id)arg1;
@property(readonly, nonatomic) unsigned int priority;
@property(readonly, nonatomic) BOOL hasPriority;
@property(readonly, nonatomic) unsigned int groupIdentifier;
@property(readonly, nonatomic) BOOL hasGroupIdentifier;
- (id)detailFormatForLocation:(id)arg1;
- (id)titleFormatForLocation:(id)arg1;
@property(readonly, nonatomic) CDStruct_3f2a7a20 routeCoordinate;
@property(readonly, nonatomic) unsigned int highlightDistance;
@property(readonly, nonatomic) BOOL hasHighlightDistance;
@property(readonly, nonatomic) GEOComposedTrafficSignal *trafficSignal;
@property(readonly, nonatomic) GEOComposedTrafficCamera *trafficCamera;
@property(readonly, nonatomic) NSString *identifier;
- (id)description;
- (id)initWithEnrouteNotice:(id)arg1 onRoute:(id)arg2;

@end

