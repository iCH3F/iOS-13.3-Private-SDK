//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOTraceRouteSimulator.h>

#import <Navigation/MNLocationProvider-Protocol.h>
#import <Navigation/MNTimeProvider-Protocol.h>

@class MNTraceEventRecorder, NSArray, NSBundle, NSMutableArray, NSString;
@protocol MNLocationProviderDelegate;

@interface MNTraceRouteSimulator : GEOTraceRouteSimulator <MNLocationProvider, MNTimeProvider>
{
    double _time;
    NSMutableArray *_priorityQueue;
    MNTraceEventRecorder *_recorder;
    id <MNLocationProviderDelegate> _delegate;
    id /* CDUnknownBlockType */ _authorizationRequestBlock;
    NSArray *_traceEvents;
    double _simulationSpeedOverride;
}

@property(nonatomic) double simulationSpeedOverride; // @synthesize simulationSpeedOverride=_simulationSpeedOverride;
@property(readonly, nonatomic) NSArray *traceEvents; // @synthesize traceEvents=_traceEvents;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authorizationRequestBlock; // @synthesize authorizationRequestBlock=_authorizationRequestBlock;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(NSUInteger)arg7 isSynthetic:(BOOL)arg8;
- (void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(NSUInteger)arg3;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSessionDidStart:(id)arg1;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) NSUInteger traceVersion;
@property(readonly, nonatomic) BOOL isTracePlayer;
@property(readonly, nonatomic) BOOL isSimulation;
@property(readonly, nonatomic) BOOL usesCLMapCorrection;
@property(nonatomic) long long activityType;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
@property(nonatomic) int headingOrientation;
@property(nonatomic) BOOL matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)resetForActiveTileGroupChanged;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (id)currentDate;
@property(readonly, nonatomic) double currentTime;
- (void)insertVoiceEventAtTime:(double)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)generateGuidanceWithRequest:(id)arg1 response:(id)arg2 routeAttributes:(id)arg3 routeIndex:(unsigned int)arg4 withCompletion:(id /* CDUnknownBlockType */)arg5;
- (void)generateGuidance;
- (void)recordLocationsAlongRouteWithRecorder:(id)arg1;
- (void)_generateEvents;
- (void)_tearDown;
- (void)_setup;

@end

