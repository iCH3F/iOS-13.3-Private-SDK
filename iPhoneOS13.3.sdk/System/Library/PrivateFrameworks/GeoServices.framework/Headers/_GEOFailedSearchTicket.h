//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/_GEOFailedTicket.h>

#import <GeoServices/GEOMapServiceSearchTicket-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOFailedSearchTicket : _GEOFailedTicket <GEOMapServiceSearchTicket>
{
    NSString *searchQuery;
    NSString *_searchQuery;
}

@property(readonly, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
// - (void).cxx_destruct;
- (id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3;

@end

