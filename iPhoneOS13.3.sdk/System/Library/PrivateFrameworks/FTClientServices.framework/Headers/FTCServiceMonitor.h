//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTCServiceMonitor : NSObject
{
    long long _availability;
    long long _type;
    int _token;
}

@property(readonly, nonatomic) long long serviceType;
- (long long)serviceAvailability;
- (void)updateAvailability;
- (void)_updateAvailability;
- (void)_postAvailability:(long long)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;

@end

