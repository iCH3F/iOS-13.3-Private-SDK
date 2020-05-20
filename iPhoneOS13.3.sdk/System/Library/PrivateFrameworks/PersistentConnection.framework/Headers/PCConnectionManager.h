//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersistentConnection/PCCarrierBundleHelperDelegate-Protocol.h>
#import <PersistentConnection/PCInterfaceMonitorDelegate-Protocol.h>

@class NSRunLoop, NSString, PCPersistentTimer;
@protocol OS_dispatch_queue, OS_os_log, PCConnectionManagerDelegate, PCGrowthAlgorithm;

@interface PCConnectionManager : NSObject <PCCarrierBundleHelperDelegate, PCInterfaceMonitorDelegate>
{
    int _connectionClass;
    id <PCConnectionManagerDelegate> _delegate;
    NSString *_serviceIdentifier;
    NSString *_duetIdentifier;
    int _prefsStyle;
    int _onlyAllowedStyle;
    BOOL _onlyAllowedStyleSet;
    long long _interfaceIdentifier;
    NSUInteger _guidancePriority;
    NSRunLoop *_delegateRunLoop;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_log> *_logObject;
    id <PCGrowthAlgorithm> _wwanGrowthAlgorithm[2];
    id <PCGrowthAlgorithm> _wifiGrowthAlgorithm[2];
    id <PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
    PCPersistentTimer *_intervalTimer;
    PCPersistentTimer *_reconnectWakeTimer;
    PCPersistentTimer *_delayTimer;
    unsigned int _powerAssertionID;
    double _onTimeKeepAliveTime;
    double _lastResumeTime;
    double _lastStopTime;
    double _lastStartTime;
    double _lastReachableTime;
    double _lastReconnectTime;
    double _lastScheduledIntervalTime;
    double _timerGuidance;
    double _keepAliveGracePeriod;
    double _lastElapsedInterval;
    BOOL _minimumIntervalFallbackEnabled;
    BOOL _operatorMinimumIntervalFallbackAllowed;
    unsigned int _reconnectIteration;
    int _timerGuidanceToken;
    int _pushIsConnectedToken;
    int _prefsChangedToken;
    double _defaultPollingInterval;
    double _pollingIntervalOverride;
    BOOL _pollingIntervalOverrideSet;
    BOOL _hasStarted;
    BOOL _isRunning;
    BOOL _inCallback;
    BOOL _isInReconnectMode;
    BOOL _reconnectWithKeepAliveDelay;
    BOOL _forceManualWhenRoaming;
    BOOL _enableNonCellularConnections;
    BOOL _isReachable;
    BOOL _disableEarlyFire;
    BOOL _alwaysWantsInterfaceChangeCallbacks;
    int _lastProcessedAction;
    BOOL _deviceUnderGoodCondition;
    int _currentGrowthStage;
    id _duetContextRegistration;
    BOOL _powerOptimizationsForExpensiveNetworkingDisabled;
    double _nonCellularEarlyFireConstantInterval;
    int _currentAddressFamily;
}

