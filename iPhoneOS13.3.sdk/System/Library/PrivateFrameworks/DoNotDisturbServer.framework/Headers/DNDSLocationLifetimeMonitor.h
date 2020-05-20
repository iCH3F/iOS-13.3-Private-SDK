//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/CLLocationManagerDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSLifetimeMonitor-Protocol.h>

@class CLLocationManager, CLRegion, NSArray;
@protocol DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, OS_dispatch_queue;

@interface DNDSLocationLifetimeMonitor : NSObject <CLLocationManagerDelegate, DNDSLifetimeMonitor>
{
    NSObject<OS_dispatch_queue> *_queue;
    CLLocationManager *_locationManager;
    CLRegion *_currentRegion;
    BOOL _regionEntered;
    BOOL _hasActiveLifetimes;
    NSArray *_activeLifetimeAssertionUUIDs;
    id <DNDSLifetimeMonitorDataSource> _dataSource;
    id <DNDSLifetimeMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDSLifetimeMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DNDSLifetimeMonitorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs; // @synthesize activeLifetimeAssertionUUIDs=_activeLifetimeAssertionUUIDs;
// - (void).cxx_destruct;
- (void)_queue_sendExpiryEventForAllLocationAssertions;
- (void)_queue_geofenceLocation:(id)arg1;
- (void)_queue_stopMonitoringCurrentLocation;
- (void)_queue_beginMonitoringCurrentLocation;
- (void)_queue_refreshMonitor;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)refreshMonitorForDate:(id)arg1;
- (id)init;

@end

