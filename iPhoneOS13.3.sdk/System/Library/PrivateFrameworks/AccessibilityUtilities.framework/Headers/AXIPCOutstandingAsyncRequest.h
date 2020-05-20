//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXIPCOutstandingAsyncRequest : NSObject
{
    unsigned int _replyPort;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id /* CDUnknownBlockType */ _replyHandler;
    struct __CFRunLoopSource _replyMachPortSource;
}

+ (void)registerOutstandingRequest:(id)arg1;
+ (void)unregisterByPort:(unsigned int)arg1;
+ (id)lookupByPort:(unsigned int)arg1;
+ (void)initialize;
@property(readonly, nonatomic) struct __CFRunLoopSource replyMachPortSource; // @synthesize replyMachPortSource=_replyMachPortSource;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ replyHandler; // @synthesize replyHandler=_replyHandler;
@property(readonly, nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
// - (void).cxx_destruct;
- (void)initialSendAborted;
- (void)sendOnceRightDestroyed;
- (void)rawResponseReceived:(id)arg1;
- (void)_responseReceived:(id)arg1;
- (void)registerAndListenForResponse;
- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 handlerQueue:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;

@end

