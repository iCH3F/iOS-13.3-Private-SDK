//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartShadowsSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartPerspectiveShadowsSceneObject : TSCH3DChartShadowsSceneObject
{
}

+ (id)blurParametersArray;
- (id)createShadowsRenderer;
- (void)updateShadowPlane:(id)arg1 texcoords:(id)arg2 scene:(id)arg3 blurslack:(float)arg4 angle:(float)arg5 quality:(float)arg6 planePadding:(box_a3bd9649)arg7;
- (void)updateCoordsAndTexcoords:(const box_a3bd9649 )arg1 camera:(id)arg2 quad:(id)arg3 texcoords:(id)arg4;
- (id)createCamera;

@end

