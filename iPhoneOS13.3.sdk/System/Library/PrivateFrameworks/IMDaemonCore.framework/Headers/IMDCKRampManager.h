//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol OS_dispatch_queue;

@interface IMDCKRampManager : NSObject
{
    NSObject<OS_dispatch_queue> *_ckQueue;
    NSTimer *_retryTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
- (void)cachedRampState:(id /* CDUnknownBlockType */)arg1;
- (void)fetchLatestRampStateFromCK:(id /* CDUnknownBlockType */)arg1;
- (void)_performRampCheckWithRetryAfter:(double)arg1;
- (void)_persistRampFetchServerError:(BOOL)arg1;
- (void)_writeRampStateAllowed:(BOOL)arg1 promoted:(BOOL)arg2 visible:(BOOL)arg3 fetchHadServerError:(BOOL)arg4;
- (void)_fetchLatestRampStateFromCK:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_shouldSendPriorityRequest;
- (id)_rampUpRecordID;
- (void)_scheduleOperation:(id)arg1;
- (id)_CKUtilitiesSharedInstance;
- (void)dealloc;
- (id)init;

@end

