//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXViewControllerZoomTransitionSettings : PXSettings
{
    BOOL _showRectsOfInterest;
    BOOL _animateViewControllersViews;
    BOOL _animateEndPointsContents;
    long long _animationType;
    long long _crossfadeType;
    double _transitionDuration;
    double _minimumZoomScale;
    double _maximumZoomScale;
    double _titleCrossfadeAmount;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) BOOL animateEndPointsContents; // @synthesize animateEndPointsContents=_animateEndPointsContents;
@property(nonatomic) BOOL animateViewControllersViews; // @synthesize animateViewControllersViews=_animateViewControllersViews;
@property(nonatomic) BOOL showRectsOfInterest; // @synthesize showRectsOfInterest=_showRectsOfInterest;
@property(nonatomic) double titleCrossfadeAmount; // @synthesize titleCrossfadeAmount=_titleCrossfadeAmount;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) double minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) long long crossfadeType; // @synthesize crossfadeType=_crossfadeType;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void)setDefaultValues;
- (id)parentSettings;

@end

