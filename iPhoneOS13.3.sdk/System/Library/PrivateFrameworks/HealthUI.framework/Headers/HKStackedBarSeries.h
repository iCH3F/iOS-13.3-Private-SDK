//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKBarSeries.h>

@class NSArray;

@interface HKStackedBarSeries : HKBarSeries
{
    NSArray *_selectedFillStyles;
    NSArray *_unselectedFillStyles;
}

@property(copy, nonatomic) NSArray *unselectedFillStyles; // @synthesize unselectedFillStyles=_unselectedFillStyles;
@property(copy, nonatomic) NSArray *selectedFillStyles; // @synthesize selectedFillStyles=_selectedFillStyles;
// - (void).cxx_destruct;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContext )arg5;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContext )arg4 axisRect:(CGRect)arg5;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;

@end

