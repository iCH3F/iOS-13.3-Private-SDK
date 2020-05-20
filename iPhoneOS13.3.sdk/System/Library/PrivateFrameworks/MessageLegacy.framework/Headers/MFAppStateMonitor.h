//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, EFObservable;
@protocol EFObserver, OS_dispatch_queue;

@interface MFAppStateMonitor : NSObject
{
    unsigned int _appState;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    EFObservable<EFObserver> *_observable;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_updateApplicationState:(id)arg1 observer:(id)arg2;
@property(readonly, nonatomic, getter=isForeground) BOOL foreground;
@property(readonly, nonatomic) EFObservable *appStateObservable;
- (id)init;
- (void)dealloc;

@end
