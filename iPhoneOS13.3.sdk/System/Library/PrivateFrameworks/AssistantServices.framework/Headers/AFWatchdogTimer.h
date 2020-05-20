//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFWatchdogTimer : NSObject <NSCopying>
{
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _timeoutHandler;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
}

// - (void).cxx_destruct;
- (void)reset;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)cancel;
- (BOOL)isStopped;
- (void)stop;
- (void)start;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;

@end

