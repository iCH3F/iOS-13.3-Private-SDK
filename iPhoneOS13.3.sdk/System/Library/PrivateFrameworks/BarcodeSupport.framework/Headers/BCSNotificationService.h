//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSNotificationServiceProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface BCSNotificationService : NSObject <BCSNotificationServiceProtocol>
{
}

- (void)_didReceiveNotificationResponse:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1;
- (void)_cancelNotificationsForCodeType:(long long)arg1;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(BOOL)arg3 reply:(id /* CDUnknownBlockType */)arg4;

@end

