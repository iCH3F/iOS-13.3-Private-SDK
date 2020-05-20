//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMNSXPCConnecting-Protocol.h>

@class FMNSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FMNSXPCCachedConnection : NSObject <FMNSXPCConnecting>
{
    FMNSXPCConnection *_connection;
    id /* CDUnknownBlockType */ _didInvalidate;
    id /* CDUnknownBlockType */ _failureBlock;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didInvalidate; // @synthesize didInvalidate=_didInvalidate;
@property(retain, nonatomic) FMNSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)_invalidate;
- (void)invalidate;
- (id)remoteObjectProxy;
- (void)addFailureBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithFMNSXPCConnection:(id)arg1;

@end

