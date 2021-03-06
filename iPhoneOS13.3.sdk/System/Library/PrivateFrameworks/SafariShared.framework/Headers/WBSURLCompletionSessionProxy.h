//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSHistoryConnectionProxy;
@protocol OS_dispatch_queue, WBSURLCompletionSessionProtocol;

@interface WBSURLCompletionSessionProxy : NSObject
{
    WBSHistoryConnectionProxy *_historyConnectionProxy;
    id <WBSURLCompletionSessionProtocol> _completionSession;
    NSObject<OS_dispatch_queue> *_completionSessionAccessQueue;
}

// - (void).cxx_destruct;
- (void)userDidSelectCompletionMatch:(id)arg1 forTypedString:(id)arg2;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(NSUInteger)arg2 forQueryID:(long long)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_completionSessionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

