//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, PKDiscoveryService;

@protocol PKDiscoveryObserver <NSObject>

@optional
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(PKDiscoveryService *)arg1;
- (void)discoveryService:(PKDiscoveryService *)arg1 receivedUpdatedDiscoveryArticleLayouts:(NSArray *)arg2;
@end

