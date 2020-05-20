//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, WBSDeviceEligibilityInformation;
@protocol OS_dispatch_queue, WBSLogger;

@interface WBSCloudBookmarksMigrationReadinessDecider : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDate *_nonMigratableDeviceGracePeriodStartDate;
    NSDate *_dateOfCloudTabDevicesSyncRequest;
    NSDate *_dateOfLastCloudTabDevicesUpdate;
    NSDate *_dateOfDeviceEligibilityUpdate;
    NSMutableDictionary *_nonMigratableDeviceIdentifiersToLastModifiedDates;
    WBSDeviceEligibilityInformation *_deviceEligibilityInformation;
    NSArray *_eligibleOperatingSystemVersionRanges;
    BOOL _readyToMigrate;
    BOOL _lastCloudTabDevicesSyncRequestWasSuccessful;
    id <WBSLogger> _keyActionsLogger;
}

+ (id)_deviceEligibilityInformationFromDictionaryRepresentation:(id)arg1;
@property(retain, nonatomic) id <WBSLogger> keyActionsLogger; // @synthesize keyActionsLogger=_keyActionsLogger;
// - (void).cxx_destruct;
- (BOOL)_shouldWaitForCloudTabDevicesUpdate;
- (BOOL)_shouldRequestCloudTabDevicesSync;
- (BOOL)_isPastMinimumWaitAfterCloudTabDeviceSyncRequest;
- (BOOL)_isCloudTabDeviceDataPastExpiration;
- (BOOL)_isInternalInstall;
- (BOOL)_isDateInGracePeriod:(id)arg1;
- (double)_deviceEligibilityUpdateInterval;
- (double)_minimumWaitForCloudTabDevicesUpdateAfterSync;
- (double)_maximumAgeForCloudTabDevicesUpdate;
- (double)_nonMigratableDeviceGracePeriod;
- (long long)_timescale;
- (BOOL)_hasValidDeviceEligibilityInformation;
- (void)_pruneOldNonMigratableDevicesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_reevaluateReadinessWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_logPrunedDeviceIdentifiers:(id)arg1;
- (void)_logDevicesExcludedFromUpdateWithDevices:(id)arg1;
- (void)_logKeyActionForUpdateWithDevice:(id)arg1;
- (void)_logKeyAction:(id)arg1;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)_synchronizeCloudTabDevicesWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_fetchDeviceEligibilityInformationWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)updateWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
@property(copy, nonatomic) NSArray *eligibleOperatingSystemVersionRanges;
@property(readonly, nonatomic) NSDate *earliestPossibleDateOfMigration;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic, getter=isReadyToMigrate) BOOL readyToMigrate;
- (id)initFromDictionaryRepresentation:(id)arg1;

@end

