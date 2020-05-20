//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface WDClinicalOnboardingNoGeoView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_locationServicesButton;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_locationServicesButtonBaselineConstraint;
    NSLayoutConstraint *_containerCenterYConstraint;
    UILayoutGuide *_containerLayoutGuide;
}

@property(retain, nonatomic) UILayoutGuide *containerLayoutGuide; // @synthesize containerLayoutGuide=_containerLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *containerCenterYConstraint; // @synthesize containerCenterYConstraint=_containerCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *locationServicesButtonBaselineConstraint; // @synthesize locationServicesButtonBaselineConstraint=_locationServicesButtonBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleBaselineConstraint; // @synthesize subtitleBaselineConstraint=_subtitleBaselineConstraint;
@property(retain, nonatomic) UIButton *locationServicesButton; // @synthesize locationServicesButton=_locationServicesButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_tappedLocationServices:(id)arg1;
- (void)layoutSubviews;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)init;

@end

