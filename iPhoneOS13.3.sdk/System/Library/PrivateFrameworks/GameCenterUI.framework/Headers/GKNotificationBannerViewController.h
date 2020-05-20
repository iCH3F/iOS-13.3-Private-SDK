//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GKNotificationBannerView, NSLayoutConstraint;

@interface GKNotificationBannerViewController : UIViewController
{
    BOOL _bannerVisible;
    BOOL _bannerAnimating;
    GKNotificationBannerView *_bannerView;
    NSLayoutConstraint *_bannerYPositionConstraint;
    NSLayoutConstraint *_bannerWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bannerWidthConstraint; // @synthesize bannerWidthConstraint=_bannerWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bannerYPositionConstraint; // @synthesize bannerYPositionConstraint=_bannerYPositionConstraint;
@property(nonatomic) BOOL bannerAnimating; // @synthesize bannerAnimating=_bannerAnimating;
@property(nonatomic) BOOL bannerVisible; // @synthesize bannerVisible=_bannerVisible;
@property(retain, nonatomic) GKNotificationBannerView *bannerView; // @synthesize bannerView=_bannerView;
// - (void).cxx_destruct;
- (CGPoint)_visibleBannerCenterPosition:(CGSize)arg1;
- (CGPoint)_hiddenBannerPosition:(CGSize)arg1;
- (void)addConstraintsForBannerView;
- (void)addConstraintsForTVOSBannerView;
- (double)bannerWidthForViewSize:(CGSize)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (NSUInteger)supportedInterfaceOrientations;
- (void)hideBannerQuickly:(BOOL)arg1;
- (void)showCurrentBanner;
- (void)addBannerView:(id)arg1;
- (void)handleWindowPan:(id)arg1;
- (void)handleWindowSingleTap:(id)arg1;
- (void)windowTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)windowPointInside:(CGPoint)arg1 withEvent:(id)arg2;

@end

