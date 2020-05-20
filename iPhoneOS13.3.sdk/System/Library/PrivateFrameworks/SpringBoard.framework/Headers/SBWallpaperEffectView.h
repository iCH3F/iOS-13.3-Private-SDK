//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBApplicationSceneBackgroundView-Protocol.h>
#import <SpringBoard/SBWallpaperObserver-Protocol.h>
#import <SpringBoard/_SBFakeBlurObserver-Protocol.h>

@class NSString, SBWallpaperController, UIColor, UIImage, UIImageView;
@protocol _SBFakeBlur;

@interface SBWallpaperEffectView : UIView <_SBFakeBlurObserver, SBWallpaperObserver, SBApplicationSceneBackgroundView>
{
    long long _variant;
    UIColor *_wallpaperAverageColor;
    long long _startStyle;
    long long _endStyle;
    double _transitionFraction;
    UIView<_SBFakeBlur> *_blurView;
    UIView *_grayscaleTintView;
    UIView *_colorTintView;
    UIView<_SBFakeBlur> *_transitionBlurView;
    UIView *_transitionGrayscaleTintView;
    UIView *_transitionColorTintView;
    UIImageView *_maskImageView;
    UIView *_blurMaskingContainer;
    UIView *_tintMaskingContainer;
    UIImage *_maskImage;
    BOOL _shouldMaskBlur;
    BOOL _shouldMaskTint;
    BOOL _fullscreen;
    BOOL _forcesOpaque;
    NSUInteger _transformOptions;
    BOOL _accessibilityReduceTransparencyEnabled;
    SBWallpaperController *_wallpaperController;
}

+ (id)imageInRect:(CGRect)arg1 forVariant:(long long)arg2 withStyle:(long long)arg3 zoomFactor:(double)arg4 mask:(id)arg5 masksBlur:(BOOL)arg6 masksTint:(BOOL)arg7;
@property(retain, nonatomic) UIView *tintMaskingContainer; // @synthesize tintMaskingContainer=_tintMaskingContainer;
@property(retain, nonatomic) UIView *blurMaskingContainer; // @synthesize blurMaskingContainer=_blurMaskingContainer;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIView *transitionColorTintView; // @synthesize transitionColorTintView=_transitionColorTintView;
@property(retain, nonatomic) UIView *transitionGrayscaleTintView; // @synthesize transitionGrayscaleTintView=_transitionGrayscaleTintView;
@property(retain, nonatomic) UIView<_SBFakeBlur> *transitionBlurView; // @synthesize transitionBlurView=_transitionBlurView;
@property(retain, nonatomic) UIView *colorTintView; // @synthesize colorTintView=_colorTintView;
@property(retain, nonatomic) UIView *grayscaleTintView; // @synthesize grayscaleTintView=_grayscaleTintView;
@property(retain, nonatomic) UIView<_SBFakeBlur> *blurView; // @synthesize blurView=_blurView;
@property(readonly, nonatomic) SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
@property(nonatomic) NSUInteger transformOptions; // @synthesize transformOptions=_transformOptions;
@property(nonatomic, getter=isFullscreen) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) BOOL forcesOpaque; // @synthesize forcesOpaque=_forcesOpaque;
// - (void).cxx_destruct;
- (void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)updateBackgroundImage;
- (void)setAppearanceStorage:(id)arg1;
- (id)appearanceStorage;
- (void)setBarWantsAdaptiveBackdrop:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;
- (void)_configureGrayscaleAndColorTintViewForStartStyle:(BOOL)arg1;
- (void)_configureViewsForFullscreen:(BOOL)arg1;
- (BOOL)_isEffectivelyFullscreen;
- (void)_configureViews;
- (void)_configureForCurrentBlurStyle;
- (void)_configureFromScratch;
- (BOOL)_needsBlurViewForStyle:(long long)arg1;
- (void)_setTransitionFraction:(double)arg1;
@property(nonatomic) long long wallpaperStyle;
- (void)_updateWallpaperAverageColor:(id)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2;
- (void)layoutSubviews;
- (void)offsetWallpaperBy:(CGPoint)arg1;
- (void)setMaskImage:(id)arg1 masksBlur:(BOOL)arg2 masksTint:(BOOL)arg3;
- (BOOL)currentTransitionStateIsOpaque;
- (void)setTransitionState:(CDStruct_059c2b36)arg1;
- (BOOL)prepareToAnimateToTransitionState:(inout CDStruct_059c2b36 )arg1;
@property(nonatomic) double zoomScale;
- (void)setHidden:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)setStyle:(long long)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithWallpaperController:(id)arg1 variant:(long long)arg2 transformOptions:(NSUInteger)arg3;
- (id)initWithWallpaperVariant:(long long)arg1 transformOptions:(NSUInteger)arg2;
- (id)initWithWallpaperVariant:(long long)arg1;

@end
