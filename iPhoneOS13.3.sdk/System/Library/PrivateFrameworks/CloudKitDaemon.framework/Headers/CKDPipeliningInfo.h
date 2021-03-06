//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CKDOperationPipelining, CKDURLRequestPipelining, OS_dispatch_group, OS_dispatch_queue;

@interface CKDPipeliningInfo : NSObject
{
    BOOL _isCancelled;
    id <CKDURLRequestPipelining> _request;
    id <CKDOperationPipelining> _operation;
    NSObject<OS_dispatch_group> *_perRequestCallbackGroup;
    NSObject<OS_dispatch_group> *_perRequestGroup;
    NSObject<OS_dispatch_queue> *_perRequestCallbackQueue;
    NSMutableArray *_perRequestCallbackBlocks;
}

@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSMutableArray *perRequestCallbackBlocks; // @synthesize perRequestCallbackBlocks=_perRequestCallbackBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *perRequestCallbackQueue; // @synthesize perRequestCallbackQueue=_perRequestCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *perRequestGroup; // @synthesize perRequestGroup=_perRequestGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *perRequestCallbackGroup; // @synthesize perRequestCallbackGroup=_perRequestCallbackGroup;
@property(nonatomic) __weak id <CKDOperationPipelining> operation; // @synthesize operation=_operation;
@property(retain, nonatomic) id <CKDURLRequestPipelining> request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (void)cancelAndDisablePerRequestCallbackBlocks;
- (void)disablePerRequestCallbackBlocks;
- (void)addPerRequestCallbackBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithRequest:(id)arg1 operation:(id)arg2;

@end

