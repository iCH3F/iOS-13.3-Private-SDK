//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XPCServiceListener;
@protocol NSObject, OS_dispatch_queue, OS_xpc_object, XPCServiceConnectionDelegate;

@interface XPCServiceConnection : NSObject
{
    NSString *_serviceName;
    id <XPCServiceConnectionDelegate> _delegate;
    NSObject<OS_xpc_object> *_client;
    id <NSObject> _context;
    XPCServiceListener *_serviceListener;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak XPCServiceListener *serviceListener; // @synthesize serviceListener=_serviceListener;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *client; // @synthesize client=_client;
@property(nonatomic) __weak id <XPCServiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
// - (void).cxx_destruct;
- (void)shutDownCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)sendMessage:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)workQueueShutDown;
- (void)resume;
- (void)workQueueHandleIncomingMessage:(id)arg1;
- (id)initWithServiceName:(id)arg1 client:(id)arg2 queue:(id)arg3;
- (id)debugDescription;

@end

