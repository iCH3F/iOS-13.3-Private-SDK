//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IKViewElement, TVButtonContent, UIColor, UILabel, UIView, _TVImageView, _UIFloatingContentView;

@interface TVButton : UIControl
{
    TVButtonContent *_buttonContent;
    UIColor *_highlightColor;
    IKViewElement *_viewElement;
    id /* CDUnknownBlockType */ _selectActionHandler;
    id /* CDUnknownBlockType */ _playActionHandler;
}

+ (id)_buttonContentWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playActionHandler; // @synthesize playActionHandler=_playActionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ selectActionHandler; // @synthesize selectActionHandler=_selectActionHandler;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(readonly, nonatomic) TVButtonContent *buttonContent; // @synthesize buttonContent=_buttonContent;
// - (void).cxx_destruct;
- (void)_updateFocusStateWithCoordinator:(id)arg1;
- (void)_setFocused:(BOOL)arg1 animationCoordinator:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)_playButtonAction:(id)arg1;
- (void)_selectButtonAction:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setContentMotionRotation:(CGPoint)arg1 translation:(CGPoint)arg2;
- (void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)canBecomeFocused;
@property(readonly, nonatomic) UIView *overlayView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingView;
@property(retain, nonatomic) _TVImageView *accessoryView;
@property(retain, nonatomic) _TVImageView *imageView;
@property(retain, nonatomic) UILabel *textContentView;
@property(readonly, nonatomic) BOOL blurEnabled;
@property(readonly, nonatomic) long long backdropStyle;
- (void)setImageTrailsTextContent:(BOOL)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)_updateBackgroundColorForState:(NSUInteger)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setGroupName:(id)arg1;
@property(nonatomic, getter=isDisabled) BOOL disabled;
@property(nonatomic) double focusSizeIncrease;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)tv_setLayout:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3;

@end

