//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKObserverSet, HKQuery, NSDictionary, NSSet;

@interface HKAudioExposureDevicesDataSource : NSObject
{
    BOOL _ready;
    NSUInteger _deviceType;
    NSSet *_devices;
    NSDictionary *_devicesByName;
    HKHealthStore *_healthStore;
    HKObserverSet *_observers;
    HKQuery *_query;
}

@property(retain, nonatomic) HKQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) HKObserverSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(copy, nonatomic) NSDictionary *devicesByName; // @synthesize devicesByName=_devicesByName;
@property(copy, nonatomic) NSSet *devices; // @synthesize devices=_devices;
@property(nonatomic) NSUInteger deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic, getter=isReady) BOOL ready; // @synthesize ready=_ready;
// - (void).cxx_destruct;
- (id)_localizedNameForDevice:(id)arg1;
- (id)_sampleTypeForDeviceType;
- (id)_makeDeviceQueryForDeviceType;
- (void)_notify_dataSourceIsReady;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_cleanUp;
- (void)cancelQuery;
- (void)startQuery;
@property(readonly, nonatomic) long long deviceCount;
- (id)initWithDeviceType:(NSUInteger)arg1 healthStore:(id)arg2;

@end

