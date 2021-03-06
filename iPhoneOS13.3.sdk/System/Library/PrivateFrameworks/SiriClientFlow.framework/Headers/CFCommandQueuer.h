//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CFCommandQueuer : NSObject
{
    NSObject<OS_dispatch_queue> *_commandQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *commandQueue; // @synthesize commandQueue=_commandQueue;
// - (void).cxx_destruct;
- (id)initWithCommandIdentifier:(id)arg1;
- (void)initQueuesWithIdentifier:(id)arg1;
- (void)dispatchCommand:(id)arg1 isOneWay:(BOOL)arg2 withServiceHelper:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)dispatchCommand:(id)arg1 withServiceHelper:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)dispatchOneWayCommand:(id)arg1 withServiceHelper:(id)arg2;
- (void)dispatchBlock:(id /* CDUnknownBlockType */)arg1;

@end

