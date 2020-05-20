//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HRListItemLabel, HRStackedButtonView, HRTitledListItemLabel, NSLayoutConstraint, UILabel, UIView;

@interface HROnboardingAtrialFibrillationLimitationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>
{
    BOOL _stateAnimating;
    long long _state;
    double _initialContentOffset;
    UILabel *_titleLabel;
    UIView *_backgroundView1;
    UIView *_backgroundView2;
    UIView *_backgroundView3;
    UIView *_backgroundView4;
    HRTitledListItemLabel *_titledListItemLabel1;
    HRTitledListItemLabel *_titledListItemLabel2;
    HRTitledListItemLabel *_titledListItemLabel3;
    HRListItemLabel *_listItemLabel4;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

+ (id)_createNumberedViewWithInteger:(NSUInteger)arg1;
+ (id)_createBackgroundView;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) HRListItemLabel *listItemLabel4; // @synthesize listItemLabel4=_listItemLabel4;
@property(retain, nonatomic) HRTitledListItemLabel *titledListItemLabel3; // @synthesize titledListItemLabel3=_titledListItemLabel3;
@property(retain, nonatomic) HRTitledListItemLabel *titledListItemLabel2; // @synthesize titledListItemLabel2=_titledListItemLabel2;
@property(retain, nonatomic) HRTitledListItemLabel *titledListItemLabel1; // @synthesize titledListItemLabel1=_titledListItemLabel1;
@property(retain, nonatomic) UIView *backgroundView4; // @synthesize backgroundView4=_backgroundView4;
@property(retain, nonatomic) UIView *backgroundView3; // @synthesize backgroundView3=_backgroundView3;
@property(retain, nonatomic) UIView *backgroundView2; // @synthesize backgroundView2=_backgroundView2;
@property(retain, nonatomic) UIView *backgroundView1; // @synthesize backgroundView1=_backgroundView1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(nonatomic) BOOL stateAnimating; // @synthesize stateAnimating=_stateAnimating;
@property(nonatomic) long long state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)_scrollBackgroundViewToVisible:(id)arg1;
- (void)_updateContentViewBottomConstraintWithAnchor:(id)arg1 constant:(double)arg2;
- (id)_bottomViewForState:(long long)arg1;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpStackedButtonView;
- (void)_setUpInfoLabelConstraints;
- (void)_setUpInfoLabels;
- (void)_setUpTitleConstraints;
- (void)_setUpTitleLabel;
- (CGSize)_listItemSize;
- (void)_updateUIWithState:(long long)arg1 animated:(BOOL)arg2;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidLoad;
- (id)initForOnboarding:(BOOL)arg1;

@end

