//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOETATrafficUpdateRequester : NSObject
{
}

- (void)cancelRequest:(id)arg1;
- (void)sendConditionalETATrafficUpdateRequest:(id)arg1 timeWindowDuration:(double)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 willSendRequestHandler:(id /* CDUnknownBlockType */)arg5 finishedHandler:(id /* CDUnknownBlockType */)arg6;
- (void)sendETATrafficUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 finishedHandler:(id /* CDUnknownBlockType */)arg4;

@end

