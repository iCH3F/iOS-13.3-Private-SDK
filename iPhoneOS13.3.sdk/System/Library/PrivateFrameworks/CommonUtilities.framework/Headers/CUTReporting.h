//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTPromise;

@interface CUTReporting : NSObject
{
//     struct os_unfair_lock_s _promiseLock;
    CUTPromise *_promise;
}

+ (id)_rtcReportingSession;
+ (id)RTCSessionPromiseWithBatchingInterval:(double)arg1;
+ (void)startRTCReportingSessionWithCompletion:(id /* CDUnknownBlockType */)arg1;
+ (id)reportingSession;
// @property(readonly) struct os_unfair_lock_s promiseLock; // @synthesize promiseLock=_promiseLock;
@property(retain, nonatomic) CUTPromise *promise; // @synthesize promise=_promise;
// - (void).cxx_destruct;
- (void)_failSeal:(id)arg1 withError:(id)arg2;
- (void)_fullfillSeal:(id)arg1 withSession:(id)arg2;
- (void)_startConfigurationOfSession:(id)arg1 withPromiseSeal:(id)arg2;
- (void)_beginPromiseTimeoutWithInterval:(long long)arg1;
- (id)_RTCSessionPromiseWithBatchingInterval:(double)arg1;
- (id)init;

@end

