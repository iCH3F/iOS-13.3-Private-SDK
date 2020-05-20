//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CTCarrierSpaceClientDelegate-Protocol.h>
#import <SettingsCellularUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CTCarrierSpaceAppsInfo, CTCarrierSpaceCapabilities, CTCarrierSpaceClient, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, CTCarrierSpaceUserConsentFlowInfo, CoreTelephonyClient, NSNumber, PSUIAppInstallController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceManager : NSObject <CTCarrierSpaceClientDelegate, CoreTelephonyClientSubscriberDelegate>
{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    CTCarrierSpaceCapabilities *_capabilities;
    CTCarrierSpaceUsageInfo *_usageInfo;
    CTCarrierSpacePlansInfo *_plansInfo;
    CTCarrierSpaceAppsInfo *_appsInfo;
    PSUIAppInstallController *_carrierAppInstallController;
    NSNumber *_hasUserConsent;
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;
    NSNumber *_userConsentResponse;
    struct __CTServerConnection _serverConnection;
    CoreTelephonyClient *_coreTelephonyClient;
    CTCarrierSpaceClient *_carrierSpaceClient;
}

+ (id)getNSURLSessionConfiguration;
+ (long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2;
+ (BOOL)isCarrierMetricTypeValid:(int)arg1;
+ (int)carrierMetricTypeForString:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
// - (void).cxx_destruct;
- (void)userConsentFlowInfoDidChange;
- (void)appsDidChange;
- (void)plansDidChange;
- (void)usageDidChange;
- (void)capabilitiesDidChange:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)localizedDataStringFromBytes:(NSUInteger)arg1;
- (id)descriptionForPlanMetrics:(id)arg1;
- (BOOL)planChangeIsRestricted;
- (id)carrierAppInstallController;
- (id)appsInfo;
- (id)planMetrics;
- (id)subscribedDomesticPlanOptions;
- (id)subscribedPlanOptions;
- (id)plansInfo;
- (id)usageInfo;
- (id)capabilities;
- (BOOL)supportsSweetgum;
- (void)refresh;
- (void)refreshAndReload;
- (void)reset;
- (void)userConsentAcknowledged:(BOOL)arg1;
- (void)setUserConsent:(BOOL)arg1;
- (id)userConsentFlowInfo;
- (BOOL)hasUserConsent;
- (void)dealloc;
- (id)init;

@end

