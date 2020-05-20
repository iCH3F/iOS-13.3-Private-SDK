//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

__attribute__((visibility("hidden")))
@interface TSUBezierPath : NSObject <NSCopying>
{
    long long sfr_elementCount;
    long long sfr_elementMax;
    struct PATHSEGMENT sfr_head;
    double sfr_elementLength;
    double sfr_totalLength;
    long long sfr_lastSubpathIndex;
    void sfr_extraSegments;
    double sfr_lineWidth;
    CGRect sfr_bounds;
    CGRect sfr_controlPointBounds;
    double sfr_miterLimit;
    double sfr_flatness;
    double sfr_dashedLinePattern;
    NSUInteger sfr_dashedLineCount;
    double sfr_dashedLinePhase;
    CGPath sfr_path;
    long long sfr_extraSegmentCount;
    long long sfr_extraSegmentMax;
    struct {
        unsigned int sfr_flags:8;
        unsigned int sfr_pathState:2;
        unsigned int sfr_calculatedLengths:1;
        unsigned int sfr_unused:21;
    } sfr_bpFlags;
}

+ (double)defaultLineWidth;
+ (void)setDefaultLineWidth:(double)arg1;
+ (NSUInteger)defaultLineJoinStyle;
+ (void)setDefaultLineJoinStyle:(NSUInteger)arg1;
+ (NSUInteger)defaultLineCapStyle;
+ (void)setDefaultLineCapStyle:(NSUInteger)arg1;
+ (NSUInteger)defaultWindingRule;
+ (void)setDefaultWindingRule:(NSUInteger)arg1;
+ (double)defaultFlatness;
+ (void)setDefaultFlatness:(double)arg1;
+ (double)defaultMiterLimit;
+ (void)setDefaultMiterLimit:(double)arg1;
+ (void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2;
+ (void)clipRect:(CGRect)arg1;
+ (void)strokeRect:(CGRect)arg1;
+ (void)fillRect:(CGRect)arg1;
+ (id)bezierPathWithCGPath:(CGPath )arg1;
+ (id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2;
+ (id)bezierPathWithOvalInRect:(CGRect)arg1;
+ (id)bezierPathWithRect:(CGRect)arg1;
+ (id)bezierPathWithDefaultsForErrorCases;
+ (id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2;
+ (id)bezierPath;
+ (void)initialize;
+ (double)lineWidth;
+ (void)setLineWidth:(double)arg1;
+ (NSUInteger)lineJoinStyle;
+ (void)setLineJoinStyle:(NSUInteger)arg1;
+ (NSUInteger)lineCapStyle;
+ (void)setLineCapStyle:(NSUInteger)arg1;
+ (NSUInteger)windingRule;
+ (void)setWindingRule:(NSUInteger)arg1;
+ (double)flatness;
+ (void)setFlatness:(double)arg1;
+ (double)miterLimit;
+ (void)setMiterLimit:(double)arg1;
+ (id)tracedPathForInstantAlphaBinaryBitmap:(id)arg1 pointSpacing:(double)arg2;
+ (id)tracedPathForImage:(CGImage )arg1 alphaThreshold:(double)arg2 pointSpacing:(double)arg3;
+ (CDStruct_46b2202e)lineEndPositioningOnPath:(id)arg1 atHead:(BOOL)arg2 headPoint:(CGPoint)arg3 tailPoint:(CGPoint)arg4 headLineEnd:(id)arg5 tailLineEnd:(id)arg6 stroke:(id)arg7;
+ (id)createClippedPath:(id)arg1 headPositioning:(CDStruct_46b2202e)arg2 tailPositioning:(CDStruct_46b2202e)arg3 stroke:(id)arg4;
+ (CDStruct_46b2202e)makeDefaultPositioning;
+ (CGPoint)p_findPointWithGreatestSlopeFromStartPoint:(CGPoint)arg1 toPointA:(CGPoint)arg2 orPointB:(CGPoint)arg3;
+ (id)bezierPathWithConvexHullOfPoints:(CGPoint )arg1 count:(NSUInteger)arg2;
+ (id)p_normalizeSubpaths:(id)arg1;
+ (id)p_mergeIntersectingSubpaths:(id)arg1 stopAfterFoundTwo:(BOOL)arg2;
+ (id)smoothBezierPath:(id)arg1 withThreshold:(double)arg2;
+ (id)exteriorOfBezierPath:(id)arg1;
+ (id)outsideEdgeOfBezierPath:(id)arg1;
+ (id)outlineBezierPath:(id)arg1 withThreshold:(double)arg2;
+ (id)outlineBezierPathSimplifyingIfNeeded:(id)arg1;
+ (id)outlineBezierPath:(id)arg1;
+ (id)appendBezierPaths:(id)arg1;
+ (id)excludeBezierPaths:(id)arg1;
+ (id)subtractBezierPaths:(id)arg1;
+ (id)intersectBezierPaths:(id)arg1;
+ (id)unitePolygonalBezierPaths:(id)arg1;
+ (id)uniteBezierPaths:(id)arg1;
+ (id)p_booleanWithBezierPaths:(id)arg1 operation:(int)arg2;
+ (CGRect)p_pathToBounds:(Path_1b135553 )arg1;
+ (id)p_pathToBezier:(Path_1b135553 )arg1;
+ (Path_1b135553 )p_bezierToPath:(id)arg1;
- (id)initWithCString:(const char )arg1;
- (const char )cString;
- (BOOL)containsPoint:(CGPoint)arg1;
- (void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(double)arg3;
- (void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5;
- (void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)appendBezierPathWithOvalInRect:(CGRect)arg1;
- (void)appendBezierPathWithPoints:(CGPoint )arg1 count:(long long)arg2;
- (void)appendBezierPathWithRect:(CGRect)arg1;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2;
- (void)_appendToPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2;
- (void)setAssociatedPoints:(CGPoint )arg1 atIndex:(long long)arg2;
- (long long)elementAtIndex:(long long)arg1 allPoints:(CGPoint )arg2;
- (long long)elementAtIndex:(long long)arg1 associatedPoints:(CGPoint )arg2;
- (long long)elementAtIndex:(long long)arg1;
- (long long)elementCount;
- (double)lengthToElement:(long long)arg1;
- (double)lengthOfElement:(long long)arg1;
- (double)length;
- (void)calculateLengths;
- (double)calculateLengthOfElement:(long long)arg1;
@property(readonly, nonatomic) BOOL containsClosePathElement;
- (BOOL)isClockwise;
- (BOOL)isFlat;
- (CGRect)bounds;
- (CGRect)controlPointBounds;
- (CGPoint)currentPoint;
- (BOOL)isEmpty;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (BOOL)isDiamond;
- (BOOL)isTriangular;
- (CGPath )CGPath;
- (void)transformUsingAffineTransform:(CGAffineTransform)arg1;
- (void)convertCloseElementsToLineElements;
- (id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(double)arg1;
- (id)bezierPathByRemovingRedundantElements;
- (id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(double)arg1;
- (id)bezierPathByReversingPath;
- (id)_copyFlattenedPath;
- (id)bezierPathByFlatteningPathWithFlatness:(double)arg1;
- (id)bezierPathByFlatteningPath;
- (void)flattenIntoPath:(id)arg1 flatness:(double)arg2;
- (void)flattenIntoPath:(id)arg1;
- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5;
- (void)addClip;
- (void)fill;
- (void)stroke;
- (void)_doPath;
- (CGPoint)_checkPointForValidity:(CGPoint)arg1;
- (BOOL)_isValid:(double)arg1;
- (void)getLineDash:(double )arg1 count:(long long )arg2 phase:(double )arg3;
- (void)setLineDash:(const double )arg1 count:(long long)arg2 phase:(double)arg3;
- (void)setFlatness:(double)arg1;
- (double)flatness;
- (void)setMiterLimit:(double)arg1;
- (double)miterLimit;
- (void)setWindingRule:(NSUInteger)arg1;
- (NSUInteger)windingRule;
- (void)setLineJoinStyle:(NSUInteger)arg1;
- (NSUInteger)lineJoinStyle;
- (void)setLineCapStyle:(NSUInteger)arg1;
- (NSUInteger)lineCapStyle;
- (void)setLineWidth:(double)arg1;
- (double)lineWidth;
- (void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3;
- (void)relativeCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2;
- (void)relativeLineToPoint:(CGPoint)arg1;
- (void)relativeMoveToPoint:(CGPoint)arg1;
- (void)removeAllPoints;
- (void)closePath;
- (void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3;
- (void)curveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2;
- (void)lineToPoint:(CGPoint)arg1;
- (void)moveToPoint:(CGPoint)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyPathAttributesTo:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3;
- (void)_deviceLineToPoint:(CGPoint)arg1;
- (void)_deviceMoveToPoint:(CGPoint)arg1;
- (void)_addPathSegment:(long long)arg1 point:(CGPoint)arg2;
- (id)description;
- (void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5;
- (id)chisel;
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(_NSRange)arg3 into:(id)arg4;
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 into:(id)arg3;
- (void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2;
- (double)curvatureAt:(double)arg1 fromElement:(long long)arg2;
- (double)curvatureAt:(double)arg1;
- (CGPoint)myGradientAt:(double)arg1 fromElement:(long long)arg2;
- (CGPoint)myGradientAt:(double)arg1;
- (CGPoint)rawGradientAt:(double)arg1 fromElement:(long long)arg2;
- (double)elementPercentageFromElement:(long long)arg1 forOverallPercentage:(double)arg2;
- (CGPoint)transformedTotalCoordinate:(CGPoint)arg1 betweenElement:(long long)arg2 andElement:(long long)arg3 withPressure:(id)arg4 getElement:(long long )arg5 getPercentage:(double )arg6;
- (CGPoint)transformedTotalCoordinate:(CGPoint)arg1 inElement:(long long)arg2 withPressure:(id)arg3;
- (CGPoint)transformedCoordinate:(CGPoint)arg1 withPressure:(id)arg2;
- (CGPoint)gradientAt:(double)arg1;
- (CGPoint)gradientAt:(double)arg1 fromElement:(long long)arg2;
- (CGPoint)pointAt:(double)arg1;
- (CGPoint)pointAt:(double)arg1 fromElement:(long long)arg2;
- (long long)elementPercentage:(double )arg1 forOverallPercentage:(double)arg2 startingElementIndex:(long long)arg3 lengthToStartingElement:(double)arg4;
- (long long)elementPercentage:(double )arg1 forOverallPercentage:(double)arg2;
- (CGPoint)nearestAngleOnPathToLine:(CGPoint [2])arg1;
- (CGPoint)nearestPointOnPathToLine:(CGPoint [2])arg1;
- (id)copyFromSegment:(int)arg1 t:(double)arg2 toSegment:(int)arg3 t:(double)arg4;
- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 t:(double)arg3 toSegment:(long long)arg4 t:(double)arg5 withoutMove:(BOOL)arg6;
- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 toSegment:(long long)arg3;
- (void)addIntersectionsWithLine:(CGPoint [2])arg1 to:(id)arg2;
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2;
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(BOOL)arg3 reversed:(BOOL)arg4;
- (void)getStartPoint:(CGPoint )arg1 andEndPoint:(CGPoint )arg2;
- (void)saveToArchive:(struct Path )arg1;
- (id)initWithArchive:(const struct Path )arg1;
@property(readonly, nonatomic) double flattenedArea;
- (id)copyWithPointsInRange:(_NSRange)arg1;
- (id)p_copyWithPointsInRange:(_NSRange)arg1 countingSubpaths:(NSUInteger )arg2;
- (void)appendPointsInRange:(_NSRange)arg1 fromBezierPath:(id)arg2;
- (id)aliasedPathWithViewScale:(float)arg1 effectiveStrokeWidth:(float)arg2;
- (id)aliasedPathInContext:(CGContext )arg1 effectiveStrokeWidth:(float)arg2;
- (id)p_aliasedPathInContext:(CGContext )arg1 viewScale:(float)arg2 effectiveStrokeWidth:(float)arg3;
- (CGPoint)roundPoint:(CGPoint)arg1 inContext:(CGContext )arg2 strokeWidth:(int)arg3;
- (void)addPathToContext:(CGContext )arg1;
- (BOOL)intersectsRect:(CGRect)arg1 hasFill:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isLineSegment;
@property(readonly, nonatomic) BOOL isOpen;
- (id)pathByWobblingByUpTo:(double)arg1 subdivisions:(NSUInteger)arg2;
- (void)clearStroke:(CGContext )arg1;
- (id)intersectBezierPath:(id)arg1;
- (id)subtractBezierPath:(id)arg1;
- (id)uniteWithPolygonalBezierPath:(id)arg1;
- (id)uniteWithBezierPath:(id)arg1;
- (id)outlineStroke;
- (id)bezierPathByOffsettingPath:(double)arg1 joinStyle:(NSUInteger)arg2 withThreshold:(double)arg3;
- (id)pathByNormalizingClosedPathToRemoveSelfIntersections;
- (id)p_elementCountForSubpaths;
- (id)pathSplitAtSubpathBoundariesWithSoftElementLimit:(NSUInteger)arg1 hardElementLimit:(NSUInteger)arg2;
- (id)arrayOfSubpathsWithEffectivelyEmptySubpathsRemoved:(BOOL)arg1;
@property(readonly, nonatomic) NSUInteger totalSubpathCountIncludingEffectivelyEmptySubpaths;
@property(readonly, nonatomic) NSArray *visuallyDistinctSubregions;
@property(readonly, nonatomic) BOOL hasAtLeastTwoVisuallyDistinctSubregions;
@property(readonly, nonatomic) BOOL containsElementsOtherThanMoveAndClose;
@property(readonly, nonatomic) BOOL isEffectivelyClosed;
- (void)iterateOverPathWithPointDistancePerIteration:(double)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (CGPoint)pointAlongPathAtPercentage:(double)arg1;
- (CGPoint)pointAlongPathAtPercentage:(double)arg1 withFlattenedPath:(id)arg2 andLength:(double )arg3 atStartIndex:(NSUInteger )arg4;
- (double)distanceToPoint:(CGPoint)arg1 elementIndex:(NSUInteger )arg2 tValue:(double )arg3 threshold:(double)arg4 findClosestMatch:(BOOL)arg5;
- (CGRect)boundsIncludingTSDStroke:(id)arg1;
- (CGRect)boundsIncludingStroke;
- (CGRect)boundsIncludingStrokeWidth:(double)arg1 joinStyle:(NSUInteger)arg2 capStyle:(NSUInteger)arg3 miterLimit:(double)arg4 needsToExtendJoins:(BOOL)arg5;
- (void)takeAttributesFromStroke:(id)arg1;
@property(readonly, nonatomic) BOOL isCompound;
- (void)alignBoundsToOrigin;
- (double)yValueFromXValue:(double)arg1;
- (id)pathByCreatingHoleInPathAtPoint:(CGPoint)arg1 withDiameter:(id /* CDUnknownBlockType */)arg2 andThreshold:(double)arg3 updatingPatternOffsetsBySubpath:(id)arg4;
- (id)pathBySplittingAtPointOnPath:(CGPoint)arg1 controlPointDistanceEqual:(BOOL)arg2;
- (id)p_pathBySplittingAtPointGuaranteedToBeOnPath:(CGPoint)arg1 controlPointDistanceEqual:(BOOL)arg2 elementIndex:(long long)arg3 parametricValue:(double)arg4;
- (double)yValueFromXValue:(double)arg1 elementIndex:(long long )arg2 parametricValue:(double )arg3;
- (id)bezierPathByFittingCurve:(id)arg1;
- (id)bezierPathByFittingCurve;

@end

