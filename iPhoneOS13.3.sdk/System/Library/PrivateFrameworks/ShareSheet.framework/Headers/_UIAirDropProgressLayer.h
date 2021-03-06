//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface _UIAirDropProgressLayer : CALayer
{
    double _progressLineWidth;
    double _oneFullRotation;
    BOOL _showProgressTray;
    UIColor *_progressColor;
    UIColor *_progressBackgroundColor;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) BOOL showProgressTray; // @synthesize showProgressTray=_showProgressTray;
@property(nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
// - (void).cxx_destruct;
- (void)drawInContext:(CGContext )arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

