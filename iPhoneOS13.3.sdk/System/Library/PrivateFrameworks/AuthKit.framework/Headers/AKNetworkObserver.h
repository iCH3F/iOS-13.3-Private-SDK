//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface AKNetworkObserver : NSObject
{
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
    BOOL _isNetworkReachable;
}

+ (id)sharedNetworkObserver;
// - (void).cxx_destruct;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
@property(readonly) BOOL isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
- (void)_networkReachabilityDidChange;
- (void)_stopPathMonitor;
- (void)_startPathMonitor;
- (void)dealloc;
- (id)init;

@end

