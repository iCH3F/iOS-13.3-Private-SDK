//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HKSeparatorLineView, NSLayoutConstraint, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordGroupableCell : UITableViewCell
{
    BOOL _extraTopPadding;
    long long _intendedPlacement;
    UIView *_pillBackgroundView;
    UIColor *_pillBackgroundColor;
    double _sectionTopPadding;
    HKSeparatorLineView *_separatorView;
    NSLayoutConstraint *_separatorLeadingConstant;
    NSLayoutConstraint *_separatorTrailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    UIEdgeInsets _separatorInsets;
}

+ (double)defaultGap;
+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorTrailingConstraint; // @synthesize separatorTrailingConstraint=_separatorTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorLeadingConstant; // @synthesize separatorLeadingConstant=_separatorLeadingConstant;
@property(retain, nonatomic) HKSeparatorLineView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) double sectionTopPadding; // @synthesize sectionTopPadding=_sectionTopPadding;
@property(retain, nonatomic) UIColor *pillBackgroundColor; // @synthesize pillBackgroundColor=_pillBackgroundColor;
@property(nonatomic) UIEdgeInsets separatorInsets; // @synthesize separatorInsets=_separatorInsets;
@property(retain, nonatomic) UIView *pillBackgroundView; // @synthesize pillBackgroundView=_pillBackgroundView;
@property(nonatomic) long long intendedPlacement; // @synthesize intendedPlacement=_intendedPlacement;
@property(nonatomic) BOOL extraTopPadding; // @synthesize extraTopPadding=_extraTopPadding;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (double)_topPadding;
- (double)_cornerRadius;
- (void)setSeparatorDashStyle:(long long)arg1 hidden:(BOOL)arg2;
- (void)setUpConstraints;
- (void)setupSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

