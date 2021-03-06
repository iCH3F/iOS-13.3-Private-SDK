//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/UNUserNotificationCenterDelegate-Protocol.h>

@class NSMutableSet, UNUserNotificationCenter;

@interface BCSNotificationManager : NSObject <UNUserNotificationCenterDelegate>
{
    UNUserNotificationCenter *_qrCodeUserNotificationCenter;
    UNUserNotificationCenter *_nfcUserNotificationCenter;
    NSMutableSet *_notifications;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)didReceiveNotificationResponse:(id)arg1;
- (void)withdrawNotificationsWithProcessID:(int)arg1 codeType:(long long)arg2;
- (id)_notificationWithIdentifier:(id)arg1;
- (void)scheduleNotification:(id)arg1 codeType:(long long)arg2;
- (id)_userNotificationCenterForCodeType:(long long)arg1;
- (void)invalidate;
- (void)_configureUserNotificationCenter;
- (id)init;

@end

