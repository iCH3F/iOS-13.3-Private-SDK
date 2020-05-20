//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <SettingsCellularUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PSUICarrierServicesSpecifierCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate>
{
    CoreTelephonyClient *_client;
    NSMutableDictionary *_specifiersDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *specifiersDict; // @synthesize specifiersDict=_specifiersDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
// - (void).cxx_destruct;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)carrierBundleChange:(id)arg1;
- (void)openURLWithSpecifier:(id)arg1;
- (void)_allowClicks;
- (void)dialCarrierServiceNumber:(id)arg1;
- (id)readPreference:(id)arg1;
- (id)specifiers:(id)arg1;
- (void)fetchSpecifiers;
- (id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (id)newMyAccountSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (void)willEnterForeground;
- (void)_clearCache;
- (void)dealloc;
- (id)init;
- (id)initPrivate;

@end

