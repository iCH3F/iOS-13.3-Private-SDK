//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSTimer-Protocol.h>

@class BSDispatchSource;
@protocol OS_dispatch_queue;

@interface BSTimer : NSObject <BSTimer>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    id /* CDUnknownBlockType */ _handler;
    BSDispatchSource *_source;
    double _startTime;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
    NSUInteger _fireCount;
    BOOL _oneShot;
    BOOL _scheduled;
}

+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) double repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(readonly, nonatomic) double fireInterval; // @synthesize fireInterval=_fireInterval;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
// - (void).cxx_destruct;
- (void)_callOutQueue_noteTimerFired;
- (void)_queue_cancel;
- (void)cancel;
- (void)schedule;
@property(readonly, nonatomic) NSUInteger fireCount; // @synthesize fireCount=_fireCount;
@property(readonly, nonatomic, getter=isScheduled) BOOL scheduled; // @synthesize scheduled=_scheduled;
- (void)dealloc;
- (id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(id /* CDUnknownBlockType */)arg5;
- (id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;

@end

