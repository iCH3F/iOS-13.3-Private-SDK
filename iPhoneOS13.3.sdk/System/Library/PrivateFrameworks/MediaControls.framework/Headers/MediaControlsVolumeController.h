//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/MPVolumeControllerDelegate-Protocol.h>

@class MPAVEndpointRoute, MPAVOutputDeviceRoute, MPVolumeController, NSHashTable, NSString;

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate>
{
    BOOL _isSplitRoute;
    BOOL _primaryInteractionEnabled;
    BOOL _secondaryInteractionEnabled;
    NSString *_volumeAudioCategory;
    MPAVEndpointRoute *_systemRoute;
    NSHashTable *_observers;
    MPVolumeController *_systemVolumeController;
    MPVolumeController *_primaryVolumeController;
    MPVolumeController *_secondaryVolumeController;
    MPAVOutputDeviceRoute *_systemOutputDeviceRoute;
    MPAVOutputDeviceRoute *_primaryOutputDeviceRoute;
    MPAVOutputDeviceRoute *_secondaryOutputDeviceRoute;
}

+ (BOOL)isDefaultPackage:(id)arg1;
@property(nonatomic) BOOL secondaryInteractionEnabled; // @synthesize secondaryInteractionEnabled=_secondaryInteractionEnabled;
@property(nonatomic) BOOL primaryInteractionEnabled; // @synthesize primaryInteractionEnabled=_primaryInteractionEnabled;
@property(retain, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute; // @synthesize secondaryOutputDeviceRoute=_secondaryOutputDeviceRoute;
@property(retain, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute; // @synthesize primaryOutputDeviceRoute=_primaryOutputDeviceRoute;
@property(retain, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute; // @synthesize systemOutputDeviceRoute=_systemOutputDeviceRoute;
@property(retain, nonatomic) MPVolumeController *secondaryVolumeController; // @synthesize secondaryVolumeController=_secondaryVolumeController;
@property(retain, nonatomic) MPVolumeController *primaryVolumeController; // @synthesize primaryVolumeController=_primaryVolumeController;
@property(retain, nonatomic) MPVolumeController *systemVolumeController; // @synthesize systemVolumeController=_systemVolumeController;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) MPAVEndpointRoute *systemRoute; // @synthesize systemRoute=_systemRoute;
@property(copy, nonatomic) NSString *volumeAudioCategory; // @synthesize volumeAudioCategory=_volumeAudioCategory;
@property(readonly, nonatomic) BOOL isSplitRoute; // @synthesize isSplitRoute=_isSplitRoute;
// - (void).cxx_destruct;
- (id)_volumePackageNameForRTL:(BOOL)arg1;
- (id)_packageNameForRoute:(id)arg1 isRTL:(BOOL)arg2 isSlider:(BOOL)arg3;
- (BOOL)_setupOutputDevicesAndVolumeControllersIfNeeded;
- (NSUInteger)_routeForVolumeController:(id)arg1;
- (void)_notifyUserInteractionEnabledChanged:(BOOL)arg1 routeType:(NSUInteger)arg2;
- (void)_notifyVolumeChangedForVolumeController:(id)arg1 volumeControlAvailable:(BOOL)arg2 effectiveVolume:(float)arg3;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)routeDidChangeNotification;
- (void)setUserInteractionEnabled:(BOOL)arg1 forRouteType:(NSUInteger)arg2;
- (BOOL)userInteractionEnabledForRouteType:(NSUInteger)arg1;
- (void)setVolume:(float)arg1 forRouteType:(NSUInteger)arg2;
- (BOOL)volumeControlAvailableForRouteType:(NSUInteger)arg1;
- (float)volumeForRouteType:(NSUInteger)arg1;
- (id)availableBluetoothListeningModeForRouteType:(NSUInteger)arg1;
- (id)setCurrentBluetoothListeningModeForRouteType:(NSUInteger)arg1 bluetoothListeningMode:(id)arg2;
- (id)currentBluetoothListeningModeForRouteType:(NSUInteger)arg1;
- (id)glyphStateForVolumeLevel:(double)arg1 packageName:(id)arg2;
- (id)packageNameForRouteType:(NSUInteger)arg1 isRTL:(BOOL)arg2 isSlider:(BOOL)arg3;
- (id)routeNameForRouteType:(NSUInteger)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

