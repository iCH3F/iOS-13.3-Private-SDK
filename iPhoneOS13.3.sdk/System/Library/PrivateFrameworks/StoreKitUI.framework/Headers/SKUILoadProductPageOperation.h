//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSURLRequest, SKUIClientContext, SSMetricsPageEvent;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUILoadProductPageOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    SSMetricsPageEvent *_metricsPageEvent;
    id /* CDUnknownBlockType */ _outputBlock;
    NSURLRequest *_urlRequest;
}

// - (void).cxx_destruct;
- (void)main;
@property(copy) id /* CDUnknownBlockType */ outputBlock;
@property(readonly) SSMetricsPageEvent *metricsPageEvent;
- (id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;
- (id)_initSKUILoadProductPageOperation;

@end

