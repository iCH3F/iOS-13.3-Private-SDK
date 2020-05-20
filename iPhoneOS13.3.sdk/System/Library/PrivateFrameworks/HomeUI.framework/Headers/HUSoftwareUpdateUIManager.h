//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HFExecutionEnvironmentObserver-Protocol.h>
#import <HomeUI/HFSoftwareUpdateObserver-Protocol.h>

@class NSMapTable;

@interface HUSoftwareUpdateUIManager : NSObject <HFSoftwareUpdateObserver, HFExecutionEnvironmentObserver>
{
    NSMapTable *_homeBackgroundCheckMapTable;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSMapTable *homeBackgroundCheckMapTable; // @synthesize homeBackgroundCheckMapTable=_homeBackgroundCheckMapTable;
// - (void).cxx_destruct;
- (void)executionEnvironmentDidEnterBackground:(id)arg1;
- (id)_markTermsAndConditionsAsReadForLicenseAgreementVersion:(id)arg1 inHome:(id)arg2;
- (BOOL)_shouldPresentTermsAndConditionsForSoftwareLicenseAgreementVersion:(id)arg1 home:(id)arg2;
- (id)presentLicensesIfNeededForSoftwareUpdate:(id)arg1 home:(id)arg2 presentationDelegate:(id)arg3;
- (BOOL)isLicensePresentationNecessaryForSoftwareUpdate:(id)arg1 home:(id)arg2 error:(out id )arg3;
- (id)startUpdateForAccessory:(id)arg1 update:(id)arg2 presentationDelegate:(id)arg3;
- (id)startUpdatesForAccessories:(id)arg1 presentationDelegate:(id)arg2;
- (id)startUpdatesForAllAccessoriesInHome:(id)arg1 presentationDelegate:(id)arg2;
- (long long)numberOfAccessoriesWithAvailableUpdatesInHome:(id)arg1;
- (long long)numberOfAccessoriesWithAvailableUpdates:(id)arg1;
- (id)fetchAvailableUpdatesForAccessories:(id)arg1;
- (id)fetchAvailableUpdatesForHome:(id)arg1;
- (id)fetchAvailableUpdatesForAccessory:(id)arg1;
- (void)startSilentBackgroundCheckForHome:(id)arg1;
- (id)init;

@end

