//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationListView, UIView;

@protocol NCNotificationListViewDataSource <NSObject>
- (BOOL)notificationListViewIsGroup:(NCNotificationListView *)arg1;
- (NSUInteger)notificationListViewNumberOfItems:(NCNotificationListView *)arg1;
- (UIView *)notificationListView:(NCNotificationListView *)arg1 viewForItemAtIndex:(NSUInteger)arg2;
- (double)notificationListView:(NCNotificationListView *)arg1 heightForItemAtIndex:(NSUInteger)arg2;

@optional
- (void)recycleView:(UIView *)arg1;
- (double)footerViewHeightForNotificationList:(NCNotificationListView *)arg1;
- (double)headerViewHeightForNotificationList:(NCNotificationListView *)arg1;
- (UIView *)footerViewForNotificationList:(NCNotificationListView *)arg1;
- (UIView *)headerViewForNotificationList:(NCNotificationListView *)arg1;
@end

