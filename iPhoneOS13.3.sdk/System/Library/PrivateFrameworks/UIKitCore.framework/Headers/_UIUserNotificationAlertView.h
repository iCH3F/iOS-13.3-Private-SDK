//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIAlertView.h"

__attribute__((visibility("hidden")))
@interface _UIUserNotificationAlertView : UIAlertView
{
    struct __CFUserNotification _userNotification;
    struct __CFRunLoopSource _userNotificationRunLoopSource;
    id _strongDelegate;
    id _retainedSelf;
}

+ (void)initialize;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_removeObservervations;
- (void)_cancelUserNotification;
- (void)cancelAlertView;
- (void)setRemoteViewController:(id)arg1;
- (void)setHostedWindow:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (id)textFieldAtIndex:(long long)arg1;
- (BOOL)isVisible;
- (void)show;

@end

