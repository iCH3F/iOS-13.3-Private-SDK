//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VKSceneConfiguration : NSObject
{
    shared_ptr_c37d6e02 _sceneManager;
    shared_ptr_a3c46825 _styleManager;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> _pointsOfInterest;
    unsigned char _navState;
    unsigned char _distanceToCurrentManeuver;
    double _distanceToDestination;
    int _currentManeuverType;
    unsigned char _currentStepLength;
    unsigned char _nextStepLength;
    unsigned char _currentIncidentType;
    unsigned char _currentManeuverComplexity;
    NSUInteger _currentGroupedManeuverCount;
    unsigned int _lineType;
    int _rampType;
    int _nextManeuverRampType;
    unsigned char _transportType;
    unsigned char _searchAlongTheRoute;
    unsigned char _vehicleSpeed;
    unsigned char _roadSpeed;
    NSUInteger _roadSpeedZeroes;
    unsigned char _cameraMode;
    unsigned char _navigationDestination;
    struct ManeveuverDistancesRange _distanceRanges;
    shared_ptr_e963992e _taskContext;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (unsigned char)navigationState;
- (NSUInteger)navigationDestination;
- (void)setNavigationDestination:(NSUInteger)arg1;
- (NSUInteger)navCameraMode;
- (void)setNavCameraMode:(NSUInteger)arg1;
- (void)setRoadSpeed:(double)arg1;
- (void)setVehicleSpeed:(double)arg1;
- (void)setSearchAlongTheRoute:(BOOL)arg1;
- (void)setCurrentTransportationType:(int)arg1;
- (void)setNextManeuverRampType:(int)arg1;
- (void)setRampType:(int)arg1;
- (void)setLineType:(unsigned int)arg1;
- (void)setCurrentGroupedManeuverCount:(NSUInteger)arg1;
- (void)setCurrentManeuverJunctionsCount:(NSUInteger)arg1;
- (void)setCurrentIncidentType:(NSUInteger)arg1;
- (void)setNextStepLength:(double)arg1;
- (void)setCurrentStepLength:(double)arg1;
- (void)setCurrentManeuverType:(int)arg1;
- (void)setDistanceToDestination:(double)arg1;
- (void)setDistanceToCurrentManeuver:(double)arg1;
- (void)setNavigationState:(int)arg1;
- (shared_ptr_a3c46825)styleManager;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1;
- (shared_ptr_c37d6e02)sceneManager;
- (void)_updateStyleManager;
- (void)setSceneManager:(shared_ptr_c37d6e02)arg1;
- (void)resetState;
- (id)initWithTaskContext:(const shared_ptr_e963992e )arg1;

@end

