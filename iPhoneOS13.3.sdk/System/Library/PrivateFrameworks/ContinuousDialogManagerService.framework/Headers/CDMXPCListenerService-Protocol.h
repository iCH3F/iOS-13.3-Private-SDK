//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary;

@protocol CDMXPCListenerService <NSObject>
- (void)handleClientAceUpdate:(NSDictionary *)arg1;

@optional
- (void)handleClientAceRequest:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *))arg2;
@end
