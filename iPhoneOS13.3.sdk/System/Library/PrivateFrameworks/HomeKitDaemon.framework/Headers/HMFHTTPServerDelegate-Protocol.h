//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMFHTTPClientConnection, HMFHTTPServer, NSError;

@protocol HMFHTTPServerDelegate <NSObject>
- (void)server:(HMFHTTPServer *)arg1 didCloseConnection:(HMFHTTPClientConnection *)arg2;
- (void)server:(HMFHTTPServer *)arg1 didOpenConnection:(HMFHTTPClientConnection *)arg2;
- (BOOL)server:(HMFHTTPServer *)arg1 shouldAcceptConnection:(HMFHTTPClientConnection *)arg2;
- (void)server:(HMFHTTPServer *)arg1 didStopWithError:(NSError *)arg2;
@end

