//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDCameraProfileSettingsManager;

@protocol HMDCameraProfileSettingsManagerDelegate <NSObject>
- (void)cameraProfileSettingsManager:(HMDCameraProfileSettingsManager *)arg1 canDisableRecordingWithCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)cameraProfileSettingsManager:(HMDCameraProfileSettingsManager *)arg1 canEnableRecordingWithCompletion:(void (^)(BOOL, NSError *))arg2;
@end

