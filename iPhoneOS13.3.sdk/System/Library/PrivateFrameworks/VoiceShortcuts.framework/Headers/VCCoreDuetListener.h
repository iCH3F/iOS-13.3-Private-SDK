//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCUserNotificationManagerDelegate-Protocol.h>
#import <VoiceShortcuts/WFOutOfProcessWorkflowControllerDelegate-Protocol.h>

@class NSMutableDictionary, VCDaemonXPCEventHandler, VCUserNotificationManager, WFConfiguredTrigger, WFDatabase, WFOutOfProcessWorkflowController, WFWorkflowRunEvent;
@protocol OS_dispatch_queue, VCDatabaseProvider, _CDUserContext;

@interface VCCoreDuetListener : NSObject <VCUserNotificationManagerDelegate, WFOutOfProcessWorkflowControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <_CDUserContext> _userContext;
    id <VCDatabaseProvider> _databaseProvider;
    VCUserNotificationManager *_notificationManager;
    VCDaemonXPCEventHandler *_eventHandler;
    NSMutableDictionary *_registrations;
    WFOutOfProcessWorkflowController *_workflowController;
    WFWorkflowRunEvent *_inProgressRunEvent;
    WFConfiguredTrigger *_inProgressTrigger;
}

+ (double)rateLimitingTimeoutForTrigger:(id)arg1 runEvents:(id)arg2;
+ (BOOL)shouldRunTrigger:(id)arg1 forEvent:(id)arg2 runEvents:(id)arg3 error:(id )arg4;
@property(retain, nonatomic) WFConfiguredTrigger *inProgressTrigger; // @synthesize inProgressTrigger=_inProgressTrigger;
@property(retain, nonatomic) WFWorkflowRunEvent *inProgressRunEvent; // @synthesize inProgressRunEvent=_inProgressRunEvent;
@property(retain, nonatomic) WFOutOfProcessWorkflowController *workflowController; // @synthesize workflowController=_workflowController;
@property(readonly, nonatomic) NSMutableDictionary *registrations; // @synthesize registrations=_registrations;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) VCUserNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) id <VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) id <_CDUserContext> userContext; // @synthesize userContext=_userContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)logMetricForTrigger:(id)arg1;
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)unregisterTriggerWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)registerTriggerWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)registerAllTriggersWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3;
- (void)notificationManager:(id)arg1 didDismissTriggerWithIdentifier:(id)arg2;
- (void)notificationManager:(id)arg1 receivedConfirmationToRunTriggerWithIdentifier:(id)arg2;
- (void)logPowerLogEventForConfiguredTrigger:(id)arg1 workflowReference:(id)arg2;
- (BOOL)startRunningWorkflow:(id)arg1 forTrigger:(id)arg2 eventInfo:(id)arg3 error:(out id )arg4;
- (void)queue_fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)fetchCurrentSunriseSunsetTimes;
- (void)handleSunriseSunsetChanged;
- (void)registerSunriseSunsetCallbackIfNeeded;
- (void)unregisterCallbackForIdentifier:(id)arg1;
- (void)registerCallback:(id)arg1 withIdentifier:(id)arg2;
- (BOOL)isCallbackRegisteredWithIdentifier:(id)arg1;
- (void)unregisterAllTriggers;
- (void)handleCallbackForTriggerWithIdentifier:(id)arg1 info:(id)arg2;
- (BOOL)registerTrigger:(id)arg1 error:(id )arg2;
- (BOOL)queue_registerAllTriggers:(id )arg1;
- (id)queue_configuredTriggerForIdentifier:(id)arg1 workflowReference:(id )arg2 error:(out id )arg3;
@property(readonly, nonatomic) WFDatabase *database;
- (void)deviceDidUnlockForFirstTime;
- (void)dealloc;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;

@end

