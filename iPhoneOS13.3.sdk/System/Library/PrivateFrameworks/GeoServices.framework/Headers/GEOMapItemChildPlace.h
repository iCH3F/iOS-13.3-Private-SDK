//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemIdentifier, GEOPDChildPlace, NSString;

@interface GEOMapItemChildPlace : NSObject
{
    GEOPDChildPlace *_childPlace;
    GEOMapItemIdentifier *_identifier;
}

// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) NSString *name;
- (id)initWithChildPlace:(id)arg1;

@end

