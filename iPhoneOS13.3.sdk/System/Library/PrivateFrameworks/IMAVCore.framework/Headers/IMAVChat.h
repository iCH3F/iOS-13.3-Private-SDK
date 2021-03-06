//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAVCore/IMSystemMonitorListener-Protocol.h>

@class IMAVChatParticipant, IMAccount, IMHandle, IMTimingCollection, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface IMAVChat : NSObject <IMSystemMonitorListener>
{
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSMutableDictionary *_conferenceStateCache;
    NSNumber *_natType;
    NSMutableDictionary *_extraServerContext;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSDate *_dateReceivedRelayInitiate;
    NSDate *_dateReceivedRelayUpdate;
    NSDate *_interruptionBegan;
    NSDictionary *_pingTestResults;
    NSNumber *_frontCameraCaptureTime;
    NSNumber *_backCameraCaptureTime;
    NSNumber *_dataRate;
    NSNumber *_dataUploaded;
    NSNumber *_dataDownloaded;
    IMTimingCollection *_timingCollection;
    NSUInteger _localNetworkConnectionType;
    NSUInteger _remoteNetworkConnectionType;
    long long _pingTestResult;
    long long _networkCheckResult;
    NSDictionary *_callerProperties;
    NSObject<OS_dispatch_queue> *_conferenceQueue;
    NSData *_relayRemotePrimaryIdentifier;
    unsigned int _sessionID;
    NSError *_error;
    unsigned int _localState;
    unsigned int _lastPostedState;
    NSString *_callStatisticsGUID;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    BOOL _hasGatheredInfo;
    BOOL _hasReceivedFirstFrame;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
    BOOL _isCaller;
    BOOL _isVideo;
    int _connectionType;
    BOOL _needsVideoRestart;
    BOOL _needsAudioRestart;
    BOOL _isVideoInterrupted;
    BOOL _isAudioInterrupted;
    BOOL _connectionStarted;
    BOOL _relayed;
    BOOL _mayRequireBreakBeforeMake;
    BOOL _terminating;
    BOOL _didRemoteMute;
    BOOL _didRemotePause;
    BOOL _airplaneModeEnabled;
    BOOL _metadataFinalized;
    id _conferenceController;
    NSTimer *_inviteTimeoutTimer;
    NSDate *_inviteTimeoutTimerStart;
    NSTimer *_firstFrameTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    CGSize _portraitAspectRatios;
    CGSize _landscapeAspectRatios;
}

