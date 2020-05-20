//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

@class LPImage, LPImagePresentationProperties, LPImageViewStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPImageView : LPComponentView
{
    LPImage *_image;
    LPImagePresentationProperties *_properties;
    LPImageViewStyle *_style;
    LPImageViewStyle *_originalStyle;
    long long _currentScalingMode;
    long long _platterReason;
    UIImageView *_imageView;
    UIView *_overlayView;
    UIView *_backgroundView;
}

// - (void).cxx_destruct;
- (void)_setImageViewScalingMode:(long long)arg1;
- (id)_createImageViewWithImage:(id)arg1;
- (void)_updateScalingMode;
- (id)_createOverlayViewWithOpacity:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)imageSizeThatFits:(CGSize)arg1 scalingMode:(long long)arg2;
- (CGSize)imageSizeThatFits:(CGSize)arg1;
- (long long)scalingModeForSize:(CGSize)arg1;
- (void)installDarkeningView;
- (BOOL)shouldApplyBackground;
- (void)layoutComponentView;
- (void)updateShadowPath;
- (void)setCornerRadius:(double)arg1 continuous:(BOOL)arg2;
- (void)componentViewDidMoveToWindow;
- (long long)_filter;
- (id)initWithImage:(id)arg1 properties:(id)arg2 style:(id)arg3;
- (id)init;

@end

