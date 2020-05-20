//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSCache, NSString;

@interface RBBundlePropertiesBackgroundRefreshProvider : NSObject <BSDescriptionProviding>
{
    NSCache *_backgroundRefreshStateByIdentity;
//     struct os_unfair_lock_s _lock;
}

// - (void).cxx_destruct;
- (void)_unregisterFromBackgroundRefreshStatusChangedNotification;
- (void)_registerForBackgroundRefreshStatusChangedNotification;
- (void)removeIdentity:(id)arg1;
- (void)_handleBackgroundRefreshStatusDidChange;
- (id)_lock_fetchBackgroundRefreshEnabledForIdentity:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (BOOL)isBackgroundRefreshEnabledForIdentity:(id)arg1;
- (id)init;

@end

