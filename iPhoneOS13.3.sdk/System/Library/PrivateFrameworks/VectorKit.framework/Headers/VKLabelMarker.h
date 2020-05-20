//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKFeatureMarker.h>

@class NSArray;

@interface VKLabelMarker : VKFeatureMarker
{
    shared_ptr_2d33c5e4 _labelMarker;
}

+ (id)markerWithLabelMarker:(const shared_ptr_2d33c5e4 )arg1;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)parentClusterLabelMarker;
- (BOOL)isClusterChild;
- (id)clusterFeatureAnnotations;
- (NSUInteger)clusterFeatureCount;
- (id)clusterContentBounds;
- (BOOL)isLeafCluster;
- (BOOL)isCluster;
- (id)debugAnchorPointString;
- (NSUInteger)elementCount;
- (int)sortKey;
- (NSUInteger)animationID;
- (unsigned char)pickedLabelBalloonBehavior;
- (int)selectionType;
- (BOOL)isLabelHitAtScreenPoint:(CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
- (CGRect)screenCollisionBounds;
- (CGPoint)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2;
- (CGPoint)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(BOOL)arg3;
- (void)setIsPickedIconDrawnExternally:(BOOL)arg1;
- (void)setLabelPressed:(BOOL)arg1;
@property(readonly, nonatomic) NSArray *shields;
@property(readonly, nonatomic) NSArray *imageKeys;
@property(readonly, nonatomic) NSArray *relatedSubTexts;
@property(readonly, nonatomic) NSArray *relatedTexts;
- (id)featureHandles;
- (id)featureAnnotation;
- (id)routeInfo;
- (id)trafficCamera;
- (id)incident;
- (id)featureTile;
- (int)featureType;
- (BOOL)positionOfInterest:(CDStruct_c3b9c2ee )arg1 zoom:(float )arg2;
- (unsigned char)venueComponentType;
- (BOOL)hasVenueLookInsideFloorOrdinal;
- (short)venueLookInsideFloorOrdinal;
- (short)venueFloorOrdinal;
- (NSUInteger)venueComponentID;
- (NSUInteger)venueLevelID;
- (NSUInteger)venueBuildingID;
- (NSUInteger)venueID;
- (NSUInteger)countFeatureIDs;
- (const NSUInteger )featureIDs;
- (NSUInteger)businessID;
- (BOOL)hasBusinessID;
- (BOOL)isTransitAccessPoint;
- (BOOL)isTransitLine;
- (BOOL)isTransit;
- (BOOL)isFlyoverTour;
- (BOOL)isVenueButton;
- (BOOL)isRouteEta;
- (BOOL)isTrafficCamera;
- (BOOL)isTrafficIncident;
- (BOOL)isOneWayArrow;
- (BOOL)isTextVisible;
- (BOOL)isVisible;
- (BOOL)isAlongSelectedTransitLine;
- (BOOL)isOnRoute;
@property(nonatomic) BOOL isDragged;
- (BOOL)isSelected;
- (BOOL)isSelectable;
- (CGRect)calloutAnchorRect;
- (id)mapRegion;
- (Box_3d7e3c2c)_bounds;
- (CDStruct_c3b9c2ee)coordinate;
@property(readonly, nonatomic) NSArray *transitSystems;
@property(readonly, nonatomic) NSArray *iconImageKeys;
@property(readonly, nonatomic) NSArray *dataIconImageKeys;
- (id)locale;
- (id)subtext;
- (id)text;
- (const shared_ptr_2d33c5e4 )labelMarkerImpl;
- (id)initWithLabelMarkerPtr:(const shared_ptr_2d33c5e4 )arg1;

@end

