//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol NCWidgetProviding <NSObject>

@optional
- (UIEdgeInsets)widgetMarginInsetsForProposedMarginInsets:(UIEdgeInsets)arg1;
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2;
- (void)widgetPerformUpdateWithCompletionHandler:(void (^)(NSUInteger))arg1;
@end

