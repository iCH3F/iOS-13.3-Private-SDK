//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationRequest, NCNotificationSectionSettings, NSString;
@protocol NCNotificationManagementController;

@protocol NCNotificationManagementControllerSettingsDelegate <NSObject>
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (NCNotificationSectionSettings *)notificationManagementController:(id <NCNotificationManagementController>)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;

@optional
- (void)notificationManagementControllerDidDismissManagementView:(id <NCNotificationManagementController>)arg1;
@end

