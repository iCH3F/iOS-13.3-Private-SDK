//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEONavdClientInfo, GEOPlannedDestination, NSUUID;

@protocol GEONavdXPCInterface <NSObject>
- (void)forceCacheRefresh;
- (void)didPostUINotification:(NSUInteger)arg1 forDestination:(GEOPlannedDestination *)arg2 fromClient:(GEONavdClientInfo *)arg3;
- (void)stopMonitoringDestination:(GEOPlannedDestination *)arg1 forClient:(GEONavdClientInfo *)arg2 uuid:(NSUUID *)arg3;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(GEOPlannedDestination *)arg1 client:(GEONavdClientInfo *)arg2;
- (void)requestRefreshForPlannedDestination:(GEOPlannedDestination *)arg1 client:(GEONavdClientInfo *)arg2;
- (void)startMonitoringDestination:(GEOPlannedDestination *)arg1 forClient:(GEONavdClientInfo *)arg2 uuid:(NSUUID *)arg3;
- (void)statusWithCallback:(void (^)(NSDictionary *))arg1;
@end

