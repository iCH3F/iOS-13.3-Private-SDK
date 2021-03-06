//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, _CDPerfMetricFamily;

@interface _CDPerfMetric : NSObject
{
//     struct os_unfair_lock_s _lock;
    NSUInteger _count;
    double _lastElapsedTime;
    double _minimumElapsedTime;
    double _maximumElapsedTime;
    double _totalElapsedTime;
    double _lastUpdateTime;
    NSUInteger _lastResultCount;
    NSUInteger _errorCount;
    NSString *_name;
    NSString *_string;
    _CDPerfMetricFamily *_family;
}

+ (id)perfMetricForFetchRequest:(id)arg1 type:(id)arg2;
@property(readonly) __weak _CDPerfMetricFamily *family; // @synthesize family=_family;
@property(readonly) double totalElapsedTime; // @synthesize totalElapsedTime=_totalElapsedTime;
@property(readonly) NSString *string; // @synthesize string=_string;
@property(readonly) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
@property(readonly) NSUInteger errorCount;
@property(readonly) NSUInteger lastResultCount;
@property(readonly) NSDate *lastUpdate;
@property(readonly) double averageElapsedTime;
@property(readonly) double maximumElapsedTime;
@property(readonly) double minimumElapsedTime;
@property(readonly) double lastElapsedTime;
@property(readonly) NSUInteger count;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3;

@end

