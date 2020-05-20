//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUInstallationConstraintObserverDelegate-Protocol.h>
#import <SoftwareUpdateServices/SUManagerClientInterface-Protocol.h>
#import <SoftwareUpdateServices/SUPreferencesObserver-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSXPCConnection, SUDescriptor;
@protocol OS_dispatch_queue, SUManagerClientDelegate;

@interface SUManagerClient : NSObject <SUManagerClientInterface, SUInstallationConstraintObserverDelegate, SUPreferencesObserver>
{
    NSXPCConnection *_serverConnection;
    id <SUManagerClientDelegate> _delegate;
    BOOL _connected;
    BOOL _serverIsExiting;
    int _clientType;
    BOOL _installing;
    SUDescriptor *_installDescriptor;
    SUDescriptor *_scanDescriptor;
    NSMutableDictionary *_installOperationIDsToOperationHandler;
    NSMutableSet *_installationConstraintObservers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)_shouldDisallowAvailabilityNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SUDescriptor *scanDescriptor; // @synthesize scanDescriptor=_scanDescriptor;
@property(retain, nonatomic) SUDescriptor *installDescriptor; // @synthesize installDescriptor=_installDescriptor;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) __weak id <SUManagerClientDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)autoInstallOperationPasscodePolicyChanged:(id)arg1 passcodePolicyType:(NSUInteger)arg2;
- (void)autoInstallOperationIsReadyToInstall:(id)arg1 withResult:(id /* CDUnknownBlockType */)arg2;
- (void)autoInstallOperationDidConsent:(id)arg1;
- (void)autoInstallOperationDidExpire:(id)arg1 withError:(id)arg2;
- (void)autoInstallOperationWasCancelled:(id)arg1;
- (void)managedInstallationRequested:(id)arg1;
- (void)installPolicyDidChange:(id)arg1;
- (void)installDidFinish:(id)arg1;
- (void)installDidFail:(id)arg1 withError:(id)arg2;
- (void)installDidStart:(id)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
- (void)downloadDidFinish:(id)arg1 withInstallPolicy:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidFail:(id)arg1 withError:(id)arg2;
- (void)downloadProgressDidChange:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)scanRequestDidStartForOptions:(id)arg1;
- (void)noteServerExiting;
- (void)noteConnectionDropped;
- (void)connectToServerIfNecessary;
- (void)_invalidateConnection;
- (id)_remoteSynchronousInterfaceWithErrorHandler:(id /* CDUnknownBlockType */)arg1 connectIfNecessary:(BOOL)arg2;
- (id)_remoteInterfaceWithErrorHandler:(id /* CDUnknownBlockType */)arg1 connectIfNecessary:(BOOL)arg2;
- (id)_remoteInterfaceWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_remoteInterface;
- (id)_bundleIdentifier;
- (void)_invalidateConstraintObserver:(id)arg1 withError:(id)arg2;
- (void)_invalidateAllInstallationConstraintObserversForDownload;
- (void)preference:(id)arg1 didChange:(id)arg2;
- (void)installationConstraintObserverDidRemoveAllObserverBlocks:(id)arg1;
- (void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(NSUInteger)arg2;
- (void)demoteApps:(NSUInteger)arg1;
- (void)_cancelAutoInstallOperation:(id)arg1 withResult:(id /* CDUnknownBlockType */)arg2;
- (void)_consentAutoInstallOperation:(id)arg1 withResult:(id /* CDUnknownBlockType */)arg2;
- (void)_unregisterAutoInstallOperationClientHandler:(id)arg1;
- (void)_registerAutoInstallOperationClientHandler:(id)arg1;
- (BOOL)isAutomaticUpdateV2Enabled;
- (void)enableAutomaticUpdateV2:(BOOL)arg1;
- (void)getMandatorySoftwareUpdateDictionary:(id /* CDUnknownBlockType */)arg1;
- (void)setMandatorySoftwareUpdateDictionary:(id)arg1;
- (void)delayEndDate:(id /* CDUnknownBlockType */)arg1;
- (void)isDelayingUpdates:(id /* CDUnknownBlockType */)arg1;
- (void)slaVersion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isInstallationKeybagRequired;
- (BOOL)createInstallationKeybag:(id)arg1 forUnattendedInstall:(BOOL)arg2;
- (BOOL)createInstallationKeybag:(id)arg1;
- (void)installUpdate:(id /* CDUnknownBlockType */)arg1;
- (void)installUpdateWithOptions:(id)arg1 withResult:(id /* CDUnknownBlockType */)arg2;
- (void)isUpdateReadyForInstallation:(id /* CDUnknownBlockType */)arg1;
- (void)registerCSInstallPredicatesOnDate:(id)arg1;
- (id)observeInstallationConstraintChangesForDownload:(id)arg1 observer:(id /* CDUnknownBlockType */)arg2;
- (id)_getExistingAutoInstallOperationFromModel:(id)arg1;
- (void)presentAutoUpdateBanner:(id /* CDUnknownBlockType */)arg1;
- (void)isAutoUpdateScheduled:(id /* CDUnknownBlockType */)arg1;
- (void)isAutoUpdateEnabled:(id /* CDUnknownBlockType */)arg1;
- (void)currentPasscodePolicy:(id /* CDUnknownBlockType */)arg1;
- (void)currentAutoInstallOperation:(BOOL)arg1 withResult:(id /* CDUnknownBlockType */)arg2;
- (void)extraSpaceNeededForDownloadWithoutAppPurging:(id /* CDUnknownBlockType */)arg1;
- (void)deviceHasSufficientSpaceForDownload:(id /* CDUnknownBlockType */)arg1;
- (void)downloadAndInstallState:(id /* CDUnknownBlockType */)arg1;
- (void)download:(id /* CDUnknownBlockType */)arg1;
- (void)purgeDownload:(id /* CDUnknownBlockType */)arg1;
- (void)updateDownloadMetadata:(id)arg1 withResult:(id /* CDUnknownBlockType */)arg2;
- (void)resumeDownload:(id /* CDUnknownBlockType */)arg1;
- (void)pauseDownload:(id /* CDUnknownBlockType */)arg1;
- (void)cancelDownload:(id /* CDUnknownBlockType */)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(id /* CDUnknownBlockType */)arg2;
- (void)startDownload:(id /* CDUnknownBlockType */)arg1;
- (void)isDownloading:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)totalPurgeableSpace;
- (void)autoScanAndDownloadIfAvailable:(id /* CDUnknownBlockType */)arg1;
- (void)scanForUpdates:(id)arg1 withResult:(id /* CDUnknownBlockType */)arg2;
- (void)isScanning:(id /* CDUnknownBlockType */)arg1;
- (void)_setClientType;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 clientType:(int)arg3;
- (id)initWithDelegate:(id)arg1 clientType:(int)arg2;
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

