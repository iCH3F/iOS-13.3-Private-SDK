//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartAreaSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject
{
}

+ (float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2;
+ (BOOL)supportsChartSeriesDepthOffset;
+ (float)chartSeriesDepth;
+ (float)chartSeriesPolygonOffset;
+ (id)chartSeriesType;
- (void)sortElements:(id )arg1 pipeline:(id)arg2;
- (float)depthForScene:(id)arg1;
- (BOOL)transparencyDepthMask;

@end

