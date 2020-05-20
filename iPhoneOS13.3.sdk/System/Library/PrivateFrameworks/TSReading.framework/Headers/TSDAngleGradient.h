//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDGradient.h>

#import <TSReading/TSDMixing-Protocol.h>

@interface TSDAngleGradient : TSDGradient <TSDMixing>
{
    double mAngle;
}

@property(nonatomic) double gradientAngle; // @synthesize gradientAngle=mAngle;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)p_paintPath:(CGPath )arg1 inContext:(CGContext )arg2;
- (CGAffineTransform)p_shadingTransformForBounds:(CGRect)arg1;
- (void)paintPath:(CGPath )arg1 inContext:(CGContext )arg2;
- (void)paintPath:(CGPath )arg1 naturalBounds:(CGRect)arg2 inContext:(CGContext )arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(CGRect)arg1 inContext:(CGContext )arg2;
- (void)paintRect:(CGRect)arg1 inContext:(CGContext )arg2 atAngle:(double)arg3;
- (CGPoint)endPointForPath:(id)arg1 andBounds:(CGRect)arg2;
- (CGPoint)startPointForPath:(id)arg1 andBounds:(CGRect)arg2;
- (double)p_bestGradientLengthForRect:(CGRect)arg1 atAngle:(double)arg2;
@property(readonly, nonatomic) double gradientAngleInDegrees;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(NSUInteger)arg3 angle:(double)arg4;
- (id)initWithGradientStops:(id)arg1 type:(NSUInteger)arg2 opacity:(double)arg3 angle:(double)arg4;
- (void)setLastColor:(id)arg1;
- (void)setFirstColor:(id)arg1;
- (void)setInflectionOfStopAtIndex:(NSUInteger)arg1 toInflection:(double)arg2;
- (void)setColorOfStopAtIndex:(NSUInteger)arg1 toColor:(id)arg2;
- (void)swapStopAtIndex:(NSUInteger)arg1 withStopAtIndex:(NSUInteger)arg2;
- (void)moveStopAtIndex:(NSUInteger)arg1 toFraction:(double)arg2;
- (void)setGradientType:(NSUInteger)arg1;
- (void)evenlyDistributeStops;
- (void)reverseStopOrder;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (id)insertStopAtFraction:(double)arg1;
- (id)removeStopAtIndex:(NSUInteger)arg1;
- (void)removeStop:(id)arg1;
- (void)insertGradientStop:(id)arg1;
- (void)setGradientStops:(id)arg1;

@end

