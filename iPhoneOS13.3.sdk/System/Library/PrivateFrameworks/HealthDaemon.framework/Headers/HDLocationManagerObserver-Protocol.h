//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDLocationManager, NSArray, NSError;

@protocol HDLocationManagerObserver <NSObject>

@optional
- (void)healthLocationManager:(HDLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)healthLocationManager:(HDLocationManager *)arg1 didUpdateLocations:(NSArray *)arg2;
- (void)healthLocationManager:(HDLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
@end

