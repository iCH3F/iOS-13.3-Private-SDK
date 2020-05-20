//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEventHandler.h>

@class NSString;

@interface MTMediaActivityEventHandler : MTEventHandler
{
    NSString *_defaultEventType;
    NSString *_defaultActionType;
}

@property(retain, nonatomic) NSString *defaultActionType; // @synthesize defaultActionType=_defaultActionType;
@property(retain, nonatomic) NSString *defaultEventType; // @synthesize defaultEventType=_defaultEventType;
// - (void).cxx_destruct;
- (id)actionType;
- (id)eventType;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)metricsDataForStopActionWithPosition:(NSUInteger)arg1 overallPosition:(NSUInteger)arg2 type:(id)arg3 reason:(id)arg4 startMetricsData:(id)arg5 eventData:(id)arg6;
- (id)metricsDataForStartActionWithPosition:(NSUInteger)arg1 overallPosition:(NSUInteger)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (id)initWithMetricsKit:(id)arg1 defaultEventType:(id)arg2 defaultActionType:(id)arg3;

@end

