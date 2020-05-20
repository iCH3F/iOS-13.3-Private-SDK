//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentNotificationListener-Protocol.h>
#import <MobileTimer/MTBedtimeSessionTracker-Protocol.h>
#import <MobileTimer/MTSleepObserver-Protocol.h>

@class MTAlarm, MTAlarmStorage;
@protocol MTBedtimeSessionTrackerDelegate;

@interface MTBedtimeSessionTracker : NSObject <MTBedtimeSessionTracker, MTSleepObserver, MTAgentNotificationListener>
{
//     struct os_unfair_lock_s _alarmLock;
    id <MTBedtimeSessionTrackerDelegate> _bedtimeSessionTrackerDelegate;
    MTAlarm *_cachedAlarm;
    MTAlarmStorage *_alarmStorage;
}

+ (BOOL)_trackingEnabledForSleepAlarm:(id)arg1;
// @property(nonatomic) struct os_unfair_lock_s alarmLock; // @synthesize alarmLock=_alarmLock;
@property(retain, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(nonatomic) __weak id <MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate; // @synthesize bedtimeSessionTrackerDelegate=_bedtimeSessionTrackerDelegate;
// - (void).cxx_destruct;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)endSessionWithDate:(id)arg1 reason:(NSUInteger)arg2;
- (void)startSession;
- (Class)sessionClass;
- (void)sleepCoordinator:(id)arg1 waketimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 dismissAction:(NSUInteger)arg3 sleepAlarm:(id)arg4;
- (void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2;
@property(retain, nonatomic) MTAlarm *cachedAlarm; // @synthesize cachedAlarm=_cachedAlarm;
@property(readonly, nonatomic) BOOL trackingEnabled;
- (void)prepare;
- (void)_withLock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithAlarmStorage:(id)arg1;

@end

