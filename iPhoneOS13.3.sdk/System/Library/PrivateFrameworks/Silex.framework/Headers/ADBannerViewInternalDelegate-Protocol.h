//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/ADBannerViewDelegate-Protocol.h>

@class ADBannerView, NSDictionary, UIViewController;

@protocol ADBannerViewInternalDelegate <ADBannerViewDelegate>

@optional
- (void)bannerViewShouldResumeMedia:(ADBannerView *)arg1;
- (void)bannerViewShouldPauseMedia:(ADBannerView *)arg1;
- (UIViewController *)viewControllerForStoryboardPresentationFromBannerView:(ADBannerView *)arg1;
- (void)bannerViewAdLibManagedVideoAdEvent:(ADBannerView *)arg1 eventType:(long long)arg2 info:(NSDictionary *)arg3;
@end

