//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface _PKInkColorButton : UIButton
{
    BOOL _isCompact;
    BOOL _isUsedOnDarkBackground;
    UIColor *_color;
}

+ (id)strokeColorForStrokeShapeLayerWithColor:(id)arg1 isUsedOnDarkBackground:(BOOL)arg2;
+ (id)pathForStrokeShapeLayerWithSwatchRect:(CGRect)arg1 selected:(BOOL)arg2 color:(id)arg3 isUsedOnDarkBackground:(BOOL)arg4 isCompact:(BOOL)arg5;
+ (id)pathForSelectedColorShapeLayerWithSwatchRect:(CGRect)arg1 selected:(BOOL)arg2 embossed:(BOOL)arg3 isCompact:(BOOL)arg4;
+ (id)pathForFillShapeLayerWithSwatchRect:(CGRect)arg1 selected:(BOOL)arg2 isCompact:(BOOL)arg3;
+ (id)embossOverlayImageForColor:(id)arg1 selected:(BOOL)arg2 isCompact:(BOOL)arg3;
+ (double)swatchInsetForIsCompact:(BOOL)arg1;
+ (CGRect)swatchRectForBounds:(CGRect)arg1 isCompact:(BOOL)arg2;
+ (double)innerColorCircleInset:(BOOL)arg1;
+ (double)transparentSelectionRingInset:(BOOL)arg1;
+ (id)buttonWithColor:(id)arg1 isCompact:(BOOL)arg2;
@property(nonatomic) BOOL isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(nonatomic) BOOL isCompact; // @synthesize isCompact=_isCompact;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
// - (void).cxx_destruct;
- (double)_swatchInset;
- (CGRect)_swatchRect;
- (BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithColor:(id)arg1 isCompact:(BOOL)arg2;

@end

