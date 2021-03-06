//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class MTVisualStylingProvider, MediaControlsExpandableButtonOption, NSArray, NSMutableArray, NSString, NSTimer, UILabel, UIView;

@interface MediaControlsExpandableButton : UIControl <MTVisualStylingProviderObservingPrivate>
{
    BOOL _expanded;
    BOOL _toggleEnabled;
    BOOL _displayMessage;
    BOOL _resetTracking;
    NSArray *_options;
    long long _selectedOptionIndex;
    NSString *_title;
    long long _axis;
    NSMutableArray *_buttons;
    UIView *_backgroundView;
    UIView *_overlaySelectionView;
    UIView *_selectionView;
    UIView *_clippingView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_messageLabel;
    NSTimer *_messageTimer;
    MTVisualStylingProvider *_visualStylingProvider;
    CGSize _maximumExpandedSize;
}

@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(nonatomic) BOOL resetTracking; // @synthesize resetTracking=_resetTracking;
@property(nonatomic) BOOL displayMessage; // @synthesize displayMessage=_displayMessage;
@property(nonatomic) BOOL toggleEnabled; // @synthesize toggleEnabled=_toggleEnabled;
@property(retain, nonatomic) NSTimer *messageTimer; // @synthesize messageTimer=_messageTimer;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UIView *overlaySelectionView; // @synthesize overlaySelectionView=_overlaySelectionView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) CGSize maximumExpandedSize; // @synthesize maximumExpandedSize=_maximumExpandedSize;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long selectedOptionIndex; // @synthesize selectedOptionIndex=_selectedOptionIndex;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
// - (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (long long)_buttonLayoutAxis;
- (void)_resetSelectionView;
- (void)_animateSelectedGlyphState;
- (void)_springAnimate:(id /* CDUnknownBlockType */)arg1;
- (void)_layoutSelectionView;
- (void)_layoutLabels;
- (void)_updateSelectionVisiblity;
- (void)_updateLabelVisualStyling;
- (void)_updateButtonsVisiblity;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)didTapButton:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)showMessage:(id)arg1;
@property(readonly, nonatomic) MediaControlsExpandableButtonOption *selectedOption;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (id)initForControlCenter;

@end

