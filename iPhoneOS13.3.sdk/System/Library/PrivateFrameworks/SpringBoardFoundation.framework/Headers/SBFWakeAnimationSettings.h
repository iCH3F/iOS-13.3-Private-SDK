//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings;

@interface SBFWakeAnimationSettings : PTSettings
{
    double _backlightFadeDuration;
    double _speedMultiplierForWake;
    double _speedMultiplierForLiftToWake;
    SBFAnimationSettings *_dateWakeSettings;
    SBFAnimationSettings *_contentWakeSettings;
    double _awakeColorBrightness;
    double _awakeDateAlpha;
    SBFAnimationSettings *_awakeWallpaperFilterSettings;
    SBFAnimationSettings *_dateSleepSettings;
    double _sleepColorBrightness;
    SBFAnimationSettings *_sleepWallpaperFilterSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBFAnimationSettings *sleepWallpaperFilterSettings; // @synthesize sleepWallpaperFilterSettings=_sleepWallpaperFilterSettings;
@property(nonatomic) double sleepColorBrightness; // @synthesize sleepColorBrightness=_sleepColorBrightness;
@property(retain, nonatomic) SBFAnimationSettings *dateSleepSettings; // @synthesize dateSleepSettings=_dateSleepSettings;
@property(retain, nonatomic) SBFAnimationSettings *awakeWallpaperFilterSettings; // @synthesize awakeWallpaperFilterSettings=_awakeWallpaperFilterSettings;
@property(nonatomic) double awakeDateAlpha; // @synthesize awakeDateAlpha=_awakeDateAlpha;
@property(nonatomic) double awakeColorBrightness; // @synthesize awakeColorBrightness=_awakeColorBrightness;
@property(retain, nonatomic) SBFAnimationSettings *contentWakeSettings; // @synthesize contentWakeSettings=_contentWakeSettings;
@property(retain, nonatomic) SBFAnimationSettings *dateWakeSettings; // @synthesize dateWakeSettings=_dateWakeSettings;
@property(nonatomic) double speedMultiplierForLiftToWake; // @synthesize speedMultiplierForLiftToWake=_speedMultiplierForLiftToWake;
@property(nonatomic) double speedMultiplierForWake; // @synthesize speedMultiplierForWake=_speedMultiplierForWake;
@property(nonatomic) double backlightFadeDuration; // @synthesize backlightFadeDuration=_backlightFadeDuration;
// - (void).cxx_destruct;
- (void)setDefaultValues;

@end

