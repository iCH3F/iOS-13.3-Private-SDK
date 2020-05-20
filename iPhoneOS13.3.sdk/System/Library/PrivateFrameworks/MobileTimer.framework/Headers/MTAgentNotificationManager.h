//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NAScheduler;

@interface MTAgentNotificationManager : NSObject
{
    NSMutableArray *_listeners;
    id <NAScheduler> _serializer;
}

+ (double)_schedulingAssertionTimeout;
+ (double)defaultAssertionTimeOutForNotification:(id)arg1 type:(long long)arg2;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
// - (void).cxx_destruct;
- (void)_handleNotificationWithName:(id)arg1 type:(long long)arg2;
- (void)_registerForXPCStream:(id)arg1 notificationType:(long long)arg2;
- (void)dealloc;
- (void)_registerForLiveDarwinNotification:(id)arg1;
- (void)_registerForAlarmNotifications;
- (void)_registerForDarwinNotifications;
- (void)_registerForDistributedNotifications;
- (void)beginListening;
- (void)registerListener:(id)arg1;
- (id)init;

@end

