//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDefaults, UNUserNotificationCenter;

@interface IMDBadgeUtilities : NSObject
{
    NSUInteger _unreadCount;
    long long _lastFailedMessageDate;
    BOOL _showingFailure;
    BOOL _isUnexpectedlyLogOut;
    BOOL _addedObserverForUnexpectedlyLoggedOut;
    UNUserNotificationCenter *_notificationCenter;
    IMDefaults *_sharedDefaultsInstance;
}

+ (id)_accountsArrayForServiceIMessage;
+ (BOOL)_iMessageFailedAccountIsIrreparable;
+ (BOOL)_isUsableSendingForAccount:(id)arg1;
+ (BOOL)_isTryingToLogin;
+ (BOOL)_isUserIntentNotLoggedOut;
+ (BOOL)_iMessageEnabled;
+ (id)sharedInstance;
@property(retain, nonatomic) IMDefaults *sharedDefaultsInstance; // @synthesize sharedDefaultsInstance=_sharedDefaultsInstance;
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (BOOL)_isUnexpectedlyLogOutValue;
- (void)_saveFailureDate:(long long)arg1;
- (long long)_savedFailureDate;
- (void)_cacheFailureDate:(long long)arg1;
- (void)_stopSuppressingSound;
- (void)_compareLastFailureDateAndUpdateBadge:(long long)arg1;
- (void)_handleUnexpectedLogout;
- (void)_clearFailureBadge;
- (void)_checkIfUnexpectedlyLoggedOut;
- (BOOL)_isUnexpectedlyLoggedOut;
- (BOOL)isInAppleStoreDemoMode;
- (BOOL)_shouldShowFailureString;
- (void)_postBadgeString:(id)arg1;
- (void)_postBadgeNumber:(id)arg1;
- (void)_updateBadge;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)arg1;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)arg1;
- (void)dealloc;
- (id)initWithMessageStore:(id)arg1 defaultsStore:(id)arg2;
- (id)initWithMessageStore:(id)arg1;
- (id)init;

@end

