//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBPolicyAggregator.h>

@class MCProfileConnection, SBAlertItemsController, SBApplicationController, SBAssistantController, SBCommandTabController, SBConferenceManager, SBLocalDefaults, SBLockScreenManager, SBLockStateAggregator, SBMainWorkspace, SBNotificationBannerDestination, SBRemoteTransientOverlaySessionManager, SBSetupManager, SBTelephonyManager;

@interface SBMainDisplayPolicyAggregator : SBPolicyAggregator
{
    MCProfileConnection *_override_profileConnection;
    SBSetupManager *_override_setupManager;
    SBAlertItemsController *_override_alertItemsController;
    SBApplicationController *_override_applicationController;
    SBAssistantController *_override_assistantController;
    SBCommandTabController *_override_commandTabController;
    SBConferenceManager *_override_conferenceManager;
    SBRemoteTransientOverlaySessionManager *_override_remoteTransientOverlaySessionManager;
    SBLockScreenManager *_override_lockScreenManager;
    SBLockStateAggregator *_override_lockStateAggregator;
    SBTelephonyManager *_override_telephonyManager;
    SBMainWorkspace *_override_mainWorkspace;
    SBNotificationBannerDestination *_override_bannerDestination;
    struct __CFBoolean _hasCameraCapability;
    SBLocalDefaults *_defaults;
    BOOL _storeDemoAppLockEnabled;
}

@property(retain, nonatomic, getter=_bannerDestination, setter=_setBannerDestination:) SBNotificationBannerDestination *bannerDestination; // @synthesize bannerDestination=_override_bannerDestination;
@property(retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_override_mainWorkspace;
@property(retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // @synthesize telephonyManager=_override_telephonyManager;
@property(retain, nonatomic, getter=_lockStateAggregator, setter=_setLockStateAggregator:) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_override_lockStateAggregator;
@property(retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_override_lockScreenManager;
@property(retain, nonatomic, getter=_remoteTransientOverlaySessionManager, setter=_setRemoteTransientOverlaySessionManager:) SBRemoteTransientOverlaySessionManager *remoteTransientOverlaySessionManager; // @synthesize remoteTransientOverlaySessionManager=_override_remoteTransientOverlaySessionManager;
@property(retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager; // @synthesize conferenceManager=_override_conferenceManager;
@property(retain, nonatomic, getter=_commandTabController, setter=_setCommandTabController:) SBCommandTabController *commandTabController; // @synthesize commandTabController=_override_commandTabController;
@property(retain, nonatomic, getter=_assistantController, setter=_setAssistantController:) SBAssistantController *assistantController; // @synthesize assistantController=_override_assistantController;
@property(retain, nonatomic, getter=_applicationController, setter=_setApplicationController:) SBApplicationController *applicationController; // @synthesize applicationController=_override_applicationController;
@property(retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController; // @synthesize alertItemsController=_override_alertItemsController;
@property(retain, nonatomic, getter=_setupManager, setter=_setSetupManager:) SBSetupManager *setupManager; // @synthesize setupManager=_override_setupManager;
@property(retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // @synthesize profileConnection=_override_profileConnection;
// - (void).cxx_destruct;
- (BOOL)_dictationInfoOnScreen;
- (BOOL)_allowsCapabilityQuickNoteWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityLiftToWakeWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityTodayViewWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityLockScreenTodayViewWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityLockScreenNotificationCenterWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityLockScreenControlCenterWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityCommandTabWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityScreenshotWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityHomeScreenEditingWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityLoginWindowWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityLogoutWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityControlCenterWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityDismissCoverSheetWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityCoverSheetWithExplanation:(id )arg1;
- (BOOL)_allowsNotificationOrControlCenterWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityLockScreenCameraWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilitySpotlightWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityVoiceControlWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilitySystemGestureWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilitySendMediaCommandWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityAssistantWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityAssistantEnabledWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilityLockScreenBulletinWithExplanation:(id )arg1;
- (BOOL)_allowsCapabilitySuggestedApplicationWithExplanation:(id )arg1;
- (BOOL)_hasFullySetUpUserWithExplanation:(id )arg1;
- (void)reloadDemoDefaults;
- (BOOL)allowsTransitionRequest:(id)arg1;
- (BOOL)allowsCapability:(long long)arg1 explanation:(id )arg2;
- (BOOL)allowsCapability:(long long)arg1;
- (id)init;
- (id)_initWithDefaults:(id)arg1;

@end