+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (double)defaultConnectionTimeoutTime;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (double)defaultInvitationTimeoutTime;
+ (id)_avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2;
+ (id)_avChatConnectingFromIMHandle:(id)arg1;
+ (id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)_chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)_acceptedChats;
+ (id)_connectedChats;
+ (id)_connectingChats;
+ (id)_outgoingInvitations;
+ (id)_incomingInvitations;
+ (id)_avChatWithGUID:(id)arg1;
+ (id)_avChatWithConferenceID:(id)arg1;
+ (id)_chatListLock;
+ (id)_nonFinalChat;
+ (id)_activeChat;
+ (id)_connectedChat;
+ (id)_chatList;
+ (id)_chatWithSessionID:(unsigned int)arg1;
+ (id)_avChatArray;
+ (id)avChatWithGUID:(id)arg1;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)acceptedChats;
+ (id)connectedChats;
+ (id)connectingChats;
+ (id)outgoingInvitations;
+ (id)incomingInvitations;
+ (id)nonFinalChat;
+ (id)activeChat;
+ (id)connectedChat;
+ (id)chatList;
+ (id)_proxyRepresentationForIMHandle:(id)arg1;
+ (id)_imHandleFromProxyRepresentation:(id)arg1;
@property(nonatomic, setter=_setMetadataFinalized:) BOOL metadataFinalized; // @synthesize metadataFinalized=_metadataFinalized;
@property(nonatomic, setter=_setAirplaneModeEnabled:) BOOL airplaneModeEnabled; // @synthesize airplaneModeEnabled=_airplaneModeEnabled;
@property(nonatomic, setter=_setDidRemotePause:) BOOL didRemotePause; // @synthesize didRemotePause=_didRemotePause;
@property(nonatomic, setter=_setDidRemoteMute:) BOOL didRemoteMute; // @synthesize didRemoteMute=_didRemoteMute;
@property(nonatomic, getter=isTerminating, setter=_setTerminating:) BOOL terminating; // @synthesize terminating=_terminating;
@property(nonatomic, setter=_setLandscapeAspectRatios:) CGSize landscapeAspectRatios; // @synthesize landscapeAspectRatios=_landscapeAspectRatios;
@property(nonatomic, setter=_setPortraitAspectRatios:) CGSize portraitAspectRatios; // @synthesize portraitAspectRatios=_portraitAspectRatios;
@property(retain, nonatomic, setter=_setConnectionTimeoutTimer:) NSTimer *connectionTimeoutTimer; // @synthesize connectionTimeoutTimer=_connectionTimeoutTimer;
@property(retain, nonatomic, setter=_setFirstFrameTimeoutTimer:) NSTimer *firstFrameTimeoutTimer; // @synthesize firstFrameTimeoutTimer=_firstFrameTimeoutTimer;
@property(retain, nonatomic, setter=_setInviteTimeoutTimerStart:) NSDate *inviteTimeoutTimerStart; // @synthesize inviteTimeoutTimerStart=_inviteTimeoutTimerStart;
@property(retain, nonatomic, setter=_setInviteTimeoutTimer:) NSTimer *inviteTimeoutTimer; // @synthesize inviteTimeoutTimer=_inviteTimeoutTimer;
@property(nonatomic) BOOL mayRequireBreakBeforeMake; // @synthesize mayRequireBreakBeforeMake=_mayRequireBreakBeforeMake;
@property(nonatomic, setter=_setNetworkCheckResult:) long long _networkCheckResult; // @synthesize _networkCheckResult;
@property(nonatomic, setter=_setPingTestResult:) long long _pingTestResult; // @synthesize _pingTestResult;
@property(retain, nonatomic, setter=_setPingTestResults:) NSDictionary *_pingTestResults; // @synthesize _pingTestResults;
@property(readonly) NSDictionary *_extraServerContext; // @synthesize _extraServerContext;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) IMAVChatParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_localState;
@property(readonly, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(nonatomic, setter=_setConferenceController:) id _conferenceController; // @synthesize _conferenceController;
@property(retain, nonatomic, setter=_setGUID:) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic, setter=_setConferenceID:) NSString *conferenceID; // @synthesize conferenceID=_conferenceID;
@property(readonly, nonatomic) BOOL isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic, getter=isRelayed) BOOL relayed; // @synthesize relayed=_relayed;
@property(retain, nonatomic, setter=_setRelayRemotePrimaryIdentifier:) NSData *_relayRemotePrimaryIdentifier; // @synthesize _relayRemotePrimaryIdentifier;
@property(nonatomic, setter=_setConnectionStarted:) BOOL _connectionStarted; // @synthesize _connectionStarted;
@property(nonatomic, setter=_setIsAudioInterrupted:) BOOL _isAudioInterrupted; // @synthesize _isAudioInterrupted;
@property(nonatomic, setter=_setIsVideoInterrupted:) BOOL _isVideoInterrupted; // @synthesize _isVideoInterrupted;
@property(retain, nonatomic, setter=setDataDownloaded:) NSNumber *dataDownloaded; // @synthesize dataDownloaded=_dataDownloaded;
@property(retain, nonatomic, setter=setDataUploaded:) NSNumber *dataUploaded; // @synthesize dataUploaded=_dataUploaded;
@property(retain, nonatomic, setter=setDataRate:) NSNumber *dataRate; // @synthesize dataRate=_dataRate;
@property(retain, nonatomic, setter=_setBackCameraCaptureTime:) NSNumber *_backCameraCaptureTime; // @synthesize _backCameraCaptureTime;
@property(retain, nonatomic, setter=_setFrontCameraCaptureTime:) NSNumber *_frontCameraCaptureTime; // @synthesize _frontCameraCaptureTime;
@property(retain, nonatomic, setter=_setInterruptionBegan:) NSDate *_interruptionBegan; // @synthesize _interruptionBegan;
@property(readonly, nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic, setter=_setNeedsVideoRestart:) BOOL _needsVideoRestart; // @synthesize _needsVideoRestart;
@property(nonatomic, setter=_setNeedsAudioRestart:) BOOL _needsAudioRestart; // @synthesize _needsAudioRestart;
@property(nonatomic, setter=_setRemoteNetworkConnectionType:) NSUInteger _remoteNetworkConnectionType; // @synthesize _remoteNetworkConnectionType;
@property(nonatomic, setter=_setLocalNetworkConnectionType:) NSUInteger _localNetworkConnectionType; // @synthesize _localNetworkConnectionType;
@property(retain, nonatomic, setter=_setNatType:) NSNumber *_natType; // @synthesize _natType;
@property(readonly, nonatomic) IMHandle *initiatorIMHandle; // @synthesize initiatorIMHandle=_initiator;
@property(retain, nonatomic, setter=_setCallerProperties:) NSDictionary *callerProperties; // @synthesize callerProperties=_callerProperties;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic, setter=_setCallStatisticsGUID:) NSString *_callStatisticsGUID; // @synthesize _callStatisticsGUID;
@property(nonatomic, setter=_setConnectionType:) int _connectionType; // @synthesize _connectionType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_conferenceQueue; // @synthesize _conferenceQueue;
// - (void).cxx_destruct;
- (BOOL)_cachedBoolForKey:(id)arg1;
- (BOOL)_hasCachedBoolForKey:(id)arg1;
- (void)_cacheBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_clearCache;
- (id)_timings;
- (void)_noteFirstFrame;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_handleAVError:(id)arg1;
@property(readonly, nonatomic) NSArray *_imHandles;
@property(readonly, nonatomic) BOOL isUsingWifi;
@property(readonly, nonatomic) BOOL _usesRelay;
@property(readonly, nonatomic) NSNumber *_relayConnectDuration;
@property(readonly, nonatomic) NSNumber *_callDuration;
@property(readonly, nonatomic) NSNumber *_connectDuration;
@property(readonly, nonatomic) NSNumber *_currentNatType;
@property(readonly, nonatomic) NSNumber *_remoteNatType;
- (BOOL)isConferenceSilent;
@property(readonly, nonatomic) long long _bustedCallID;
- (void)_setDateConnected;
- (void)_setCreationDate;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, nonatomic) int endedError;
@property(readonly, nonatomic) IMAccount *account;
@property(readonly, nonatomic) BOOL _isProxy;
@property(readonly, nonatomic) IMHandle *otherIMHandle;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (id)participantWithID:(id)arg1;
- (id)participantWithAVConferenceCallID:(long long)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(BOOL)arg4;
- (void)_responseToVCInvite:(id)arg1;
- (void)__responseToVCInvite:(id)arg1;
- (BOOL)_processVCResponseDict:(id)arg1;
- (void)_setStateDisconnected;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (void)acceptInvitation;
- (void)invite:(id)arg1;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3;
- (void)cancelInvitation;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)inviteAll;
- (BOOL)_isVideoUpgradeTo:(id)arg1;
- (BOOL)_isCallUpgradeTo:(id)arg1;
- (id)inviteesInfo;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)endChatWithError:(int)arg1;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)endChat;
- (void)beginChat;
- (id)description;
- (void)dealloc;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 isRelayed:(BOOL)arg3 GUID:(id)arg4;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 isRelayed:(BOOL)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (id)_initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 isRelayed:(BOOL)arg3 GUID:(id)arg4;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 isRelayed:(BOOL)arg4 GUID:(id)arg5 video:(BOOL)arg6 extraProperties:(id)arg7;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 GUID:(id)arg4 video:(BOOL)arg5 extraProperties:(id)arg6;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1;
- (void)setRemoteVideoPresentationSize:(CGSize)arg1;
@property(nonatomic) void localVideoBackLayer;
@property(nonatomic) void localVideoLayer;
- (void)setLocalAspectRatio:(CGSize)arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (CGSize)localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
@property(nonatomic) unsigned int cameraOrientation;
@property(nonatomic) unsigned int cameraType;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(CGSize)arg8;
- (BOOL)stopPreview;
- (BOOL)startPreviewWithError:(id )arg1;
@property(nonatomic) double connectionTimeoutTime;
@property(nonatomic) double invitationTimeoutTime;
- (void)_firstFrameTimeout:(id)arg1;
- (void)_setFirstFrameTimeoutTimer;
- (void)_clearFirstFrameTimeoutTimer;
- (void)_reduceInvitationTimeoutTime;
- (void)_invitationTimeout:(id)arg1;
- (void)_setInvitationTimeoutTimer;
- (void)_clearInvitationTimeoutTimer;
- (void)_connectionTimeout:(id)arg1;
- (void)_setConnectionTimeoutTimer;
- (void)_clearConnectionTimeoutTimer;
- (void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didDegrade:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2;
- (void)_conferenceOtherParticipant:(id)arg1 didConnect:(BOOL)arg2;
- (void)conferenceAVConferenceCallID:(long long)arg1 didConnect:(BOOL)arg2;
- (void)conferenceDidPauseAudioWithCallID:(long long)arg1 didPauseAudio:(BOOL)arg2;
- (void)conferenceDidStopWithCallID:(long long)arg1 error:(id)arg2;
- (void)_vccInitDidFinish:(id)arg1;
@property(nonatomic) BOOL isSendingAudio;
@property(nonatomic, setter=setRemoteMute:) BOOL isRemoteMute;
- (void)toggleMute;
@property(nonatomic, setter=setMute:) BOOL isMute;
@property(nonatomic) BOOL isSendingVideo;
- (void)togglePaused;
@property(nonatomic, setter=setPaused:) BOOL isPaused;
@property(readonly, nonatomic) BOOL hasReceivedFirstFrame;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_entitlementsChanged:(id)arg1;
- (void)_airplaneModeChanged:(id)arg1;
- (void)systemWillShutdown;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidBecomeActive;
- (void)_resumeVideoState;
- (void)_resumeAudioState;
- (void)_saveVideoRestartState;
- (void)_saveAudioRestartState;
- (void)systemDidFastUserSwitchOut;
- (void)_postStateToDelegateIfNecessary;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)_setActiveConference;
@property(readonly, nonatomic) BOOL isActive; // @dynamic isActive;
@property(readonly, nonatomic) BOOL isStateFinal; // @dynamic isStateFinal;
- (id)_participantMatchingVCPartyID:(id)arg1;
@property(readonly, nonatomic) BOOL _allParticipantsUsingICE;
@property(readonly, nonatomic) NSArray *remoteParticipants; // @dynamic remoteParticipants;
@property(readonly, nonatomic) IMAVChatParticipant *initiatorParticipant; // @dynamic initiatorParticipant;
- (BOOL)_participantsCheckOut;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (BOOL)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (void)setMetadataFinalized;
- (id)_proxyRepresentation;
- (id)_proxyRepresentationForIMAVChatParticipant:(id)arg1;
- (void)_submitCallEndedLoggingWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToAWDWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToViceroyWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_submitCallInterruptionEndedLogging;
- (void)_submitCallInterruptionBeganLogging;
- (void)_submitCallConnectedLogging;
- (void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(BOOL)arg2 isVideo:(BOOL)arg3;

@end

