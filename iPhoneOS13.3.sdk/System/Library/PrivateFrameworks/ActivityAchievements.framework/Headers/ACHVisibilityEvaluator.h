//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSString;

@interface ACHVisibilityEvaluator : NSObject
{
    NSCalendar *_calendar;
    NSDate *_injectedNow;
    NSString *_injectedWatchCountryCode;
}

@property(retain, nonatomic) NSString *injectedWatchCountryCode; // @synthesize injectedWatchCountryCode=_injectedWatchCountryCode;
@property(retain, nonatomic) NSDate *injectedNow; // @synthesize injectedNow=_injectedNow;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
// - (void).cxx_destruct;
- (void)_injectWatchCountryCode:(id)arg1;
- (void)_injectNow:(id)arg1;
- (BOOL)unearnedAchievementIsVisibleNow:(id)arg1;
- (id)init;

@end

