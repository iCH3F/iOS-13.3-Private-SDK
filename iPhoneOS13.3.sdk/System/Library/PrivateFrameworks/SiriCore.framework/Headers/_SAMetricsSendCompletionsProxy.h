//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _SAMetricsSendCompletionsProxy : NSObject
{
    NSMutableArray *_blocks;
}

// - (void).cxx_destruct;
- (void)dispatchBlocksWithResult:(long long)arg1 error:(id)arg2;
- (void)addBlock:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end

