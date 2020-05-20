//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNFuture, CNObservable, NSArray, NSString;
@protocol CNSchedulerProvider;

@protocol CNUIUserActionTargetDiscovering <NSObject>
- (CNFuture *)thirdPartyTargetsForBundleIdentifier:(NSString *)arg1;
- (CNFuture *)thirdPartyTargetsForActionTypes:(NSArray *)arg1;
- (CNObservable *)targetsForActionType:(NSString *)arg1;
- (CNObservable *)observableForTargetsChangedForActionType:(NSString *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
@end

