//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationShapeView.h>

@interface NTKRichComplicationCurveView : NTKRichComplicationShapeView
{
    double _curveWidth;
    double _padding;
    double _drawingBeginAngle;
    double _drawingEndAngle;
    BOOL _clockwise;
    double _beginAngle;
    double _endAngle;
}

@property(nonatomic) BOOL clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double beginAngle; // @synthesize beginAngle=_beginAngle;
- (BOOL)_shouldReverseGradient;
- (void)_updatePath;
- (const CGPath )_generatePath;
- (id)_normalizeGradientLocations:(id)arg1;
- (CGPoint)_pointAtProgress:(float)arg1;
- (double)_angleAtProgress:(float)arg1;
- (double)_shapeLineWidth;
- (void)_setupGradientLayer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 forDevice:(id)arg5 withFilterStyle:(long long)arg6;

@end

