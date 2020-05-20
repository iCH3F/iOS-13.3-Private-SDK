//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class CAAnimation, CAGradientLayer, CAShapeLayer, ICDocCamImageQuad, NSArray, NSDate, NSObject, NSString, UIColor, UILabel;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface ICDocCamOverlayView : UIView <CAAnimationDelegate>
{
    NSObject<OS_dispatch_semaphore> *sem;
    BOOL _showGridAnimation;
    BOOL _rectangleIsActive;
    NSString *_displayString;
    ICDocCamImageQuad *_documentQuad;
    NSArray *_debugRects;
    UIColor *_rectColor;
    CAShapeLayer *_llShapeLayer;
    CAShapeLayer *_lrShapeLayer;
    CAShapeLayer *_ulShapeLayer;
    CAShapeLayer *_urShapeLayer;
    CAShapeLayer *_rectangleShapeLayer;
    NSUInteger _numberOfMissedFrames;
    UILabel *_displayStringLabel;
    CAShapeLayer *_rectangleGridLayer;
    NSDate *_dateToStartGridAnimation;
    CAAnimation *_gridAnimation;
    CAGradientLayer *_gradientMaskLayer;
    CGRect _previewBounds;
}

@property(retain, nonatomic) CAGradientLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(retain, nonatomic) CAAnimation *gridAnimation; // @synthesize gridAnimation=_gridAnimation;
@property(retain, nonatomic) NSDate *dateToStartGridAnimation; // @synthesize dateToStartGridAnimation=_dateToStartGridAnimation;
@property(retain, nonatomic) CAShapeLayer *rectangleGridLayer; // @synthesize rectangleGridLayer=_rectangleGridLayer;
@property(retain, nonatomic) UILabel *displayStringLabel; // @synthesize displayStringLabel=_displayStringLabel;
@property NSUInteger numberOfMissedFrames; // @synthesize numberOfMissedFrames=_numberOfMissedFrames;
@property(retain, nonatomic) CAShapeLayer *rectangleShapeLayer; // @synthesize rectangleShapeLayer=_rectangleShapeLayer;
@property(retain, nonatomic) CAShapeLayer *urShapeLayer; // @synthesize urShapeLayer=_urShapeLayer;
@property(retain, nonatomic) CAShapeLayer *ulShapeLayer; // @synthesize ulShapeLayer=_ulShapeLayer;
@property(retain, nonatomic) CAShapeLayer *lrShapeLayer; // @synthesize lrShapeLayer=_lrShapeLayer;
@property(retain, nonatomic) CAShapeLayer *llShapeLayer; // @synthesize llShapeLayer=_llShapeLayer;
@property(nonatomic) BOOL rectangleIsActive; // @synthesize rectangleIsActive=_rectangleIsActive;
@property(retain) UIColor *rectColor; // @synthesize rectColor=_rectColor;
@property BOOL showGridAnimation; // @synthesize showGridAnimation=_showGridAnimation;
@property CGRect previewBounds; // @synthesize previewBounds=_previewBounds;
// - (void).cxx_destruct;
- (struct CATransform3D)calculateRotationTransformForPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2;
- (void)setupGridLayers;
- (void)setupRectangleLayer;
- (void)setupShapeLayersIfNeeded;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)stopGridAnimation;
- (void)startGridAnimationFromRect:(id)arg1;
- (void)updateGridLayerFromRect:(id)arg1;
- (void)updateRectangleLayerFromRect:(id)arg1;
- (id)yellowColorWithAlpha:(double)arg1;
- (id)extrudedRectFromRect:(id)arg1;
- (CGPath )newGridPathFromRect:(id)arg1;
- (CGPath )newPathFromRect:(id)arg1;
- (id)calculateCurrentRectangleFromDocumentQuad:(id)arg1;
- (CGRect)frameForContentInView;
- (void)updateShapeLayers;
- (void)clearRectangles;
@property(retain) ICDocCamImageQuad *documentQuad; // @synthesize documentQuad=_documentQuad;
@property(retain) NSArray *debugRects; // @synthesize debugRects=_debugRects;
@property(retain) NSString *displayString; // @synthesize displayString=_displayString;
- (double)crossProduct:(CGPoint)arg1 v2:(CGPoint)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

