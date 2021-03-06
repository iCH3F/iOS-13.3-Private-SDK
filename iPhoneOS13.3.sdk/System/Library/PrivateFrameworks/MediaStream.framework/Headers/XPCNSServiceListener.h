//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaStream/XPCServiceListenerDelegate-Protocol.h>

@class NSString, XPCServiceListener;
@protocol XPCNSServiceListenerDelegate;

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate>
{
    XPCServiceListener *_serviceListener;
    id <XPCNSServiceListenerDelegate> _delegate;
}

@property(readonly, nonatomic) id <XPCNSServiceListenerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;
- (BOOL)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, retain, nonatomic) NSString *serviceName;
- (void)shutDownCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)start;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;

@end

