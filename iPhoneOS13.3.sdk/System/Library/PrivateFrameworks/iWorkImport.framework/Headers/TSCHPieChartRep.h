//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartRep.h>

@class NSArray, NSDictionary, TSCHChartRadialElementsRenderer;

__attribute__((visibility("hidden")))
@interface TSCHPieChartRep : TSCHChartRep
{
    TSCHChartRadialElementsRenderer *mPieElementRenderer;
    NSArray *mWedgeKnobs;
    NSDictionary *mSeriesIndexedPieWedgeDraggingLayers;
    BOOL mHasDrawnSinceWedgeKnobTrackerCreated;
}

// - (void).cxx_destruct;
- (void)renderIntoContext:(CGContext )arg1 visible:(CGRect)arg2;
- (double)p_radius;
- (double)dragTravelAlongBisectorBetweenStartPoint:(CGPoint)arg1 andEndingPoint:(CGPoint)arg2 forSeries:(NSUInteger)arg3;
- (void)clearRenderers;
- (id)pieElementRenderer;
- (BOOL)forceRenderBlankBackground;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

