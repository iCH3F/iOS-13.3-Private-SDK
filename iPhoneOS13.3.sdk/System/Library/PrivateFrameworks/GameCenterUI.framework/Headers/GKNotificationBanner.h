//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKNotificationBanner : NSObject
{
}

+ (id)bannerViewWithTitle:(id)arg1 message:(id)arg2 actionMessage:(id)arg3;
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 touchHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 touchHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
+ (void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5;
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4;

@end

