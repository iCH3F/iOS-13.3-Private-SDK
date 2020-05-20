//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CLLocationManagerDelegate-Protocol.h>

@class CLGeocoder, CLLocationManager;

@interface ICLocationContext : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    BOOL _requestedAuthorization;
    CLGeocoder *_geocoder;
}

+ (id)sharedContext;
@property(nonatomic) BOOL requestedAuthorization; // @synthesize requestedAuthorization=_requestedAuthorization;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
// - (void).cxx_destruct;
- (void)requestAuthorizationIfNeeded;
@property(readonly, nonatomic) CLLocationManager *locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)lookupPlaceAtLatitude:(double)arg1 longitude:(double)arg2 handler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) BOOL canGetLocation;

@end

