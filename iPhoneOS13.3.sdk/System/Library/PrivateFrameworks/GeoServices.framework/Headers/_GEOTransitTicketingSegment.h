//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitTicketingSegmentInfo-Protocol.h>

@class GEOTransitTicketingSegment, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitTicketingSegment : NSObject <GEOTransitTicketingSegmentInfo>
{
    GEOTransitTicketingSegment *_segment;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *segmentName;
@property(readonly, nonatomic) NSString *ticketingUrl;
- (id)initWithSegment:(id)arg1;

@end

