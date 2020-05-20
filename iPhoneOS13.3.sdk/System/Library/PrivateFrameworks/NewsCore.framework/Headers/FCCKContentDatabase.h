//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCNetworkBehaviorMonitor, NSString;

@interface FCCKContentDatabase : NSObject
{
    BOOL _isProductionEnvironment;
    BOOL _shouldUseCloudd;
    BOOL _shouldUseSecureConnectionForCKAssetURLs;
    BOOL _shouldBypassCDNForCKAssetURLs;
    NSString *_containerIdentifier;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
}

@property(nonatomic) BOOL shouldBypassCDNForCKAssetURLs; // @synthesize shouldBypassCDNForCKAssetURLs=_shouldBypassCDNForCKAssetURLs;
@property(nonatomic) BOOL shouldUseSecureConnectionForCKAssetURLs; // @synthesize shouldUseSecureConnectionForCKAssetURLs=_shouldUseSecureConnectionForCKAssetURLs;
@property(readonly, nonatomic) BOOL shouldUseCloudd; // @synthesize shouldUseCloudd=_shouldUseCloudd;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(readonly, nonatomic) BOOL isProductionEnvironment; // @synthesize isProductionEnvironment=_isProductionEnvironment;
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
// - (void).cxx_destruct;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 useSecureConnection:(BOOL)arg3;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2;
- (void)addOperation:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(BOOL)arg2 networkBehaviorMonitor:(id)arg3;
- (id)initWithContextConfiguration:(id)arg1 networkBehaviorMonitor:(id)arg2;
- (id)init;

@end

