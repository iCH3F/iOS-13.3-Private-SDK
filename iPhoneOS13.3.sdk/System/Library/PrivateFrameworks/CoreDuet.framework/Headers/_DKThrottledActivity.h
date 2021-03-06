//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _DKSimpleKeyValueStore;

@interface _DKThrottledActivity : NSObject
{
    NSString *_namespace;
    id <_DKSimpleKeyValueStore> _store;
}

+ (id)standardInstance;
@property(retain, nonatomic) id <_DKSimpleKeyValueStore> store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (void)setDate:(id)arg1 forName:(id)arg2;
- (void)clearHistoryForName:(id)arg1;
- (id)description;
- (void)performWithDelayInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performWithDelayInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performWithDelayInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performWithMinimumIntervalInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performWithMinimumIntervalInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performWithMinimumIntervalInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performWithMinimumIntervalInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(id /* CDUnknownBlockType */)arg3 throttleBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(id /* CDUnknownBlockType */)arg3;
- (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(id /* CDUnknownBlockType */)arg3 throttleBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(id /* CDUnknownBlockType */)arg3;
- (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(id /* CDUnknownBlockType */)arg3 throttleBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(id /* CDUnknownBlockType */)arg3;
- (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(id /* CDUnknownBlockType */)arg3 throttleBlock:(id /* CDUnknownBlockType */)arg4;
- (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(id /* CDUnknownBlockType */)arg3;
- (id)activityThrottler;
- (id)initWithStore:(id)arg1 namespace:(id)arg2;

@end

