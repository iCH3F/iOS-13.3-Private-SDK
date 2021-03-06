//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSFuture-Protocol.h>

@class NSConditionLock, NSError, NSMutableArray;

@interface BSFuture : NSObject <BSFuture>
{
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

// - (void).cxx_destruct;
- (void)_flushCompletionBlocks;
- (void)_addCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addFailureBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addSuccessBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_nts_isFinished;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (BOOL)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(readonly, getter=isFinished) BOOL finished;
- (id)resultBeforeDate:(id)arg1 error:(id )arg2;
- (id)result:(id )arg1;
- (id)init;

@end

