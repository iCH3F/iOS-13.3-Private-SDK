//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSPowerMonitorObserver-Protocol.h>

@class NSCalendar, NSDate, NSTimer;
@protocol BSRelativeDateTimerDelegate;

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver>
{
    NSCalendar *_gregorian;
    NSTimer *_timer;
    NSDate *_date;
    id <BSRelativeDateTimerDelegate> _delegate;
    NSUInteger _currResolution;
    long long _currValue;
}

+ (void)invalidateTimer:(id)arg1;
+ (void)addTimerToMainRunLoop:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak id <BSRelativeDateTimerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
- (void)_invalidateTimer;
- (double)_nextFireInterval:(id)arg1 resolution:(NSUInteger)arg2 comparedToNow:(long long)arg3;
- (void)_fireAndUpdateTimerIfNecessary;
- (id)_timeDifferenceFromDate:(id)arg1;
- (void)invalidate;
- (void)fireAndSchedule;
- (double)nextFireInterval;
- (id)date;
- (void)setDate:(id)arg1;
- (void)_fireForLocaleEvent:(id)arg1;
- (void)_fireForEvent;
- (void)dealloc;
- (id)init;

@end

