//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol VKCustomFeatureDataSource;

@interface VKCustomFeature : NSObject <NSSecureCoding>
{
    shared_ptr_e9082761 _feature;
    id <VKCustomFeatureDataSource> _dataSource;
}

+ (BOOL)supportsSecureCoding;
+ (CDStruct_071ac149)muninFeatureLocationForItemCoordinate:(CDStruct_c3b9c2ee)arg1 viewPosition:(CDStruct_071ac149)arg2 groundAltitude:(double)arg3;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)isInjectedFeature;
- (shared_ptr_e9082761 )feature;
- (void)setPlaceholderIconWithSize:(CGSize)arg1 anchorPoint:(CGPoint)arg2 isRound:(BOOL)arg3;
- (void)setAnnotationText:(id)arg1 locale:(id)arg2;
- (void)setText:(id)arg1 locale:(id)arg2;
- (void)setTextDisplayMode:(unsigned char)arg1;
- (void)setSortKey:(int)arg1;
- (void)setMaxZoom:(float)arg1;
- (void)setMinZoom:(float)arg1;
- (id)styleAttributes;
- (void)setStyleAttributes:(id)arg1;
- (short)venueFloorOrdinal;
- (void)setVenueFloorOrdinal:(short)arg1;
- (NSUInteger)venueComponentID;
- (void)setVenueComponentID:(NSUInteger)arg1;
- (NSUInteger)venueLevelID;
- (void)setVenueLevelID:(NSUInteger)arg1;
- (NSUInteger)venueBuildingID;
- (void)setVenueBuildingID:(NSUInteger)arg1;
- (NSUInteger)venueID;
- (void)setVenueID:(NSUInteger)arg1;
- (NSUInteger)businessID;
- (void)setBusinessID:(NSUInteger)arg1;
- (NSUInteger)featureID;
- (void)setFeatureID:(NSUInteger)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initInternalFeatureWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)init;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 elevation:(double)arg2;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)_initWithCoordinate:(CDStruct_071ac149)arg1 isInjected:(BOOL)arg2;

@end

