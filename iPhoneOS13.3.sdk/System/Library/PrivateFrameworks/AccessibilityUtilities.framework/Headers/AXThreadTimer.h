//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXAccessQueueTimer-Protocol.h>

@class AXThreadTimerTask, NSThread;

@interface AXThreadTimer : NSObject <AXAccessQueueTimer>
{
    NSThread *_thread;
    id /* CDUnknownBlockType */ _cancelBlock;
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    AXThreadTimerTask *_task;
}

@property(nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(retain, nonatomic) AXThreadTimerTask *task; // @synthesize task=_task;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic, getter=isPending) BOOL pending;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
- (void)cancel;
- (void)afterDelay:(double)arg1 processBlock:(id /* CDUnknownBlockType */)arg2 cancelBlock:(id /* CDUnknownBlockType */)arg3;
- (void)afterDelay:(double)arg1 processBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_runAfterDelay:(id)arg1;
- (id)initWithThread:(id)arg1;

@end

