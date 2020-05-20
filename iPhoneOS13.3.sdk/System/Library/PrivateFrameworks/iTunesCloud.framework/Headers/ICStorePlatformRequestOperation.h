//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStorePlatformRequest, ICStoreURLRequest, NSObject;
@protocol OS_dispatch_queue;

@interface ICStorePlatformRequestOperation : ICAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
    ICStorePlatformRequestOperation *_strongSelf;
    ICStorePlatformRequest *_platformRequest;
    id /* CDUnknownBlockType */ _responseHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) ICStorePlatformRequest *platformRequest; // @synthesize platformRequest=_platformRequest;
// - (void).cxx_destruct;
- (id)_URLRequestWithBaseURL:(id)arg1;
- (id)_requestContext;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (void)_executeUnpersonalized;
- (void)_executePersonalized;
- (void)_enqueueDataRequest:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)execute;
- (void)cancel;
- (id)initWithPlatformRequest:(id)arg1;

@end

