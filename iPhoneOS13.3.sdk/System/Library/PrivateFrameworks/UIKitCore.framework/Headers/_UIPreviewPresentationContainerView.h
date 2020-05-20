//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class _UIPreviewPresentationEffectView;

@interface _UIPreviewPresentationContainerView : UIView
{
    BOOL _shouldLayoutForCommitPhase;
    UIView *_contentView;
    double _cornerRadius;
    _UIPreviewPresentationEffectView *_platterClippingView;
    UIView *_platterShadowView;
    UIView *_contentTransformView;
    _UIPreviewPresentationEffectView *_platterView;
    CGSize _preferredContentSize;
}

@property(retain, nonatomic) _UIPreviewPresentationEffectView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) UIView *contentTransformView; // @synthesize contentTransformView=_contentTransformView;
@property(retain, nonatomic) UIView *platterShadowView; // @synthesize platterShadowView=_platterShadowView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *platterClippingView; // @synthesize platterClippingView=_platterClippingView;
@property(nonatomic) BOOL shouldLayoutForCommitPhase; // @synthesize shouldLayoutForCommitPhase=_shouldLayoutForCommitPhase;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (CGSize)_standardPreferredContentSize;
- (CGRect)_preferredPlatterRectForContainerRect:(CGRect)arg1;
- (void)initPlatterViewsIfNeeded;
- (BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) BOOL shouldRasterizeForTransition; // @dynamic shouldRasterizeForTransition;
@property(nonatomic) double blurRadius; // @dynamic blurRadius;
- (id)initWithFrame:(CGRect)arg1;

@end