+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2;
+ (id)_keepAliveCachePath;
+ (id)intervalCacheDictionaries;
+ (Class)growthAlgorithmClass;
@property(nonatomic) BOOL powerOptimizationsForExpensiveNetworkingDisabled; // @synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled;
@property(nonatomic) BOOL alwaysWantsInterfaceChangeCallbacks; // @synthesize alwaysWantsInterfaceChangeCallbacks=_alwaysWantsInterfaceChangeCallbacks;
@property(nonatomic) double nonCellularEarlyFireConstantInterval; // @synthesize nonCellularEarlyFireConstantInterval=_nonCellularEarlyFireConstantInterval;
@property(readonly, nonatomic) int lastProcessedAction; // @synthesize lastProcessedAction=_lastProcessedAction;
@property(nonatomic) long long interfaceIdentifier; // @synthesize interfaceIdentifier=_interfaceIdentifier;
@property(nonatomic) double keepAliveGracePeriod; // @synthesize keepAliveGracePeriod=_keepAliveGracePeriod;
// - (void).cxx_destruct;
- (id)_stringForAddressFamily:(int)arg1;
- (id)_stringForEvent:(int)arg1;
- (id)_stringForAction:(int)arg1;
- (id)_stringForStyle:(int)arg1;
- (id)_getCachedWWANKeepAliveIntervalForAddressFamily:(int)arg1;
- (void)_saveWWANKeepAliveInterval;
- (void)_releasePowerAssertion;
- (void)_takePowerAssertionWithTimeout:(double)arg1;
- (id)persistentInterfaceManager;
- (void)_adjustInterfaceAssertions;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerInHomeCountryStatusChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)_setTimerGuidance:(double)arg1;
- (void)_pauseTimers;
- (void)_clearTimersReleasingPowerAssertion:(BOOL)arg1;
- (void)_clearTimers;
- (void)_calloutWithEvent:(int)arg1 context:(id)arg2;
- (void)_callDelegateWithEventAndContext:(id)arg1;
- (void)_delayTimerFired;
- (void)_intervalTimerFired;
- (BOOL)_hasBudgetRemaining;
- (void)_setupKeepAliveForReconnect;
- (void)_setupTimerForPollForAdjustment:(BOOL)arg1;
- (void)_adjustPollTimerIfNecessary;
- (void)_setupTimerForPushWithKeepAliveInterval:(double)arg1;
@property(nonatomic) int currentAddressFamily;
- (void)_adjustMinimumIntervalFallback;
- (void)setOperatorMinimumIntervalFallbackAllowed:(BOOL)arg1;
- (BOOL)operatorMinimumIntervalFallbackAllowed;
@property(nonatomic) BOOL minimumIntervalFallbackEnabled; // @synthesize minimumIntervalFallbackEnabled=_minimumIntervalFallbackEnabled;
@property(nonatomic) BOOL disableEarlyFire;
- (void)setEnableNonCellularConnections:(BOOL)arg1;
- (BOOL)shouldClientScheduleReconnectDueToFailure;
- (void)cancelPollingIntervalOverride;
- (void)setPollingIntervalOverride:(double)arg1;
@property(readonly, nonatomic) double pollingInterval;
- (BOOL)_isPushConnected;
- (void)setKeepAliveOverrideOnInterface:(long long)arg1 interval:(double)arg2 timeout:(double)arg3;
@property(nonatomic) BOOL usingServerStatsAggressively;
@property(nonatomic) double serverStatsExpectedKeepAliveInterval;
@property(nonatomic) double serverStatsMinKeepAliveInterval;
@property(nonatomic) double serverStatsMaxKeepAliveInterval;
- (void)_setMaximumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2;
@property double maximumKeepAliveInterval;
- (void)_setMinimumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2;
@property(nonatomic) double minimumKeepAliveInterval;
@property(readonly, nonatomic) double currentKeepAliveInterval;
@property(readonly, nonatomic) NSUInteger countOfGrowthActions;
@property(readonly, nonatomic) BOOL isRunning;
- (void)stopAndResetManager;
- (void)stopManager;
- (void)_resolveStateWithAction:(int)arg1;
- (void)_validateActionForCurrentStyle:(int)arg1;
- (void)resumeManagerWithAction:(int)arg1 forceGrow:(BOOL)arg2;
- (void)resumeManagerWithAction:(int)arg1;
- (void)startManager;
@property(readonly, nonatomic) int currentGrowthStage;
- (id)_currentGrowthAlgorithm;
- (id)_growthAlgorithmOnInterface:(long long)arg1;
- (void)setOnlyAllowedStyle:(int)arg1;
- (int)currentStyle;
- (void)_processDeviceConditionChanges;
- (void)_handleDeviceConditionChangeCallback;
- (void)_deregisterForDeviceConditionsNotifications;
- (void)_registerForDeviceConditionsNotifications;
- (void)_loadPreferencesGeneratingEvent:(BOOL)arg1;
- (void)_preferencesChanged;
- (void)dealloc;
@property(copy, nonatomic) NSString *duetIdentifier;
@property(nonatomic) __weak id <PCConnectionManagerDelegate> delegate;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3;
- (id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(NSUInteger)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4;
- (void)carrierBundleDidChange;
- (id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(NSUInteger)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6;

@end

