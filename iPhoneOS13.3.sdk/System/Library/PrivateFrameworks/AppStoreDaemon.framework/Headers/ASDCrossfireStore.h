//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker;

@interface ASDCrossfireStore : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)sendMetricsWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)resetMetricsWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)recordMetricsWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)recordLaunchesWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)getAppEventsWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)flushMetricsWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

@end

