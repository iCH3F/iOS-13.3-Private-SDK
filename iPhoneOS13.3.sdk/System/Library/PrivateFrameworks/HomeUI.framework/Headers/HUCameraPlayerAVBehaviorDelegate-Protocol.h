//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HUCameraPlayerAVBehavior;

@protocol HUCameraPlayerAVBehaviorDelegate <NSObject>
- (void)pictureInPictureDidToggleMicrophone;
- (double)currentScrubberResolutionForBehavior:(HUCameraPlayerAVBehavior *)arg1;

@optional
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1;
- (void)playbackControlsDidToggleMuted:(BOOL)arg1;
@end

