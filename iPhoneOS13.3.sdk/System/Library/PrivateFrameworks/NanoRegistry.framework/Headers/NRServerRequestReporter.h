//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NRServerRequestReporter : NSObject
{
    BOOL _submitted;
    NSString *_requestType;
    struct mach_timebase_info _timebaseInfo;
    double _startTime;
}

@property(nonatomic) BOOL submitted; // @synthesize submitted=_submitted;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct mach_timebase_info timebaseInfo; // @synthesize timebaseInfo=_timebaseInfo;
@property(retain, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)requestTimedOut;
- (void)requestCompletedWithErrorCode:(unsigned int)arg1 andDuration:(double)arg2;
- (void)requestCompletedWithErrorCode:(unsigned int)arg1;
- (double)abs_to_seconds:(NSUInteger)arg1;
- (NSUInteger)abs_to_nanos:(NSUInteger)arg1;
- (id)initWithRequestType:(id)arg1;

@end

