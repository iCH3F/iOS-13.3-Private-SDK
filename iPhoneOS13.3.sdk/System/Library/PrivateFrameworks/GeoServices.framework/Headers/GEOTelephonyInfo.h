//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOTelephonyInfo : NSObject
{
}

+ (BOOL)hasCellularCapability;
+ (id)sharedInfo;
- (void)_updateMapsAuthed;
- (id)isMapsAuthorizedForCellularIfAvailable;
- (BOOL)isMapsAuthorizedForCellular;
- (id)isDeviceAuthorizedForCellularIfAvailable;
- (BOOL)isDeviceAuthorizedForCellular;
- (id)cellularCarrierIfAvailable;
- (id)cellularCarrier;
- (id)init;
- (int)cellularDataStateIfAvailable;

@end

