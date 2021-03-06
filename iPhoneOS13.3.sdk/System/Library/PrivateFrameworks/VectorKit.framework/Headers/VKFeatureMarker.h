//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, NSString;

@interface VKFeatureMarker : NSObject
{
    shared_ptr_430519ce _actualFeatureMarker;
}

+ (id)markerWithFeatureMarker:(const shared_ptr_430519ce )arg1;
- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly) const shared_ptr_430519ce actualFeatureMarker;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic) NSUInteger venueID;
@property(readonly, nonatomic) NSUInteger featureID;
@property(readonly, nonatomic) NSString *shortName;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithFeatureMarkerPtr:(const shared_ptr_430519ce )arg1;

@end

