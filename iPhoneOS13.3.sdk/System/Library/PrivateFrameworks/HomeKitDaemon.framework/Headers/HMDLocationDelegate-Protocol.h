//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLLocation, CLRegion;

@protocol HMDLocationDelegate <NSObject>

@optional
- (void)didDetermineLocation:(CLLocation *)arg1;
- (void)didExitRegion:(CLRegion *)arg1;
- (void)didEnterRegion:(CLRegion *)arg1;
- (void)didDetermineState:(long long)arg1 forRegion:(CLRegion *)arg2;
@end

