//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionDiscoveringEnvironment-Protocol.h>

@class CNContactStore, CNUIIDSContactPropertyResolver;
@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager, CNUIDefaultUserActionFetcher, CNUIRTTUtilities, CNUIUserActionTargetDiscovering;

@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment>
{
    CNContactStore *_contactStore;
    id <CNLSApplicationWorkspace> _applicationWorkspace;
    id <CNTUCallProviderManager> _callProviderManager;
    CNUIIDSContactPropertyResolver *_idsContactPropertyResolver;
    id <CNMCProfileConnection> _profileConnection;
    id <CNCapabilities> _capabilities;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNSchedulerProvider> _highLatencySchedulerProvider;
    id <CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;
    id <CNUIRTTUtilities> _ttyUtilities;
    id <CNUIUserActionTargetDiscovering> _targetDiscoveringHelper;
}

@property(readonly, nonatomic) id <CNUIUserActionTargetDiscovering> targetDiscoveringHelper; // @synthesize targetDiscoveringHelper=_targetDiscoveringHelper;
@property(readonly, nonatomic) id <CNUIRTTUtilities> ttyUtilities; // @synthesize ttyUtilities=_ttyUtilities;
@property(readonly, nonatomic) id <CNUIDefaultUserActionFetcher> defaultUserActionFetcher; // @synthesize defaultUserActionFetcher=_defaultUserActionFetcher;
@property(readonly, nonatomic) id <CNSchedulerProvider> highLatencySchedulerProvider; // @synthesize highLatencySchedulerProvider=_highLatencySchedulerProvider;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNCapabilities> capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) id <CNMCProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;
@property(readonly, nonatomic) CNUIIDSContactPropertyResolver *idsContactPropertyResolver; // @synthesize idsContactPropertyResolver=_idsContactPropertyResolver;
@property(readonly, nonatomic) id <CNTUCallProviderManager> callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
// - (void).cxx_destruct;
- (id)nts_lazyContactStore;
@property(readonly, nonatomic) CNContactStore *contactStore;
- (id)copyWithContactStore:(id)arg1;
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 idsContactPropertyResolver:(id)arg3 profileConnection:(id)arg4 contactStore:(id)arg5 schedulerProvider:(id)arg6 highLatencySchedulerProvider:(id)arg7 capabilities:(id)arg8 defaultUserActionFetcher:(id)arg9 ttyUtilities:(id)arg10;
- (id)initWithIDSAvailabilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;
- (id)initWithIDSAvailablilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;
- (id)init;

@end

