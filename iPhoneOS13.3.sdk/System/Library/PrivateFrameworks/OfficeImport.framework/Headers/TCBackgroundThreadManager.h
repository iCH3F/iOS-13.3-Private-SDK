//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TCMessageContext, TCProgressContext;
@protocol OS_dispatch_group, OS_dispatch_queue, TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface TCBackgroundThreadManager : NSObject
{
    id <TCCancelDelegate> mCancelDelegate;
    BOOL mIsWaiting;
    NSUInteger mBlockCount;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_group> *mGroup;
    NSObject<OS_dispatch_queue> *mProgressReportingQueue;
    TCMessageContext *mMessageContext;
    TCProgressContext *mProgressContext;
}

@property(retain) TCProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
@property(retain) TCMessageContext *messageContext; // @synthesize messageContext=mMessageContext;
// - (void).cxx_destruct;
- (void)waitUntilComplete;
- (void)addASyncBlock:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;
@property(readonly) BOOL isCancelled;

@end

