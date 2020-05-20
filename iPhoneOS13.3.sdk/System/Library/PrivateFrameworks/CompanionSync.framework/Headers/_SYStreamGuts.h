//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableDictionary;
@protocol NSStreamDelegate, OS_dispatch_queue;

@interface _SYStreamGuts : NSObject
{
    struct __CFRunLoopSource _runloopSource;
    unsigned int _port;
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _handler;
    id <NSStreamDelegate> _delegate;
    NSError *_error;
    NSUInteger _status;
    NSMutableDictionary *_propertyStore;
}

// - (void).cxx_destruct;
- (id)propertyForKey:(id)arg1;
- (void)storeProperty:(id)arg1 forKey:(id)arg2;
- (void)postStreamEvent:(NSUInteger)arg1 forStream:(id)arg2;
- (void)createRunloopSourceForStream:(id)arg1;
- (void)setEventHandler:(id /* CDUnknownBlockType */)arg1 queue:(id)arg2;
- (void)dealloc;

@end

