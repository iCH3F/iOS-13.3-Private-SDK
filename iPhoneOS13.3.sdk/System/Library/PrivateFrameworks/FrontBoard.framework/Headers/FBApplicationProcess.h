//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBProcess.h>

@class BKSProcessAssertion, FBProcessWatchdog, FBProcessWatchdogEventContext, FBSProcessExecutionProvision, FBSProcessTerminationRequest, FBSProcessWatchdogPolicy, NSMutableArray, RBSAssertion;

@interface FBApplicationProcess : FBProcess
{
    FBSProcessTerminationRequest *_terminationRequest;
    FBProcessWatchdogEventContext *_terminationWatchdogContext;
    long long _terminationReason;
    NSMutableArray *_queue_terminateRequestCompletionBlocks;
    long long _watchdogReportType;
    FBProcessWatchdog *_watchdog;
    FBSProcessWatchdogPolicy *_sceneCreateWatchdogPolicy;
    FBSProcessExecutionProvision *_latestViolatedProvision;
    RBSAssertion *_gracefulKillAssertion;
    BKSProcessAssertion *_mediaAssertion;
    BKSProcessAssertion *_audioAssertion;
    BKSProcessAssertion *_accessoryAssertion;
    BOOL _recordingAudio;
    BOOL _nowPlayingWithAudio;
    BOOL _connectedToExternalAccessory;
}

@property(nonatomic, getter=isConnectedToExternalAccessory) BOOL connectedToExternalAccessory; // @synthesize connectedToExternalAccessory=_connectedToExternalAccessory;
@property(nonatomic, getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio; // @synthesize nowPlayingWithAudio=_nowPlayingWithAudio;
@property(nonatomic, getter=isRecordingAudio) BOOL recordingAudio; // @synthesize recordingAudio=_recordingAudio;
// - (void).cxx_destruct;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id )arg2;
- (void)_watchdogStopped:(id)arg1;
- (void)_watchdogStarted:(id)arg1;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (void)_queue_dropAssertions;
- (long long)_watchdogReportType;
- (long long)_exceptionCodeForKillReason:(int)arg1;
- (BOOL)_queue_shouldWatchdogWithDeclineReason:(id )arg1;
- (void)_queue_cancelWatchdogTimer;
- (void)_queue_startWatchdogTimerForContext:(id)arg1;
- (void)_queue_killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_queue_terminateWithRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_queue_executeKillForRequest:(id)arg1;
- (id)_queue_composeContextWithValue:(id)arg1 key:(id)arg2;
- (id)_queue_crashReportThermalsInfo;
- (void)_queue_doGracefulKillWithDeliveryConfirmation:(id /* CDUnknownBlockType */)arg1;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_queue_internalDebugEnvironmentVariables;
- (void)_queue_noteLaunchDidComplete:(BOOL)arg1;
- (void)_queue_noteLaunchWillComplete;
- (id)_queue_createBootstrapContext;
- (id)_watchdogProvider;
- (void)_queue_executeTerminateRequestCompletionBlocksIfNecessaryForSucccess:(BOOL)arg1;
- (BOOL)_wantsStateUpdates;
- (void)invalidate;
- (void)_queue_noteProcessDidExit:(id)arg1;
@property(readonly, nonatomic) double elapsedCPUTime;
- (BOOL)isApplicationProcess;
- (void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3;
- (id)initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3;

@end
