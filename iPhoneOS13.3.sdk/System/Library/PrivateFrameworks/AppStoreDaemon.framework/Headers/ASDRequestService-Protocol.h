//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASDRequest;
@protocol ASDRequestDelegate;

@protocol ASDRequestService
- (void)submitRequest:(ASDRequest *)arg1 delegate:(id <ASDRequestDelegate>)arg2 withReplyHandler:(void (^)(id <ASDRequestProxy>, NSError *))arg3;
- (void)cancelAllRequestsWithErrorHandler:(void (^)(NSError *))arg1;
@end

