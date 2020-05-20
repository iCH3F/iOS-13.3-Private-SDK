//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDAngleGradient.h>

#import <iWorkImport/TSDGradientStopContainer-Protocol.h>

@class NSArray, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDMutableAngleGradient : TSDAngleGradient <TSDGradientStopContainer>
{
}

// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) double gradientAngle; // @dynamic gradientAngle;
@property(nonatomic) double gradientAngleInDegrees; // @dynamic gradientAngleInDegrees;
@property(nonatomic) double opacity; // @dynamic opacity;
@property(nonatomic) BOOL isAdvancedGradient; // @dynamic isAdvancedGradient;
@property(retain, nonatomic) TSUColor *lastColor;
@property(retain, nonatomic) TSUColor *firstColor;
- (void)setInflectionOfStopAtIndex:(NSUInteger)arg1 toInflection:(double)arg2;
- (void)setColorOfStopAtIndex:(NSUInteger)arg1 toColor:(id)arg2;
- (void)swapStopAtIndex:(NSUInteger)arg1 withStopAtIndex:(NSUInteger)arg2;
- (void)moveStopAtIndex:(NSUInteger)arg1 toFraction:(double)arg2;
@property(nonatomic) NSUInteger gradientType; // @dynamic gradientType;
- (void)evenlyDistributeStops;
- (void)reverseStopOrder;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (id)insertStopAtFraction:(double)arg1;
- (id)removeStopAtIndex:(NSUInteger)arg1;
- (void)removeStop:(id)arg1;
- (void)insertGradientStop:(id)arg1;
@property(retain, nonatomic) NSArray *gradientStops; // @dynamic gradientStops;

@end

